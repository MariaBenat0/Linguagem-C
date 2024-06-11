#include <stdio.h>

int main() {
    int saldo = 7500;
    int opcao = 0;
    int valor;

    printf("Seja bem-vindo ao Caixa Eletr�nico!\n");
    printf("1 - Ver Saldo\n");
    printf("2 - Fazer Saque\n");
    printf("3 - Fazer Deposito\n");
    printf("4 - Sair\n");

    printf("\nEscolha uma opcao: ");
    scanf("%i", &opcao);

    if (opcao == 1) {
        printf("Seu saldo �: R$%d\n", saldo);
    } else if (opcao == 2) {
        printf("Fale o valor que deseja sacar: R$");
        scanf("%d", &valor);
        if (valor > saldo) {
            printf("Saldo insuficiente!\n");
        } else {
            saldo -= valor;
            printf("Saque de R$%d realizado com sucesso!\n", valor);
        }
    } else if (opcao == 3) {
        printf("Fale o valor que deseja depositar: R$");
        scanf("%d", &valor);
        saldo += valor;
        printf("Deposito de R$%d realizado com sucesso!\n", valor);
    } else if (opcao == 4) {
        printf("Obrigado volte sempre!!\n");
    } else {
        printf("Opcao invalida! Tente novamente.\n");
    }

    return 0;
}
