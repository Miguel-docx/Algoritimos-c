#include <stdio.h>
#include <locale.h>
#define LIN 4
#define COL 3

int main() {
    setlocale(LC_CTYPE, "");

    int i, j, melhor = 0;
    float soma = 0, media;
    float nota[LIN][COL];
    float maior_media = 0;

    for (i = 0; i < LIN; i++) {
        for (j = 0; j < COL; j++) {
            printf("Nota %d do estudante %d: ", (j + 1), (i + 1));
            scanf("%f", &nota[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < LIN; i++) {
        soma = 0;
        for (j = 0; j < COL; j++) {
            soma += nota[i][j];
        }
        media = soma / (float)COL;
        printf("Média do estudante %d: %.2f\n", (i + 1), media);

        if (media > maior_media) {
            maior_media = media;
            melhor = i + 1;
        }
    }

    printf("\nMelhor média: %.2f (estudante %d)\n", maior_media, melhor);

    return 0;
}
