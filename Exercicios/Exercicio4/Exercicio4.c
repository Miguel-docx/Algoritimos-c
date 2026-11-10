#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_CTYPE, "");

    char linha[100];
    char rgm[30];
    float nota;

    int total_estudantes = 0;
    float soma_notas = 0.0;
    float maior_nota = 0.0;
    int aprovados = 0;

    FILE *arquivo = fopen("notas.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo\n");
        return 1;
    }

    while (fgets(linha, sizeof(linha), arquivo) != NULL) {
        if (sscanf(linha, "%s %f", rgm, &nota) == 2) {
            total_estudantes++;
            soma_notas += nota;

            if (total_estudantes == 1 || nota > maior_nota) {
                maior_nota = nota;
            }

            if (nota >= 6.0) {
                aprovados++;
            }
        }
    }

    fclose(arquivo);


    if (total_estudantes > 0) {
        float media = soma_notas / total_estudantes;

        printf("Estudantes: %d\n", total_estudantes);
        printf("Média da turma: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior_nota);
        printf("Quantidade de alunos aprovados: %d\n", aprovados);
    } else {
        printf("Nenhum dado encontrado no arquivo.\n");
    }

    return 0;
}
