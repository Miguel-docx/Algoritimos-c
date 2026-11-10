#include <stdio.h>
#include <math.h>

#define PI 3.14159
#define GRAVIDADE 9.8

int main() {
    float velocidade, anguloGraus, anguloRad;
    float alcance;

    printf("Qual a velocidade inicial (m/s): ");
    scanf("%f", &velocidade);

    printf("Qual o ângulo de lançamento em graus: ");
    scanf("%f", &anguloGraus);

    /* Converte o ângulo de graus para radianos, pois sin() trabalha em radianos */
    anguloRad = anguloGraus * PI / 180.0;

    alcance = (pow(velocidade, 2) * sin(2 * anguloRad)) / GRAVIDADE;

    printf("\nO alcance horizontal estimado é %.2f metros.\n", alcance);

    return 0;
}
