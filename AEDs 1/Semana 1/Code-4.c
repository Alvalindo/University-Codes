#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[20];
    char datanc[11];
    char cpf[15];
}Pessoa;

void inicializaPessoa(Pessoa *p, char *nome, char *datanc, char *cpf){
    strcpy(p->nome,nome);
    strcpy(p->cpf,cpf);
    strcpy(p->datanc,datanc);
}
void imprime(Pessoa p){
    printf("========Pessoa========\n");
    printf("==NOME:%s",p.nome);
    printf("==CPF:%s",p.cpf);
    printf("==DAT/NASC:%s",p.cpf);
    printf("======================\n");
}
int main(){
    Pessoa n;
    char nome[20]; char cpf[15]; char datanc[11];

    printf("Qual seu NOME?:");
    fgets(nome,sizeof(nome),stdin);

    printf("Qual seu DATA DE NASCIMENTO?:");
    fgets(datanc,sizeof(datanc),stdin);

    printf("Qual seu CPF?:");
    fgets(cpf,sizeof(cpf),stdin);

    inicializaPessoa(&n, nome, datanc, cpf);

    imprime(n);
    return 0;
}
