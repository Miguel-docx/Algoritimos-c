#include<stdio.h>
#include<locale.h>
#include<math.h>

int main(){setlocale (LC_CTYPE, "");

float massa, peso, altura, imc;

printf("Qual o seu peso?: ");
scanf("%f", &peso);
printf("Qual o sua altura?: ");
scanf("%f", &altura);

imc = peso/(altura*altura);
if (imc<20){
    printf("Você esta abaixo do peso IMC:%2.f\n", imc);
}
else if (imc<25){
    printf("Seu peso é o ideal!! IMC:%.2f\n", imc);
}
else if (imc<30){
    printf("OBESO IMC:%.2f\n", imc);
}
else {
    printf("Você esta MUITO OBESO IMC:%.2f\n", imc);
}

return 0;}
