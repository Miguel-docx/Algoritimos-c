#include <stdio.h>
#include <locale.h>
#define TAM 8

int main(){

    setlocale (LC_CTYPE, "");

    int i, contador=0;
    float valores[TAM];
    float soma=0, media;
    float acima_media;

    for(i=0; i<TAM; i++){
        printf("digite o valor %d: ", (i+1));
        scanf("%f", &valores[i]);
    }

    for(i=0; i<TAM; i++){
        soma+= valores[i];
    }
    media = soma/TAM;
    for(i=0; i<TAM; i++){
        if (valores[i]>media)
            contador++;
        if(valores[i]>acima_media)
        acima_media=valores[i];
        }

        printf("\n\n---VALORES---\n\n");
        printf("A média dos valores é: %.2f ", media);
        printf("\nOs valores acima da média são: %.2f ", acima_media);

    return 0;
}
