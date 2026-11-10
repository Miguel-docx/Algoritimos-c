#include <stdio.h>

int main() {

    float venda_diaria;
    float total_semana = 0.0;

    printf("Registro Semanal de Vendas \n");

    for (int i = 1; i <= 7; i++) {
        printf("Informe o valor das vendas do %do dia: R$ ", i);
        scanf("%f", &venda_diaria);

        total_semana += venda_diaria;
    }

    printf("\nValor total vendido na semana: R$ %.2f\n", total_semana);

    return 0;
}
