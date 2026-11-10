#include <stdio.h>
#include<locale.h>

int main() {

    setlocale(LC_CTYPE, "");

    float nota;
    int alunos_aprovados = 0;

    printf("--- Verificação de Aprovação ---\n");

    for (int i = 1; i <= 10; i++) {
        printf("Informe a nota do %d° aluno: ", i);
        scanf("%f", &nota);

        if (nota >= 6.0) {
            alunos_aprovados++;
        }
    }

    printf("\nQuantidade de estudantes com nota igual ou superior a 6.0: %d\n", alunos_aprovados);

    return 0;
}
