#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int n;
    int qtd_positivos = 0;
    int qtd_negativos = 0;
    float valor, maior_valor;

    printf("Informe a quantidade de valores a serem analisados: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Nenhum valor para analisar.\n");
        return 0;
    }

    for (int i = 0; i < n; i++) {
        printf("Informe o %d° valor: ", i + 1);
        scanf("%f", &valor);

        if (i == 0 || valor > maior_valor) {
            maior_valor = valor;
        }

        if (valor > 0) {
            qtd_positivos++;
        } else if (valor < 0) {
            qtd_negativos++;
        }
    }

    printf("\n--- Resultados ---\n");
    printf("Quantidade de valores positivos: %d\n", qtd_positivos);
    printf("Quantidade de valores negativos: %d\n", qtd_negativos);
    printf("Maior valor informado: %.2f\n", maior_valor);

    return 0;
}
