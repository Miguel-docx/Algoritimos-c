#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){ setlocale (LC_CTYPE, "");
 float nota1, nota2, media;

 printf("Digite a nota 1: ");
 scanf("%f", &nota1);
 printf("Digite a nota 2: ");
 scanf("%f", &nota2);

 media = (nota1+nota2)/2;
if (media>=6){
    printf(" Aluno aprovado %f", media );}
    else if (media>=3.0){
    printf("Você está de exame (Engole uma AF ai haha) nota: %f", media);}
    else {
        printf("Dessa vez não foi nota: %f ", media);
    }



return 0;
}
