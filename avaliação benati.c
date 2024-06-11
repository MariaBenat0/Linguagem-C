#include <stdio.h>
int main() {

  int opcao1, cpf, datapegou, codigolivro, devolucao;
  char continuar ;

  do{
  printf("MENU DA BIBLIOTECA!\n");
  printf(" [1] Livros disponiveis.\n");
  printf(" [2] Contato da biblioteca.\n");
  printf(" [3] Horario de funcionamneto.\n");
  printf(" [4] Acessar Cadastro.\n");
  printf(" [5] Emprestimo de livro.\n");
  printf(" Digite a preferencia: ");
  scanf("%i" , &opcao1);

  switch(opcao1){
    case 1:
        printf(" [1] O Pequeno principe.\n");
        printf(" [2] Os sete maridos de Evelyn Hugo\n");
        printf(" [3] Memorias postulas.\n");
        printf(" [4] As historias que os jornais não contam.\n");
    break;

    case 2:
        printf("ENTRE EM CONTATO CONOSCO e NOS SIGA NAS REDES SOCIAIS!\n");
        printf("Whatzapp: (14)996775334\n");
        printf("Instagram: @bookally.com\n");
        printf("Twitter: @bookAlly_\n");
    break;

    case 3:
        printf("Acesso á biblioteca: \n");
        printf("SEG a SEXTA: 7:00 as 18:00\n");
        printf("SAB e DOM: 7:00 as 11:30\n");
    break;

    case 4:
        printf("CADASTRO!\n");
        printf("CPF: ");
        scanf("%i" , &cpf);
    break;

    case 5:
        printf("Insira seu CPF: ");
        scanf("%i" , &cpf);
        printf("Data de hoje(Apenas o dia: ");
        scanf("%i" , &datapegou);
        printf("Codigo do livro: ");
        scanf("%i", &codigolivro);
        printf("EMPRESTIMO FEITO!\n");
        printf("\n");
        printf("Detalhes do emprestimo: ");
        printf("\n");
        switch(codigolivro){
            case 1:
                printf("NOME DO LIVRO: O pequeno principe.");
                printf("\n");
                printf("CPF: %i" , cpf);
                devolucao= datapegou + 5;
                printf("\n");
                printf("DATA DEVOLUCAO: %i" , devolucao);
                printf("\n");
            break;

            case 2:
                printf("NOME DO LIVRO: Os sete maridos de evelyn hugo.");
                printf("\n");
                printf("CPF: %i" , cpf);
                devolucao= datapegou + 5;
                printf("\n");
                printf("DATA DEVOLUCAO: %i" , devolucao);
                printf("\n");
            break;

            case 3:
                printf("NOME DO LIVRO: Memorias postulas.");
                printf("\n");
                printf("CPF: %i" , cpf);
                devolucao= datapegou + 5;
                printf("\n");
                printf("DATA DEVOLUCAO: %i" , devolucao);
                printf("\n");
            break;

            case 4:
                printf("NOME DO LIVRO: As historias que os jornais não contam.");
                printf("\n");
                printf("CPF: %i" , cpf);
                devolucao= datapegou + 5;
                printf("\n");
                printf("DATA DEVOLUCAO: %i" , devolucao);
                printf("\n");
        break;
        default:
            printf("opcao invalida");
  }
  }
    printf("\nDeseja continuar s/n\n");
    scanf(" %c", &continuar);


}while(continuar=='s'|| continuar=='S');

    printf("programa finalizado.");
}
