#include <stdio.h>
#include<stdio.h>

int main() {
    setlocale(LC_CTYPE, "");
    char nome[50];
    float temperatura;
    float soma_temperaturas = 0.0;
    int municipios_frios = 0;

    printf("--- Monitoramento Climático ---\n");

    for (int i = 1; i <= 5; i++) {
        printf("Informe o nome do %do município (sem espacos): ", i);
        scanf("%s", nome);

        printf("Informe a temperatura média de %s (em graus Celsius): ", nome);
        scanf("%f", &temperatura);

        soma_temperaturas += temperatura;

        if (temperatura < 10.0) {
            municipios_frios++;
        }
    }
    float media_regiao = soma_temperaturas / 5.0;

    printf("\n--- Relatório Resumido ---\n");
    printf("Temperatura média da regiao: %.2f graus Celsius\n", media_regiao);
    printf("Municípios com temperatura média inferior a 10 graus: %d\n", municipios_frios);

    return 0;
}
