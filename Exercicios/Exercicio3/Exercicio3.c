#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    char linha[100];
    FILE *arquivo = fopen("poema.txt", "r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL){
        printf("%s", linha);
    }

    fclose(arquivo);

    return 0;
}
