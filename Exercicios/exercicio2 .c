#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int i;
    float nota, soma=0, media;
    float maior_nota = 0;

    for (i=0; i<5; i++){

    printf("Qual a nota?: ", i);
    scanf("%f", &nota);
    soma += nota;

    if(nota>maior_nota){
         maior_nota=nota;
      }
    }
    media = soma / 5;
    printf("A média é: %f", media);
    printf("\nA maior nota é %.2f: ", maior_nota);





    return 0;
}
