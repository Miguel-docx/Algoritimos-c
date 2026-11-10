#include<stdio.h>
#include<locale.h>


int main(){

    FILE *arquivo;
    setlocale(LC_CTYPE, "");

    int i, num;


    arquivo = fopen("tabuada.txt", "a");

    if(arquivo == NULL){
        printf("Erro ao criar arquivo\n");
        return 1;
    }

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    fprintf(arquivo, "Tabuada do %d\n", num);

    for(i=0; i<11; i++){
        fprintf(arquivo, "%d * %d = %d\n", num, i, (num*i));
        }

    printf("\nArquivo criado com sucesso!!\n");
    fclose(arquivo);

    return 0;
}
