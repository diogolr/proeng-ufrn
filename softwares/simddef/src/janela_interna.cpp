#ifndef JANELA_INTERNA_CPP_
#define JANELA_INTERNA_CPP_

#include "janela_interna.h"

JanelaInterna :: JanelaInterna( QWidget *pai ) : QWidget( pai )
{
    ui = new Ui_JanelaInterna;

    ui->setupUi( this );

    inicializar();
}


JanelaInterna :: ~JanelaInterna()
{
    delete ui;
}


void JanelaInterna :: atualizar_deteccoes()
{
    // Atualização da escala para, replotando o grafico para que os eixos x e y
    // estejam adequadamente representados de acordo com os valores das curvas 
    ui->grafico->atualizar_escala( true );
    ui->grafico->atualizar_deteccoes( true );
}


void JanelaInterna :: configurar_curvas( const QString &nome_falha,
                                         const MatrizD &dados,
                                         const QHash< int, QString > &curvas,
                                         const double &periodo_amostragem )
{
    // Adicionando o conjunto das curvas
    try
    {
        ui->grafico->adicionar_conjunto( nome_falha );
    }
    catch( Excecao e )
    {
        // Se o conjunto já existir, não precisa exibir nenhuma mensagem de
        // erro. Basta atualizar os valores das curvas...
        ui->grafico->remover_curvas( nome_falha );
    }

    // Adicionando as curvas ao conjunto. Perceba que se o conjunto não existia,
    // as curvas serão criadas pela primeira vez e se o conjunto já existia, as
    // curvas foram removidas e serão criadas novamente
    QList< int > curvas_escolhidas = curvas.keys();

    qSort( curvas_escolhidas );

    QList< QString > nomes_curvas = curvas.values();

    int num_cores = lista_cores.count();
    int num_curvas = curvas_escolhidas.count();

    QColor cor;

    VetorD coluna;

    double x, y;

    for ( int c = 0 ; c < num_curvas ; c++ )
    {
        // Configurando a cor da curva
        if ( c >= num_cores )
        {
            cor = QColor( rand() % 256, rand() % 256, rand() % 256, 255 );
        }
        else
        {
            cor = lista_cores[c];
        }

        try
        {
            // Adicionando a curva ao grafico e a legenda
            ui->grafico->adicionar_curva( nome_falha, 
                                          curvas[ curvas_escolhidas[c] ], 
                                          QPen( cor ) );
        }
        catch( Excecao e )
        {
            throw e;
        }

        // Inserindo os dados
        coluna = dados.get_column( curvas_escolhidas[c] );

        x = 0.0;
        y = 0.0;

        for ( int a = 0 ; a < coluna.get_size() ; a++ )
        {
            x += periodo_amostragem;
            y = coluna[a];

            try
            {
                ui->grafico->adicionar_xy( nome_falha, 
                                           curvas[ curvas_escolhidas[c] ], 
                                           x, 
                                           y, 
                                           false );
            }
            catch( Excecao e )
            {
                throw e;
            }
        }

        coluna.set( 0 );
    }

    ui->grafico->atualizar();
}


void JanelaInterna :: configurar_deteccoes( const QString &nome_falha,
                                            const QHash< QString, 
                                                         MatrizI > &deteccoes,
                                            const double &periodo_amostragem )
{
    QList< QString > nomes_deteccoes = deteccoes.keys();

    qSort( nomes_deteccoes );

    MatrizI saida;

    QPair< double, double > inicio_fim;

    QColor cor;
    
    int num_cores = lista_cores.count();

    for ( int i = 0 ; i < nomes_deteccoes.count() ; i++ )
    {
        // Configurando a cor da curva
        if ( i >= num_cores )
        {
            cor = QColor( rand() % 256, rand() % 256, rand() % 256, 255 );
        }
        else
        {
            cor = lista_cores[i];
        }

        // Transparencia de 50% para as deteccoes
        cor.setAlpha( 50 );

        try
        {
            ui->grafico->adicionar_deteccao( nome_falha, 
                                             nomes_deteccoes[i],
                                             QPen( cor, 0 ),
                                             QBrush( cor ) );
        }
        catch( Excecao e )
        {
            throw e;
        }

        saida = deteccoes[ nomes_deteccoes[i] ];

        for ( int a = 0 ; a < saida.get_rows_number() ; a++ )
        {
            inicio_fim.first = saida[a][0] * periodo_amostragem;
            inicio_fim.second = saida[a][1] * periodo_amostragem;

            try
            {
                ui->grafico->adicionar_intervalo_detec( nome_falha,
                                                        nomes_deteccoes[i],
                                                        inicio_fim,
                                                        false );
            }
            catch( Excecao e )
            {
                throw e;
            }
        }
    }

    ui->grafico->atualizar();
}


void JanelaInterna :: limpar()
{
    ui->grafico->limpar();
    ui->legenda->limpar();
}


void JanelaInterna :: remover_conjunto( const QString &nome_falha )
{
    try
    {
        ui->grafico->remover_conjunto( nome_falha );
    }
    catch( Excecao e )
    {
        throw e;
    }
}


void JanelaInterna :: remover_curvas( const QString &nome_falha )
{
    try
    {
        ui->grafico->remover_curvas( nome_falha );
    }
    catch( Excecao e )
    {
        throw e;
    }
}


void JanelaInterna :: remover_deteccoes( const QString &nome_falha )
{
    try
    {
        ui->grafico->remover_deteccoes( nome_falha );
    }
    catch( Excecao e )
    {
        throw e;
    }
}


void JanelaInterna :: inicializar()
{
    // Associando a legenda ao grafico
    ui->grafico->configurar_legenda( ui->legenda );
    ui->grafico->habilitar_legenda( true ); 

    // Desabilitando a legenda até que algum conjunto de itens esteja visível
    ui->legenda->setVisible( false );

    // Zoom
    ui->grafico->habilitar_zoom( false );

    // Nomes dos eixos
    QString nome_eixo_x = "Tempo Aproximado [s]";
    QString nome_eixo_y =  utf8( "Nível [cm] | Erro Est. [cm] | Tensão [V]" );

    ui->grafico->configurar_nomes_eixos( nome_eixo_x, nome_eixo_y );
                                        

    lista_cores << Qt::red
                << Qt::blue
                << Qt::darkGreen
                << Qt::magenta
                << Qt::cyan
                << Qt::green
                << Qt::yellow
                << Qt::black
                << Qt::darkCyan
                << Qt::darkYellow
                << Qt::darkGray;
}


void JanelaInterna :: on_zoom_clicked( bool selecionado )
{
    ui->grafico->habilitar_zoom( selecionado );
}


void JanelaInterna :: on_imprimir_clicked()
{
    ui->grafico->imprimir();
}


void JanelaInterna :: on_salvar_clicked()
{
    ui->grafico->salvar();
}



#endif
