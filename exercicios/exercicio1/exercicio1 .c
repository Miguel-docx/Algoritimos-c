#include <stdio.h>
#include <locale.h>

float calcula_frete(float peso){

   return peso * 4.5;
}


int main(){

    setlocale(LC_CTYPE, "");

    float peso;
    char resp = s ;

    while(resp == s || resp == S){
    printf("Digite o peso da carga (Kg): ");
    scanf("%f", &peso);

    printf("\nO valor do frete �: R$ %.2f\n", calcula_frete(peso));

    printf("\n----Calcular outro frete?----\n");
    scanf(" %c", &resp);

    if(resp == 'n'|| resp =='N')
        break;

    }
    return 0;
}
