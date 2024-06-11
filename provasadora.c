#include <stdio.h>

int main() {

  int menu, emprestimo, data, dataDevolucao, cpf;
  char continuar;

  do{

    printf("AQUI SEU MENU DA BIBLIOTECA!!\n");
    printf("\n");
    printf("Somos a Biblioteca Fama, eh um prazer fazer parte da sua experiencia com os livros!!\n");
    printf("Contato: (14)99405-0988\n");
    printf("Funcionamento:\n seg 11h as 16h\n ter 11h as 16h\n qua 11h as 16h\n qui 11h as 16h\n sex 11h as 18h\n Nao funcionamos de sabado e domingo!\n");
    printf("Localizacao\n Rua: Almeida Campos\n numero: 19");
    printf("FAÇA O SEU CADASTRO!!\n");
    printf("\n");
    printf("Aviso!! Todas as informacoes nao serao usadas intuitos indevidos, apenas para certificar a devolucao e cuidado de nossos livros!!!!!");
    printf("\n");
    printf("gmail\n");
    printf("data de nascimento \n");
    printf("nome\n");
    printf("endereço\n");
    printf("Digite aqui: \n");
    scanf("%d" , &menu);

    printf("\n");

    printf("Voce esta cadastrado!!");
    printf("\n");

    printf("Lista de livros:");
    printf("\n");
    printf("Digite 1 - E assim que acaba.\n");
    printf("Digite 2 - Ursula.\n");
    printf("Digite 3 - O menino do pijama listrado.\n");
    printf("Digite 4 - O pequeno principe.\n");
    printf("Digite 5 - Percy Jackson.\n");
    printf("Digite 6 - Coraline.\n");
    printf("Digite 7 - Colecao Machado de Assis.\n");
    printf("Digite 8 - Crepusculo..\n");
    printf("Insira um codigo para o livro de sua escolha:");
    scanf("%d" , &emprestimo);

    switch(menu) {
        case 1:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 2:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 3:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 4:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 5:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 6:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 7:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        case 8:
            printf("Insira a data do dia do emprestimo: \n");
            scanf("%d", &data);
        break;

        printf("Seu cpf: \n");
        scanf("%d", &cpf);
        dataDevolucao = data + 5;

        printf("CPF:\n %d", cpf);
        printf("Data devolução: \n%d", dataDevolucao);

    default:
        printf("INVALIDO.");
    }


     printf("\nDeseja mais um livro? (s/n): ");
     scanf(" %c", &continuar);
   } while (continuar == 's' || continuar == 'S');

     printf("Programa finalizado.\n");

    return 0;
}
