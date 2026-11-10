#include <stdio.h>
#include <locale.h>

typedef struct {
    int rgm;
    float nota1;
    float nota2;
    float media;
} Aluno;

float calc_media(Aluno *aluno) {
    aluno->media = (aluno->nota1 + aluno->nota2) / 2.0;
    return aluno->media;
}

int main() {
    setlocale(LC_ALL, "");
    Aluno aluno1;

    printf("Digite o RGM: ");

    scanf("%d", &aluno1.rgm);

    printf("\nPrimeira nota: ");
    scanf("%f", &aluno1.nota1);

    printf("\nSegunda nota: ");
    scanf("%f", &aluno1.nota2);

    calc_media(&aluno1);


    printf("\nMédia do aluno (RGM %d): %.2f\n", aluno1.rgm, aluno1.media);

    if (aluno1.media <=5){
        printf("\nSituação: Reprovado\n--------------------");
    } else {
        printf("\nSituação: Aprovado\n--------------------");
    }

    return 0;
}
