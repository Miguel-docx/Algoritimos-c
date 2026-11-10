#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    FILE *arquivo;
    int codigo;
    float valor;

    int quantidade = 0;
    float total = 0.0;
    float maiorVenda = 0.0;

    arquivo = fopen("vendas.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fscanf(arquivo, "%d %f", &codigo, &valor) == 2) {
        quantidade++;
        total += valor;

        if (quantidade == 1 || valor > maiorVenda) {
            maiorVenda = valor;
        }
    }

    fclose(arquivo);

    printf("Quantidade de vendas: %d\n", quantidade);
    printf("Total vendido: R$ %.2f\n", total);
    printf("Maior venda: R$ %.2f\n", maiorVenda);

    return 0;
}
