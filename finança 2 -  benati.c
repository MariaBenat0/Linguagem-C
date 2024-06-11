#include <stdio.h>
float main() {

  float emprestimo, tempo, vf ;

  printf("Calculadora de Emprestimo Simples! (Taxa Fixa: 7 )\n");
  printf("\n");
  printf("VALOR MINIMO: R$ 100,00\n");
  printf("VALOR MAXIMO: R$ 10.000,00\n");
  printf("Valor do emprestimo: ");
  scanf("%f", &emprestimo);
  printf("PRAZO MAXIMO: 36 meses. \n");
  printf("Prazo de pagamento(em meses): ");
  scanf("%f" , &tempo);




  vf = emprestimo + (emprestimo * 0.05 * tempo);

  printf("\n");
  printf("Valor futuro do investimento: %f" , vf);

  return 0;

}
