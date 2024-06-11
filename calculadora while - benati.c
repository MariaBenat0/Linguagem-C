#include <stdio.h>
int main() {
  char operacao, continuar ;

  do{
  printf("Digite a operacao desejada (+, -, *, /):  ");
  scanf(" %c", &operacao);
  switch (operacao) {

    case '+':
      printf("Soma\n");
      break;

    case '-':
      printf("Subtracao\n");
      break;

    case '*':
      break;

    case '/':
      printf("Divisao\n");
      break;

    default:
      printf("Operacao invalida!\n");
    }
    printf("\n");
    printf("Deseja descobrir outra operacao? (s/n) :  ");
    scanf(" %c", &continuar);
    printf("\n");
    } while (continuar == 's' || continuar == 'S');


  printf("Programa finalizado.\n");
  return 0;
}
