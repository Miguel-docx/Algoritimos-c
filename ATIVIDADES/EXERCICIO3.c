#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale (LC_CTYPE, "");
    int prm_num, sgd_num, soma_num, subtracao_num, mult_num;

    printf("Digite o primeiro número: ");
    scanf ("%d", &prm_num);
    printf("Digite o segundo número: ");
    scanf ("%d", &sgd_num);

    soma_num = prm_num + sgd_num;
    printf("Soma: %d\n", soma_num);
    subtracao_num = prm_num - sgd_num;
    printf("Subtração:%d\n", subtracao_num);
    mult_num = prm_num * sgd_num;
    printf("Multiplicação:%d\n", mult_num);

    return 0;
}

