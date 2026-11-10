#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");
    int potencia, horas_dia;
    float consumo;

    printf("Qual a potência do aparelho (w) ");
    scanf ("%d", &potencia);
    printf("Horas de uso diário: ");
    scanf ("%d", &horas_dia);
    consumo = (float)(potencia*horas_dia*30) /1000;

    printf("Consuumo mensal: %.2f", consumo);




    return 0;
}
