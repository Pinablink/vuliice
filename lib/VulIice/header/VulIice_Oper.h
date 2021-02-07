#ifndef VULIICE_OPER_H

// CODIGOS DE OPERACAO
#define OPER_LIMPEZA_CONTADORES_SERIAL          01H
#define OPER_RECEBER_DADOS_SERIAL               02H
#define OPER_RETORNAR_ERRO_ESTRUTURA_SERIAL     03H
#define OPER_EXCLUIR_MENSAGEM_MEM_RAM           04H
#define OPER_EXCLUIR_MENSAGEM_SERIAL_MEM_RAM    05H
#define OPER_VALIDAR_CONTEUDO                   06H
#define OPER_CRIAR_ERRO_ESTRUTURAL_MENSAGEM     07H

// DEFINA UM REGISTRADOR QUE CONTERÁ UM CÓDIGO DE 16 BITS DA OPERAÇÃO QUE DEVERÁ
// SER EXECUTADA. POR EXEMPLO, PARA UMA ROTINA CHAMAR LIMPEZA_CONTADORES_SERIAL
// -----------------------------------------------------------------------------
//       EXEMPLO:
// -----------------------------------------------------------------------------
// MOV.W #OPER_LIMPEZA_CONTADORES_SERIAL,VULIICE_OPER 

#define VULIICE_OPER R11


// É NECESSÁRIO 3 CONTADORES DE 16 BITS PARA REALIZAÇÃO DO PROCESSAMENTO
// DO CONTEÚDO. DEFINA 3 REGISTRADORES PARA ESSA FINALIDADE
// -----------------------------------------------------------------------------
//       EXEMPLO:
// -----------------------------------------------------------------------------
// #define  CONTADOR_SERIAL_1 R8
// #define  CONTADOR_SERIAL_2 R9
// #define  CONTADOR_SERIAL_3 R10 


#define  SUPORTE_CONTADOR_SERIAL_1 R8
#define  SUPORTE_CONTADOR_SERIAL_2 R9
#define  SUPORTE_CONTADOR_SERIAL_3 R10 

// MEMORIA RAM
// CONTROLADORES
// -----------------------------------------------------------------------------
// TAMANHO DO CONTEÚDO
#define   IIBYTE_TAMANHO_DADOS                00A00H
#define   IBYTE_ERRO_FORMATO_DADO_SERIAL      045H
#define   IBYTE_ERRO_ESTOURO_MEMORIA_SERIAL   09DH  
#define   IBYTE_SUCESSO_DADO_SERIAL           04FH
#define   IBYTE_RECEBENDO_DADOS               06FH
#define   IBYTE_DADOS_RECEBIDOS               07FH  
#define   IBYTE_PROCESSO_AGUARDANDO           08FH
// -----------------------------------------------------------------------------
// LSB          [XX] - 
// MSB          [XX] - 
// -----------------------------------------------------------------------------
// STATUS -     [XX] -   ERRO;  SUCESSO; AGUARDANDO
// -----------------------------------------------------------------------------
#define  CONF_LEN_DADOS           0203H
#define  CONF_STATUS_SERIAL_DATA  0204H
#define  CONF_STATUS_PROCESS      0205H
#define  LEN_I_MESSAGE            0206H
#define  LEN_SERIAL_MESSAGE       0207H // TAMANHO DA MENSAGEM GERADA COM A INFORMAÇÃO RECEBIDA
#define  CONF_IN_SERIAL_DATA      0209H

#endif