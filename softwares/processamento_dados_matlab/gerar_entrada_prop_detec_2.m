% Arquivo para gerar pontos de entrada para treinamento da RNA
clear;
clc;

%% Valores fixos
a1_peq = 0.079173043608984;
a2_peq = 0.079173043608984;
a1_med = 0.178139348120214;
a2_med = 0.178139348120214;
a1_gde = 0.242467446052514;
a2_gde = 0.242467446052514;

%% Parametros
% Tempo de simulacao em segundos
% tempo_seg = 60 * 10; % 10 minutos (Identificacao)
% tempo_seg = 60 * 20; % 20 minutos (Deteccao de falhas)
tempo_seg = 60 * 1.75; % 1 minuto e 45 segundos (Resultados Qualificacao)

% Periodo de amostragem em segundos
periodo_amost = 0.1;

% Vetor de tempo
t = 0.0 : periodo_amost : tempo_seg - periodo_amost;

% Ganhos dos sensores
ganho_sensor_t1 = 1.0;
ganho_sensor_t2 = 1.0;

% Offset dos sensores
offset_sensor_t1 = 0.0;
offset_sensor_t2 = 0.0;

% Porcentagem de ruido dos sensores
porcent_ruido_sensor_t1 = 0.0;
porcent_ruido_sensor_t2 = 0.0;

% Ganho dos atuadores
ganho_atuador_t1 = 1.0;
ganho_atuador_t2 = 1.0;

% Offset dos atuadores
offset_atuador_t1 = 0.0;
offset_atuador_t2 = 0.0;

% Porcentagem de ruido dos atuadores
porcent_ruido_atuador_t1 = 0.0;
porcent_ruido_atuador_t2 = 0.0;

% Area do orif�cio de vazamento
area_orif_vazamento_t1 = 0.0; %a1_med / 10;
area_orif_vazamento_t2 = 0.0; %a2_med / 10;

% Constantes das bombas
constante_bomba_t1 = 4.6;
constante_bomba_t2 = 4.6;

% Orificios de saida
area_orif_saida_t1 = a1_med;
area_orif_saida_t2 = a2_med;

% Ganho dos modulos de potencia
ganho_mod_pot_t1 = 1.0;
ganho_mod_pot_t2 = 1.0;

% =========================================================================
% Determinando a ordem das falhas para gerar os dados de maneira adequada
% =========================================================================
falhas = { 'FSeDG' 'FSeDO' 'FSeSR' 'FSeQ' ...
           'FADG' 'FADO' 'FASR' 'FAVK' 'FAQ' ...
           'FSiVzT' 'FSiVrOS' 'FSiVrGMP' 'FSiEOS' };
       
colunas = [ 2 3 ; 4 5 ; 6 7 ; 2 3 ; ...             % Falhas nos sensores
            8 9 ; 10 11 ; 12 13 ; 16 17 ; 8 9 ; ... % Falhas nos atuadores
            14 15 ; 18 19 ; 20 21 ; 18 19 ];        % Falhas no sistema
        
val_param = [ ganho_sensor_t1 1.0 1.0 ganho_sensor_t1 ...
              ganho_atuador_t1 1.0 1.0 constante_bomba_t1 ganho_atuador_t1 ...
              a1_med a1_med ganho_mod_pot_t1 a1_med ];

min_max = [ 0.8 0.8 ; -2.0 -2.0 ; 0.02 0.02 ; 0.0 0.0 ; ...
            0.8 0.8 ; -0.5 -0.5 ; 0.02 0.02 ; 0.75 0.75 ; 0.0 0.0 ; ...
            0.5 0.5 ; 0.85 0.85 ; 0.9 0.9 ; 0.25 0.25 ];
        
referencia_t1 = 15;
referencia_t2 = 20;
       
