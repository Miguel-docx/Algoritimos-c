#include<stdio.h>
#include<locale.h>

void trocar(int *a, int *b){
    int auxiliar = *a;
    *a =*b;
    *b = auxiliar;
    }

int main(){

    setlocale (LC_CTYPE, "");
    int a,b;

    printf("Digite um valor inteiro: ");
    scanf("%d",&a);

    printf("Digite outro valor inteiro: ");
    scanf("%d",&b);

    printf("\nAntes: a = %d, b = %d\n", a, b);

    trocar(&a, &b); //Aqui está passando a referência (do endereço) por meio do ponteiro!!

    printf("Depois: a = %d, b = %d\n", a, b);

    return 0;
}
