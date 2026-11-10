#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");

    int horas, minutos, total_minutos;
    printf("Digite a hora: ");
    scanf("%d", &horas);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);

    total_minutos = (60 * horas) + minutos;

    printf ("Total de minutos %d",  total_minutos);



    return 0;
}
