#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    float nota, soma=0, media;
    int i;

    for (i=0; i<3; i++){
    do{
        printf("Digite a nota do aluno %d° (0-10): ", (i+1));
        scanf("%f", &nota);
        if (nota<0 || nota >10){
            printf("\nENTRE 0 E 10!! Digita de novo ENTRE 0 E 10...");
            } else {
            soma += nota;
            }


        }while(nota <0 || nota>10);
    }
    media = soma/3;
    printf("A média do aluno é %.2f: ", media);

    return 0;
}
