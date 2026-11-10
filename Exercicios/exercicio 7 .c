#include <stdio.h>
#include <locale.h>
#define TENT 3
#define CONTA_VALIDA 12345
#define SENHA_VALIDA 123

int main() {
    setlocale(LC_CTYPE, "");

    int i = 0, autorizado = 0;
    int conta[TENT], senha[TENT];

    do {
        printf("Conta: ");
        scanf("%d", &conta[i]);
        printf("Senha: ");
        scanf("%d", &senha[i]);

        if (conta[i] == CONTA_VALIDA && senha[i] == SENHA_VALIDA) {
            autorizado = 1;
        }

        i++;
    } while (i < TENT && autorizado == 0);

    if (autorizado == 1) {
        printf("Acesso autorizado.\n");
    } else {
        printf("Acesso bloqueado.\n");
    }

    return 0;
}
