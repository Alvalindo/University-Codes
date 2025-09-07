#include "ContaBancaria.h"
#include <stdio.h>

int main(){
    double ValorADepositar, ValorASacar;
    int numeroDaConta, AnoDeAbertura, TipoDaconta;
    char nome[20], Cpf[15];
    ContaBancaria conta;

    //Dados do Usuário
    printf("Digite o seu nome:\n");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite o seu CPF:\n");
    fgets(Cpf, sizeof(Cpf), stdin);

    printf("Digite 0 para conta poupança, e 1 para corrente:\n");
    scanf("%d",&TipoDaconta);

    AnoDeAbertura = 2013;
    numeroDaConta = (rand()%200);

    //Setando os Valores do Usuário
    setTipoDeConta(&conta, TipoDaconta);
    setNome(&conta, nome);
    setCPF(&conta, Cpf);
    setSaldo(&conta);
    setAnoDeAbertura(&conta, AnoDeAbertura);
    setNumeroDaConta(&conta, numeroDaConta);

    //Adicionando saldo
    printf("Quanto Quer depositar?:\n");
    scanf("%lf",&ValorADepositar);
    Deposito(&conta, ValorADepositar);

    //Retirando Valor
    printf("Quanto Quer Sacar?:\n");
    scanf("%lf",&ValorASacar);
    Saque(&conta, ValorASacar);

    //Verificando emprestimo
    if(ValidarConta(&conta) == 1) printf("Você podera adquirir um emprestimo!\n");
    else printf("Você não pode fazer empresimo!\n");

    //Imprimir a conta
    ImprimirConta(&conta);
}
