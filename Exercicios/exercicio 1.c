#include <stdio.h>
#include <locale.h>
#define TAM 5

int main(){

    setlocale (LC_CTYPE, "");

    int i, contador=0, o_maior;
    float salarios[TAM];
    float soma=0, media;
    float maior_salario;

    for(i=0; i<TAM; i++){
        printf("Digite o salario do funcionnário %d: ", (i+1));
        scanf("%f", &salarios[i]);
    }

    for(i=0; i<TAM; i++){
        soma += salarios[i];
    }
    media = soma / TAM;
    for(i=0; i<TAM; i++){
        if (salarios[i]>media)
            contador++;
        if(salarios[i]>maior_salario){
            maior_salario=salarios[i];
            o_maior = i+1;
        }

    }
    printf("\n\n====Salários====\n\n");
    printf("Média dos salários: R$ %.2f\n", media);
    printf("Quantidades de salários acima da média: %d\n", contador);
    printf("Maior salário funcionãrio é %d: R$ %.2f\n", o_maior, maior_salario);
    return 0;
}
