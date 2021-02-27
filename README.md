# vuliice
Biblioteca em ASM para implementação nos MCU's MSP430. Com essa biblioteca será possivel o envio de dados em JSON para Porta Serial do MSP430 e ter disponível seus parâmetros.

## Status
Em fase de desenvolvimento

</br>

## VuliiceOper - Header de Configuração
#### VulIice_Oper.h
____
Contem as definições para os espaços definididos de memória e 


</br>

## Controle e Regra no Registrador
## 🔨 Sessão de Controle Binário em Processo de Desenvolvimento 🔨

</br>
|15 | 14 | 13 | 12 | 11 | 10 | 09 | 08 | 07 | 06 | 05 | 04 | 03 | 02 | 01 | 00 |

_____

- BIT0 SETADO = HOUVE ABERTURA DE { - OBJETO CRIADO
- BIT1 SETADO = HOUVE ABERTURA DE ASPAS
- BIT2 SETADO = FECHAMENTO DE ASPAS. 
- BIT3 SETADO = CONTEUDO CHAVE - PRECISA SE MANTER LIGADO ATÉ O FIM DA INCLUSAO DO ATRIBUTO
- BIT4 SETADO = CONTEUDO VALOR - PRECISA SE MANTER LIGADO ATÉ O FIM DA INCLUSAO DO ATRIBUTO
- BIT5 SETADO = HOUVE INCLUSAO DE : 
- BIT6 SETADO = O CONTEUDO É STRING
- BIT7 SETADO = O CONTEUDO É NUMERICO
- BIT8 SETADO = HOUVE INFORMAÇÃO DE , (VIRGULA). VERIFICAR 
- BIT9 SETADO = ABERTURA DE ASPAS, CONTEUDO DO VALOR
- BIT10 SETADO = CONTEUDO VALOR
- BIT11 SETADO = FECHAMENTO DE ASPAS, CONTEUDO DO VALOR

</br>

- BIT15 SETADO = HOUVE INFORMAÇÃO DE } VERIFICAR SE O BIT1, BIT2, BIT3, BIT4 E BIT5 OU BIT6 ESTÃO SETADOS
