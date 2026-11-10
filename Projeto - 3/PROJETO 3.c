#include<stdio.h>
#include<locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    int codigo_cadete;
    int etapa;
    int pontuacao;
    int pontuacao_total;
    float media, soma=0;
    int continuar;


    printf("=====MISSÃO ORBITAL=====\n\n");

       do {
        pontuacao_total = 0;

        printf("Codigo do cadete: ");
        if (scanf("%d", &codigo_cadete) != 1) {
            printf("Entrada invalida. Informe numeros inteiros.\n");
            return 1;
        }

        while (codigo_cadete <= 0) {
            printf("INVALIDO. Insira somente valores positivos: ");
            if (scanf("%d", &codigo_cadete) != 1) {
                printf("Entrada invalida. Informe numeros inteiros.\n");
                return 1;
            }
        }

    for (etapa = 1; etapa <= 3; etapa++) {
    printf("\nEtapa %d\n", etapa);
    printf("Pontuacao do cadete: ");
    scanf("%d", &pontuacao);

    while (pontuacao < 0 || pontuacao > 100) {
        printf("INVALIDO. Digite um valor entre 0 e 100: ");
        scanf("%d", &pontuacao);
    }

    pontuacao_total += pontuacao;
}

    media = pontuacao_total / 3.0f;

    printf("\n_____RESULTADO_____\n");
        printf("Codigo do cadete: %d\n", codigo_cadete);
        printf("Pontuacao total: %d\n", pontuacao_total);
        printf("Media: %.2f\n", media);

        if (media >= 85) {
            printf("Classificacao: COMANDANTE DA MISSAO\n");
        } else if (media >= 70) {
            printf("Classificacao: Piloto aprovado\n");
        } else if (media >= 50) {
            printf("Classificacao: CADETE EM RECUPERACAO\n");
        } else {
            printf("Classificacao: TREINAMENTO REINICIADO\n");
        }

        if (pontuacao_total == 300) {
            printf("PONTUACAO MAXIMA!\n");
        }

        printf("\nDeseja avaliar outro cadete? 1 - Sim | 2 - Nao: ");
        if (scanf("%d", &continuar) != 1) {
            printf("Entrada invalida. Informe numeros inteiros.\n");
            return 1;
        }

        while (continuar != 1 && continuar != 2) {
            printf("INVALIDO. Digite 1 para Sim ou 2 para Nao: ");
            if (scanf("%d", &continuar) != 1) {
                printf("Entrada invalida. Informe numeros inteiros.\n");
                return 1;
            }
        }

        printf("\n");
    } while (continuar == 1);

    return 0;
}
