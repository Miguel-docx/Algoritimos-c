#include<stdio.h>
#include<locale.h>

float media_notas (float nota1, float nota2){
return (nota1 + nota2) / 2;
}


int main(){

    setlocale (LC_CTYPE, "");
    float nota1, nota2;
    char resp;



    while(1){

    printf("Primeira nota do aluno: ");
    scanf("%f", &nota1);

    printf("\nSegunda nota do aluno: ");
    scanf("%f", &nota2);

    printf("Média do aluno: %.1f\n", media_notas(nota1, nota2));

    if(media_notas(nota1,nota2)<=5){
        printf("\n--- Situação: Reprovado ---");
    } else printf("\n--- Sintuação: Aprovado ---\n ");

    printf("\nCalcular outra média? (s = sim | n = não)\n");
    scanf(" %c", &resp);
     if(resp == 'n'|| resp =='N')
        break;

    }

    return 0;
}
