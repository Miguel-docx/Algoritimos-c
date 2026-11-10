#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Descarta o que sobrou no buffer de entrada (ex.: letras digitadas no lugar de números) */
void limpar_buffer(void)
{
    int c;
    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

/* Lê um inteiro entre minimo e maximo, repetindo até o valor ser válido */
int ler_inteiro_valido(const char *mensagem, int minimo, int maximo)
{
    int valor;
    int lidos;

    while (1)
    {
        printf("%s", mensagem);
        lidos = scanf("%d", &valor);

        if (lidos == EOF)
        {
            printf("\nEntrada encerrada. Finalizando o programa.\n");
            exit(1);
        }

        limpar_buffer();

        if (lidos == 1 && valor >= minimo && valor <= maximo)
        {
            return valor;
        }

        printf("Valor invalido! Digite um numero inteiro entre %d e %d.\n", minimo, maximo);
    }
}

int main(void)
{
    int codigo_cadete;
    int etapa;
    int pontuacao;
    int pontuacao_total;
    double media;
    char continuar;
    int resposta_valida;

    setlocale(LC_ALL, "Portuguese");

    printf("=====================================\n");
    printf("   AGENCIA ORBITAL - SELECAO DE EQUIPES\n");
    printf("=====================================\n");

    do
    {
        printf("\n");
        codigo_cadete = ler_inteiro_valido("Codigo do cadete (numero positivo): ", 1, 999999);

        pontuacao_total = 0;

        /* Tres etapas de treinamento, cada uma com pontuacao de 0 a 100 */
        for (etapa = 1; etapa <= 3; etapa++)
        {
            char mensagem[64];
            snprintf(mensagem, sizeof(mensagem), "Pontuacao da etapa %d (0 a 100): ", etapa);
            pontuacao = ler_inteiro_valido(mensagem, 0, 100);
            pontuacao_total += pontuacao;
        }

        media = pontuacao_total / 3.0;

        printf("\n----- RESULTADO -----\n");
        printf("Cadete: %d\n", codigo_cadete);
        printf("Pontuacao total: %d\n", pontuacao_total);
        printf("Media: %.2f\n", media);

        if (media >= 85.0)
        {
            printf("Classificacao: Comandante da missao\n");
            printf("Treinamento concluido com excelencia.\n");
        }
        else if (media >= 70.0)
        {
            printf("Classificacao: Piloto aprovado\n");
            printf("Cadete autorizado para a missao.\n");
        }
        else if (media >= 50.0)
        {
            printf("Classificacao: Cadete em recuperacao\n");
            printf("Novo treinamento recomendado.\n");
        }
        else
        {
            printf("Classificacao: Treinamento reiniciado\n");
            printf("Cadete ainda nao autorizado.\n");
        }

        /* Pergunta se o operador quer treinar outro cadete */
        resposta_valida = 0;
        while (!resposta_valida)
        {
            printf("\nDeseja treinar outro cadete? (S/N): ");
            if (scanf(" %c", &continuar) == EOF)
            {
                continuar = 'N';
                break;
            }
            limpar_buffer();

            if (continuar == 'S' || continuar == 's' || continuar == 'N' || continuar == 'n')
            {
                resposta_valida = 1;
            }
            else
            {
                printf("Opcao invalida! Digite S para continuar ou N para encerrar.\n");
            }
        }

    } while (continuar == 'S' || continuar == 's');

    printf("\nPrograma encerrado. Boa sorte na missao!\n");

    return 0;
}
