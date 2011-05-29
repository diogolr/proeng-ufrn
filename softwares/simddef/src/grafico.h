#ifndef GRAFICO_H_
#define GRAFICO_H_

// Aqui são colocados os "protótipos" das classes para evitar problemas de
// declaração devido a dependência circular dos arquivos grafico.h e
// conjunto_itens.h
class Grafico;
class ConjuntoItens;

#include <QBrush>
#include <QByteArray>
#include <QColor>
#include <QFileDialog>
#include <QFont>
#include <QImageWriter>
#include <QLinearGradient>
#include <QList>
#include <QPair>
#include <QPalette>
#include <QPen>
#include <QPrintDialog>
#include <QPrinter>
#include <QRectF>
#include <QSizeF>
#include <QString>
#include <QStringList>
#include <QWidget>

#include <qwt_plot.h>
#include <qwt_plot_canvas.h>
#include <qwt_plot_curve.h>
#include <qwt_plot_grid.h>
#include <qwt_plot_layout.h>
#include <qwt_plot_renderer.h>
#include <qwt_plot_zoomer.h>
#include <qwt_text.h>

#include "conjunto_itens.h"
#include "excecoes.h"
#include "legenda.h"

class Grafico : public QwtPlot
{
    Q_OBJECT

    // Metodos
    public:
        Grafico( QWidget *pai = NULL );
        ~Grafico();

        void adicionar_conjunto( const QString & );
        void adicionar_curva( const QString &, 
                              const QString &,
                              const QPen & = QPen(),
                              const QwtPlotCurve::CurveStyle & = 
                                    QwtPlotCurve::Lines );
        void adicionar_deteccao( const QString &, 
                                 const QString &,
                                 const QPen & = QPen(),
                                 const QBrush & = QBrush() );
        void adicionar_intervalo_detec( const QString &,
                                        const QString &,
                                        const QPair< double, double > &,
                                        const bool & = true );
        void adicionar_xy( const QString &, 
                           const QString &,
                           const double &,
                           const double &,
                           const bool & = true );
        void configurar_legenda( Legenda * );
        void configurar_nomes_eixos( const QString &, const QString & );
        void imprimir();
        void limpar( const bool & = true );
        void remover_conjunto( const QString &, const bool & = true );
        void remover_curva( const QString &, 
                            const QString &, 
                            const bool & = true );
        void remover_curvas( const QString &, const bool & = true );
        void remover_deteccao( const QString &, 
                               const QString &, 
                               const bool & = true );
        void remover_deteccoes( const QString &, const bool & = true );
        void salvar();

    private:
        void configurar();
        void inicializar();

    public slots:
        void atualizar();
        void atualizar_deteccoes( const bool & = true );
        void atualizar_escala( const bool & = true );

        void habilitar_legenda( const bool & );
        void habilitar_zoom( const bool & );

    // Atributos
    private:
        Legenda *legenda;

        QStringList nomes_conjuntos;

        QList< ConjuntoItens > conjuntos;

        QWidget *pai;

        QwtPlotZoomer *zoom;
};

#endif
