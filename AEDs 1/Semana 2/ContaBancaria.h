#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#ifndef ContaBancaria_h
#define ContaBancaria_h

//TAD Conta Bancaria
typedef struct{
    int NumeroConta;
    char Nome[20];
    char Cpf[15];
    int TipoDeConta;
    int AnoDA;
    double saldo;
}ContaBancaria;

//Operações Getters
char *getNome(ContaBancaria *b);
int getNumeroDaConta(ContaBancaria *b);
int getAnoDeAbertura(ContaBancaria *b);
int getTipoDeConta(ContaBancaria *b);
char *getCPF(ContaBancaria *b);
double getSaldo(ContaBancaria *b);

//Operações de Setters
void setNome(ContaBancaria *b, char *nome);
void setNumeroDaConta(ContaBancaria *b, int numero);
void setAnoDeAbertura(ContaBancaria *b, int anoDA);
void setTipoDeConta(ContaBancaria *b, int tipo);
void setCPF(ContaBancaria *b, char *Cpf);
void setSaldo(ContaBancaria *b);

//Operações Manipulação de Saldo
void Saque(ContaBancaria *b, double saldo);
void Deposito(ContaBancaria *b, double saldo);

//Operaçõe de Emprestimo
int ValidarConta(ContaBancaria *b);

//Imprimir Conta
void ImprimirConta(ContaBancaria *b);
#endif
