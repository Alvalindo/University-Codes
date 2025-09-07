#include "ContaBancaria.h"

//Funcões De Gettes

char *getNome(ContaBancaria *b){
    return b->Nome;
}
int getNumeroDaConta(ContaBancaria *b){
    return b->NumeroConta;
}
int getAnoDeAbertura(ContaBancaria *b){
    return b->AnoDA;
}
int getTipoDeConta(ContaBancaria *b){
    return b->TipoDeConta;
}
char *getCPF(ContaBancaria *b){
    return b->Cpf;
}
double getSaldo(ContaBancaria *b){
    return b->saldo;
}

//Funcções De Setters

void setNome(ContaBancaria *b, char *nome){
    strcpy(b->Nome,nome);
}
void setNumeroDaConta(ContaBancaria *b, int numero){
    b->NumeroConta = numero;
}
void setAnoDeAbertura(ContaBancaria *b, int anoDA){
    b->AnoDA = anoDA;
}
void setTipoDeConta(ContaBancaria *b, int tipo){
    b->TipoDeConta = tipo;
}
void setCPF(ContaBancaria *b, char *Cpf){
    strcpy(b->Cpf,Cpf);
}
void setSaldo(ContaBancaria *b){
    b->saldo = 0;
}

//Funções de Manipulação de Saldo
void Saque(ContaBancaria *b, double saldo){
    if(b->saldo >= saldo && b->saldo > 0){
        b->saldo -= saldo;
        printf("Você sacou R$%.2f\n",saldo);
    }else{
        printf("Você só pode sacar: R$%.2f\n",b->saldo);
    }
}
void Deposito(ContaBancaria *b, double saldo){
    if(saldo > 0){
        b->saldo += saldo;
        printf("Você depositou R$%.2f\n",saldo);
    }else printf("Impossivel depositos inferiores que R$0,01\n");
}
//Função de Emprestimo
int ValidarConta(ContaBancaria *b){
    int validador = 2025 - getAnoDeAbertura(b);
    if(5 <= validador) return 1;
    else return 0;
}
//Função de Printar Conta
void ImprimirConta(ContaBancaria *b){
    printf("======Conta-%d======\n",getNumeroDaConta(b));
    printf("==Nome:%s",getNome(b));
    printf("==CPF:%s",getCPF(b));
    printf("==Ano da Conta:%d\n",getAnoDeAbertura(b));
    printf("==Saldo:%.2f\n",getSaldo(b));
    if(getTipoDeConta(b) == 0) printf("==Tipo de Conta: Poupança\n");
    else printf("==Tipo de Conta: Corrente\n");
    printf("=====================\n");
}
