#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale (LC_CTYPE, "");
    float valor_a, valor_b, valor_c, x1, x2, delta;

    printf("Digite o valor de a: ");
    scanf("%f", &valor_a);
    printf("Digite o valor de b: ");
    scanf("%f", &valor_b);
    printf("Digite o valor de c: ");
    scanf("%f", &valor_c);

    delta = pow(valor_b, 2)-(4*valor_a*valor_c);

    if (delta >= 0){
    x1 = (-valor_b + sqrt(delta))/(2*valor_a);
    x2 = (-valor_b - sqrt(delta))/(2*valor_a);

    printf("Os valores de x correspondem a:\n");
    printf("x1 %2f \n", x1);
    printf("x2 %2f \n", x2);}
    else {
        printf("Não existem raízes reais!!");
    }


    return 0;

}
