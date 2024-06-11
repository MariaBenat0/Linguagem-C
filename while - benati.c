#include <stdio.h>

int main() {

  int numeroTabuada; //declaração de variavel
  char continuar; //declaração de variavel


  do { //faça isso...
    printf("Digite o numero para ver a tabuada: "); //digitar numero para a tabuada
    scanf("%d", &numeroTabuada); //leitura p/ guardar na variavel


    if (numeroTabuada == 0) { //condição
      break; // Sair do loop se o usuário digitar 0
    }


    printf("\nTabuada de %d:\n", numeroTabuada); // inicio da exibição da tabuada

    for (int i = 1; i <= 10; i++) { //laço de repetição
      printf("%d x %d = %d\n", numeroTabuada, i, numeroTabuada * i); // exibir com laço de repetição
    }

    printf("\nDeseja ver outra tabuada? (s/n): "); // definição para funcionamento do while, é aqui que vai adicionar 's' ou 'n'
    scanf(" %c", &continuar);

    //...enquanto (while) continuar dizendo 'S' ou 's' continuar a repetir todo o codig acima caso contrario, finalizar.
  } while (continuar == 's' || continuar == 'S');


  printf("Programa finalizado.\n");// caso a resposta por 'n' ou qualquer outra coisa

  return 0;
}

