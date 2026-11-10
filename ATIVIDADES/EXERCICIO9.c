#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale (LC_CTYPE, "");
    float x1, y1, x2, y2, distancia;

    printf("Digite a cordenada x do ponto 1: ");
    scanf("%f", &x1);
    printf("Digite a cordenada y do ponto 1: ");
    scanf("%f", &y1);
    printf("Digite a cordenada x do ponto 2: ");
    scanf("%f", &x2);
    printf("Digite a cordenada y do ponto 2: ");
    scanf("%f", &y2);
    distancia = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf("A distancia entre os pontos e %.2f\n", distancia);

    return 0;
}
