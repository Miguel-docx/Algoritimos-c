#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_CTYPE, "");

    int idade = 20;
    int *p;

    p= &idade;

    printf("Valor de idade: %d\n", idade);
    printf("Endereço de idade em p : %p\n ", &idade);


}
