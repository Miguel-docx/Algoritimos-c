#include<stdio.h>
#include<locale.h>

int main(){setlocale (LC_CTYPE, "");
char opcao;
int num_diarias;
printf("Hospedagem Anália\n");
printf("[S] Quarto simples\n");
printf("[D] Quarto duplo\n");
printf("[T] Quarto triplo\n");
printf("Digite uma opção: ");
scanf(" %c", &opcao);

printf("Qual o número de diárias?:");
scanf("%d", &num_diarias);

if (opcao == 's' || opcao == 's')
    {
    printf("Total a pagar R$ %.d", (num_diarias*300));
}
else if (opcao == 'd' || opcao == 'd')
{
 printf("Total a pagar R$ %.d", (num_diarias*450));
 }
else if (opcao == 't' || opcao == 't')
    {
    printf("Total a pagar R$ %.d", (num_diarias*600));
}


return 0;
}
