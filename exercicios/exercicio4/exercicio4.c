#include<stdio.h>
#include<locale.h>

float calc_area (float base, float altura){
return base * altura;
}


int main(){

    setlocale (LC_CTYPE, "");
    float altura, base;
    char resp ;

    while(1){

    printf("Digite um lado do retângulo (m): ");
    scanf("%f", &base);

    printf("\nDigite outro lado do retângulo (m): ");
    scanf("%f", &altura);

    printf("Área: %.1f m²\n", (calc_area(base, altura)));

    printf("\nCalcular outra área? (s = sim | n = não)\n");
    scanf(" %c", &resp);
     if(resp == 'n'|| resp =='N')
        break;

    }

    return 0;
}
