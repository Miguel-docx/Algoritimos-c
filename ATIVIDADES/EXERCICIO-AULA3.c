#include<stdio.h>
#include<locale.h>

int main()
{
    setlocale(LC_CTYPE, "");
    int qte_manha, qte_tarde, qte_total;

    printf("Quantidae recebida pela manhã:  ");
    scanf("%d", &qte_manha);
    printf("Quantidae recebida pela tarde:  ");
    scanf("%d", &qte_tarde);

    qte_total = qte_manha + qte_tarde;

    printf("Total de produtos recebidos no dia %d", qte_total);

    return 0;
}
