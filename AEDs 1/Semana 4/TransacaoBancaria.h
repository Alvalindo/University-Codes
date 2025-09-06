#include <stdatomic.h>
#include <time.h>
#ifndef TransacaoBancaria_h
#define TransacaoBancaria_h

typedef struct{
    int identificador; //ID da transação
    struct tm Datahora; //Data e Hora
    char TipoOp[30]; //Pix,Boleto ...
    double valor; //Valor da transação
}TransacaoBancaria;

//Operações de entrada e saída
void inicializaTB(TransacaoBancaria* trans, int* id, char* tipoOP, double* valor);
void printarTB(const TransacaoBancaria* trans);
#endif
