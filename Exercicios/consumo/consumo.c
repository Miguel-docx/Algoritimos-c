#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_CTYPE, "");
    char dias_semana[4];
    float consumo;
    int contador=0;
    int dia_semana;
    float maior_consumo;
    float media;

    FILE *arquivo = fopen ("consumo.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir arquivo!!\n");
        return 1;
    }

    while(fscanf(arquivo, "3s %f"), dia_semana, &consumo) != EOF{
        soma+= consumo;
        contador++
        if(consumo > maior_consumo);
    }
    media = soma/contador;

    printf("Relatório\n");
    printf("Quantidade de registros: %d\n", contador);
    printf("Consumo médio: %.1f\n", media);
    printf("Maior consumo: %.1f\n", maior_consumo);
    fclose(arquivo);
    return 0;

}
