#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");
    float peso, altura, IMC;

    printf("Digite seu peso em kg: ");
    scanf("%f", &peso);
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);

    IMC = peso / (altura*altura);

    printf("O IMC corporal é %.2f kg².\n", IMC);



    return 0;
}
