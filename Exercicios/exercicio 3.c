#include <stdio.h>
#include <locale.h>
#define LIN 3
#define COL 4

int main(){

    setlocale(LC_CTYPE, "");

    int i, j, total_geral=0;
    int valores[LIN][COL];
    int total_produtos;

    for(i=0; i<LIN; i++){
        for(j=0; j<COL; j++){
            printf("Digite a quantidade do produto %d no dia %d: ", (i+1),(j+1));
        scanf("%d", &valores [i][j]);
    }
    printf("\n");
}
    for (i=0; i<LIN; i++){
            total_produtos = 0;
        for(j=0; j<COL; j++){
            total_produtos += valores [i][j];
        }
        total_geral+=total_produtos;
    printf("Produto %d: %d unidades.\n", (i+1), total_produtos);

    }
    printf("O total geral é: %d uniades. \n ", total_geral);

    return 0;
}