for N = 1 : length( falhas )
    disp( strcat( falhas{N}, ' ............' ) );
    
    num_amostras = length( t );

    ref_t1 = referencia_t1*ones( num_amostras, 1 );
    ref_t2 = referencia_t2*ones( num_amostras, 1 );
  
    M = [ t', ...
          ones( num_amostras, 1 ) * ganho_sensor_t1, ...
          ones( num_amostras, 1 ) * ganho_sensor_t2, ...
          ones( num_amostras, 1 ) * offset_sensor_t1, ...
          ones( num_amostras, 1 ) * offset_sensor_t2, ...
          ones( num_amostras, 1 ) * porcent_ruido_sensor_t1, ...
          ones( num_amostras, 1 ) * porcent_ruido_sensor_t2, ...
          ones( num_amostras, 1 ) * ganho_atuador_t1, ...
          ones( num_amostras, 1 ) * ganho_atuador_t2, ...
          ones( num_amostras, 1 ) * offset_atuador_t1, ...
          ones( num_amostras, 1 ) * offset_atuador_t2, ...
          ones( num_amostras, 1 ) * porcent_ruido_atuador_t1, ...
          ones( num_amostras, 1 ) * porcent_ruido_atuador_t2, ...
          ones( num_amostras, 1 ) * area_orif_vazamento_t1, ...
          ones( num_amostras, 1 ) * area_orif_vazamento_t2, ...
          ones( num_amostras, 1 ) * constante_bomba_t1, ...
          ones( num_amostras, 1 ) * constante_bomba_t2, ...
          ones( num_amostras, 1 ) * area_orif_saida_t1, ...
          ones( num_amostras, 1 ) * area_orif_saida_t2, ...
          ones( num_amostras, 1 ) * ganho_mod_pot_t1, ...
          ones( num_amostras, 1 ) * ganho_mod_pot_t2, ...
          ref_t1, ...
          ref_t2 ];

    %% Dados para as falhas
    
    % Parametros a serem modificados
    % Nome da falha
    nome_falha = falhas{N};

    % Colunas a serem modificadas para as falhas no tanque 1 e 2 (olhar
    % acima)
    cols = colunas( N, : );

    % Valor a ser modificado
    valor_param = val_param( N );

    % Porcentagens minima e maxima de alteracao
    min = min_max( N, 1 );
    max = min_max( N, 2 );

    % Falhas para treinamento --------------------------------------------- 
    % Dentro do tempo total, sera simulado um periodo sem falha, um periodo
    % com falha somente no tanque 1, um periodo com falha somente no tanque
    % 2 e um ultimo periodo com falha nos dois tanques. Por esse motivo o
    % numero de amostras e dividido por quatro.
    %
    % No primeiro intervalo nao sera simulada nenhuma falha, logo so ha
    % necessidade de modificar os intervalos 2 a 4. Portanto, para um caso
    % com 12000 amstras as linhas a serem modificadas serao da 3001 ate a
    % 6000, da 6001 ate a 9000 e da 9001 ate a 12000
    
%     num_amostras = size( M, 1 );
% 
%     div = num_amostras / 4;
% 
%     linhas = [div+1 2*div; 2*div+1 3*div; 3*div+1 4*div];
%
%     for i = 1 : size( linhas, 1 )
%         for j = linhas( i, 1 ) : linhas( i, 2 )
%             % Falha somente no tanque 1 ou somente no tanque 2
%             if i == 1 || i == 2
%                 M( j, cols( i ) ) = valor_param * random( min, max );
%             % Falha nos dois tanques
%             else
%                 M( j, cols( 1 ) ) = valor_param * random( min, max );
%                 M( j, cols( 2 ) ) = valor_param * random( min, max );
%             end
%         end
%     end
    
    % Falhas para as simulacoes da qualificacao --------------------------------
    % As simulacoes serao feitas em intervalos de 105 segundos (1 minuto e 45
    % segundos) no qual existirao 7 segmentos, comecando com um intervalo sem
    % falha e terminando com um intervalo sem falha. Cada intervalo sera de 15
    % segundos (tempo suficiente para estabilizacao do processo)

    num_amostras = size( M, 1 );

    div = num_amostras / 7;

    linhas = [  div+1 2*div ; 3*div+1 4*div ; 5*div+1 6*div ];

    for i = 1 : size( linhas, 1 )
        for j = linhas( i, 1 ) : linhas( i, 2 )
            if i == 1 || i == 2
                M( j, cols( i ) ) = valor_param * random( min, max );
            % Falha nos dois tanques
            else
                M( j, cols( 1 ) ) = valor_param * random( min, max );
                M( j, cols( 2 ) ) = valor_param * random( min, max );
            end
        end
    end

    % Saida para arquivo
    % nome_arq_saida = strcat( 'config_', ...
    %                          strcat( num2str( num_amostras ), '.cfg' ) );
    
    nome_arq_saida = strcat( '../simulacao_tanques_cpp/entradas/', ...
                              nome_falha, '/qualif.cfg' );

% COMENTADO PARA GERAR OS GRAFICOS DE RESULTADOS DA QUALIFICACAO ==========
%     if N == 1
%         nome_arq_saida = strcat( '..\simulacao_tanques_cpp\entradas\', ...
%                                  nome_falha, '\qualificacao.cfg' );
%     else
%         nome_arq_saida = strcat( '..\simulacao_tanques_cpp\entradas\', ...
%                                  nome_falha, '\v', num2str( N-1 ), '.cfg' );
%     end

    fid = fopen( nome_arq_saida, 'w' );
    
    fprintf( fid, '%d\n', num_amostras );
    
    fclose( fid );

    dlmwrite( nome_arq_saida, M, '-append', 'delimiter', '\t' );
    
    clear M;
end