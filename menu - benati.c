#include <stdio.h>

int main() {

    int item, preco, quantidade, valorcompra;
    char continuar;

    do{
    printf("Menu de consulta de preco!");
    printf("\n");
    printf(" 1 - Batata.\n");
    printf(" 2 - Cenoura.\n");
    printf(" 3 - Couve. \n");
    printf(" 4 - Cesta Completa.\n");
    printf(" 5 - Calcular compra.\n");
    printf("Digite aqui: ");
    scanf("%i", &item);

    switch(item) {
        case 1:
            printf(" 1kg Batata = R$ 10,00");
        break;

        case 2:
            printf(" 1kg  = R$ 9,00");
        break;

        case 3:
            printf(" 1kg = R$ 8,00");
        break;

        case 4:
            printf("ITENS QUE VEM NA CESTA!\n");
            printf("1kg de Batata.\n");
            printf("1kg de Cenoura. \n");
            printf("1kg de Couve. \n");
            printf("Pre�o total da cesta: R$ 27,00");
        break;

        case 5:
            printf("O que voce comprou?");
            printf("\n");
            printf(" 1 - Batata.\n");
            printf(" 2 - Cenoura.\n");
            printf(" 3 - Couve. \n");
            printf(" 4 - Cesta Completa.\n");
            printf("Digite nesse espaco: ");
            scanf("%i" , &preco);

            printf("\n");
            printf("Quanto voce comprou: ");
            scanf("%i" , &quantidade);
    }

            switch(quantidade){

                case 1:
                    preco= 10;
                    valorcompra= preco * quantidade;
                    printf("Valor total da compra: %i" , valorcompra);
                break;


                case 2:
                    preco= 9;
                    valorcompra= preco * quantidade;
                    printf("Valor total da compra: %i", valorcompra);
                break;

                case 3:
                    preco= 8;
                    valorcompra= preco * quantidade;
                    printf("Valor total da compra: %i" , valorcompra);
                break;

                case 4:
                    preco= 27;
                    valorcompra= preco * quantidade;
                    printf("Valor total da compra: %i", valorcompra);
                break;
            }

        printf("\n");
        printf("\n");
        printf("Deseja continuar?(s/n): ");
        scanf(" %c", &continuar);
        printf("\n");
     } while (continuar == 's' || continuar == 'S');
    printf("Fim da compra.");

    return 0;

}
