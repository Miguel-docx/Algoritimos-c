#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    int conta, senha;
    int tentativas = 0;

    do {
        printf("Conta: ");
        scanf("%d", &conta);

        printf("Senha: ");
        scanf("%d", &senha);

        tentativas++;

        if (conta == 12345 && senha == 123) {
            printf("\nAcesso autorizado.\n");
            break;
        } else {
            printf("Conta ou senha incorreta. %d° de 3 tentativas utilizada(s)\n", tentativas);
        }

    } while (tentativas < 3);

    if (tentativas == 3 && !(conta == 12345 && senha == 123)) {
        printf("\n\nAcesso bloqueado.\n");
    }

    return 0;
}
