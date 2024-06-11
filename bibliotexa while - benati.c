#include <stdio.h>

    int main() {

    int usuario, qntlivros , resultado ;
    char continuar;

    printf("BEM VINDO A BIBIOTECA DIGITAL!\n"); printf("Qual tipo de usuario voce eh?"); printf("\n");

    do{
    printf("Digite 1 - Aluno\n");
    printf("Digite 2 - Professores\n");
    printf("Digite 3 - Pesquisadores\n");
    printf("Digite 4 - Visitantes\n");
    printf("Digite Aqui: ");
    scanf("%d" , &usuario);
    printf("Quantos livros esta pegando: "); scanf("%d", &qntlivros);
    switch(usuario) {

    case 1:
    if(qntlivros <= 3){
        printf("Esta no limite! LIBERADO.");
    }
    else{
        printf("NEGADO! limite maximo: 3 livros."); }
    break;

    case 2:
    if(qntlivros <= 5){
        printf("Esta no limite! LIBERADO.");
    }
    else{
        printf("NEGADO! limite maximo: 5 livros."); }
    break;

    case 3:
    if(qntlivros <= 10){
        printf("Esta no limite! LIBERADO.");
    }
    else{
        printf("NEGADO! limite maximo: 10 livros."); }
    break;

    case 4:
    if(qntlivros = 1){
        printf("Esta no limite! LIBERADO.");
    }
    else{
        printf("NEGADO! limite maximo: 1 livros."); }
    break;

    default:
        printf("INVALIDO.");
    }
    printf("\n");
    printf("Deseja voltar ao comeco? (s/n): ");
    scanf(" %c", &continuar);
    printf("\n");
    } while (continuar == 's' || continuar == 'S');


  printf("Programa finalizado.\n");
    return 0;
}
