#include <stdio.h>

int main()  {

    int etapa1, etapa2, etapa3, etapa4, etapa5, etapa6;

    printf("Ola somos da MakeNew! \n");
    printf("Aperte 1 - Para ver nossos servicos. \n");
    printf("Aperte 2 - Para se comunicar conosco. \n");
    printf("Aperte 3 - Para ver nossos orcamentos. \n");
    printf("\n");
    printf("Digite o numero: ");
    scanf("%d" , &etapa1);

    if(etapa1== 1){
        printf("\n");
        printf("NOSSOS SERVICOS. \n");
        printf("Aperte 1 - Para Problemas de acessibilidade. \n");
        printf("Aperte 2 - Para Problemas de sustentabilidade.\n");
        printf("Aperte 3 - Para Problemas de comunicacao. \n");
        printf("Aperte 4 - Para Problemas de marketing. \n");
        printf("\n");
        printf("Digite o numero: ");
        scanf("%d" , &etapa2);

        if (etapa2 == 1 ) {
            printf("\n");
            printf("ACESSIBILIDADE. \n");
            printf("Para solucionar problemas de acessibilidade desenvolveriamos um sistema implementado no website, linguagem de libras, \n");
            printf("audio nos textos do website, opcao de aumentar e diminuir fontes,  deixar o site de facil entendimento, com uma imagem clara ,Incluir texto \n");
            printf("alternativo, usar texto alternativo para imagens, logotipos, desenhos, usar alto contraste de cor, usar links com texto \n");
            printf("informativo,listas numeradas com marcadores e alinhar bem as escritas.\n");
            printf("Em caso de duvida entre em contato conosco pelo nosso numero: (14)99633-8557 \n");
        }


        else if (etapa2== 2 ){
            printf("\n");
            printf("SUSTENTABILIDADE. \n");
            printf("Para esse tipo de problema dentro de um empresa, em relacao a estrutura fisica indicamos implementaçao de \n ") ;
            printf("iluminação LED, fontes de energia renovaveis para reduzir dependencia de combustiveis fosseis e emissao de \n ");
            printf("carbono, programas de reciclagem e compostagem para reducao de residuos , reducao de uso de produtos nocivos,\n ");
            printf("compra de equipamentos energeticamente eficientes.\n");
            printf("Em caso de duvida entre em contato conosco pelo nosso numero: (14)99633-8557 \n");
        }

        else if (etapa2 == 3) {
            printf("\n");
            printf("COMUNICACAO. \n");
            printf("Nos indicaremos que a empresa estabeleça canais de comunicação eficientes para diferentes tipos de");
            printf("informacoes e propositos, em relacao aos funcionarios esperamos que oferecam treinamentos de workshop");
            printf("sobre habilidades de comunicacao, construiram uma relacao de consenso na resolucao dos conflitos, ");
            printf("estabelecer diretrizes e politicas da empresa, incluindo prazos e protocolos, utilizar ferramentas ") ;
            printf("de comunicacao que facilitem a troca de informacoes entre os funcionarios, como softwares de gestao ");
            printf("de projetos(como o Business Map por exemplo) , oferecer sessões regulares de feedbacks, dar abertura");
            printf("para diferentes opinioes, motivar funcionarios e usufruir de  foruns de discussao online( como o");
            printf("Reddit, entre outras diversas opcoes). \n") ;
            printf("Em caso de duvida entre em contato conosco pelo nosso numero: (14)99633-8557 \n");
        }

        else if (etapa2 == 4) {
            printf("\n");
            printf("MARKETING. \n");
            printf("Faremos para melhor andamento da empresa, divulgar seus trabalhos por meio  das redes sociais( facebook,");
            printf("instagram, twitter etc) cartoes da loja, panfletos, videos que chamem atencao seguindo sempre as tendencias");
            printf("do momento, como memes por exemplo, alem de fechar parcerias com empresas ou pessoas famosas para obter mais");
            printf("alcance, focando sempre na visibilidade da empresa, de acordo com suas finalidades.Uma outra estrategia a seguir");
            printf("eh os descontos  com precos justo e acessivel para melhor acessibilidade aos  clientes,  pontos de fidelidade");
            printf("oferecendo ofertas para clientes fieis e constantemente fazendo pesquisas e analises dos concorrentes. \n");
            printf("Em caso de duvida entre em contato conosco pelo nosso numero: (14)99633-8557 \n");
        }
    }

    else if(etapa1 == 2) {
        printf("\n");
        printf("MEIOS DE COMUNICACAO E PREVIW: \n");
        printf("Whatsapp: (14)99633-8557 \n");
        printf("Intagram: @make.new_starup \n");
        printf("Site: www.MakeNew.com.br \n");
        printf("Twitter: @Make.New_starup \n");
    }

    else if(etapa1 == 3) {
        printf("\n");
        printf("ORCAMENTOS: \n");
        printf("Apenas 1 servico: 200.00 \n");
        printf("2 serviços: 350.00 \n");
        printf("3 ou mais servicos: 500.00 \n");
    }

    return 0;
}
