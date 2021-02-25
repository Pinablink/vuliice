#ifndef VULIICE_OPER_H


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
#define  JSON_STRUCT_STATUS        R10 
#define  CARACTER                  R11

// MEMORIA RAM
// CONTROLADORES
// -----------------------------------------------------------------------------
// TAMANHO DO CONTEÚDO
#define   IIBYTE_TAMANHO_DADOS                 00A00H
#define   IBYTE_ERRO_FORMATO_DADO_SERIAL       045H
#define   IBYTE_ERRO_FORMATO_SERIAL_QT_MARK    046H
#define   IBYTE_ERRO_FORMATO_UNKNOW_JSON       047H
#define   IBYTE_ERRO_COMMA_CLOSING_NOT_ALLOWED 048H
#define   IBYTE_ERRO_IN_OBJ_DUP_CUP            049H
#define   IBYTE_ERRO_QUOT_MARKS_UNK_KEY_CONTEN 04AH
#define   IBYTE_ERRO_SPECIAL_CHARACTER         04BH
#define   IBYTE_ERRO_COLLECTION_THIS_VERSION   04CH
#define   IBYTE_ERRO_ESTOURO_MEMORIA_SERIAL    09DH  
#define   IBYTE_SUCESSO_DADO_SERIAL            04FH
#define   IBYTE_RECEBENDO_DADOS                06FH
#define   IBYTE_DADOS_RECEBIDOS                07FH  
#define   IBYTE_PROCESSO_AGUARDANDO            08FH
// -----------------------------------------------------------------------------
// LSB          [XX] - 
// MSB          [XX] - 
// -----------------------------------------------------------------------------
// STATUS -     [XX] -   ERRO;  SUCESSO; AGUARDANDO
// -----------------------------------------------------------------------------
#define  CONF_LEN_DADOS           0203H
#define  CONF_STATUS_PROCESS      0205H
#define  LEN_I_MESSAGE            0206H   // TAMANHO DA MENSAGEM QUE SERÁ RETORNADA NA SERIAL
#define  LEN_SERIAL_MESSAGE       0207H  //  TAMANHO DA MENSAGEM GERADA COM A INFORMAÇÃO RECEBIDA
#define  LEN_KEY_CONTENT          0208H //   TAMANHO DO CONTEUDO DA CHAVE 
#define  LEN_VALUE_CONTENT        0209H //   TAMANHO DO CONTEUDO DO VALOR
#define  CONF_IN_SERIAL_DATA      020AH

#endif