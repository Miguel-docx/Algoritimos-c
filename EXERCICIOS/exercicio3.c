#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){ setlocale (LC_CTYPE, "");
    float media, frequencia;

    printf("Digite a média do aluno: ");
    scanf("%f", &media);
    printf("Qual a frequência do aluno?: ");
    scanf("%f", &frequencia);

    if (frequencia<75){
        printf("tu nem vem e quer passar??");
    }
    else if (media<6){
        printf("Reprovado por nota!!");

    }
    else {
        printf("Aprovado!!");

    }
    return 0;
}
