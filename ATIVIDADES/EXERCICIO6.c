#include<stdio.h>
#include<locale.h>
#include<math.h>

int main()
{
    setlocale (LC_CTYPE, "");

    float largura, comprimento, valorCaixa;
    float areaTotal, custoTotal;
    int qnt_caixa;
    const float AREA_POR_CAIXA = 2.5;

    printf("Qual a largura total da área (m):");
    scanf ("%f", &largura);
    printf("Qual a largura da área (m):");
    scanf("%f", &comprimento);
    printf("Qual o valor de cada caixa:");
    scanf("%f", &valorCaixa);
    areaTotal = largura * comprimento;
    qnt_caixa = ceil(areaTotal/AREA_POR_CAIXA);
    custoTotal = qnt_caixa * valorCaixa;


    printf("Área total a ser revestida: %2.fm²\n", areaTotal);
    printf("Quantidade de caixas necessárias: %d\n", qnt_caixa);
    printf("Custo total da compra: %.2f", custoTotal);

        return 0;
    }
