#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale (LC_CTYPE, "");
    float num1, num2, num3, num4;
    float media;

    printf("Digite o primeiro valor: ");
    scanf("%f",&num1);
    printf("Digite o segundo valor: ");
    scanf("%f",&num2);
    printf("Digite o terceiro valor: ");
    scanf("%f",&num3);
    printf("Digite o quarto valor: ");
    scanf("%f",&num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("%.2f\n", media);

    return 0;
}
