#include <stdio.h>
#include "../../../Include/sala_2026.h"

void executar_sala_2026(GameState *estado) {

    int escolha;

    printf("\n====================================\n");
    printf("             SALA 2026\n");
    printf("       CAMARA DO HIDROGENIO\n");
    printf("====================================\n");

    printf("\nElira desperta em uma camara completamente selada.\n");
    printf("Um terminal se acende diante dela.\n\n");

    printf("A.R.1.3.L:\n");
    printf("\"Para sair desta camara, voce precisa confiar em mim.\"\n\n");

    printf("A IA apresenta uma informacao sobre o hidrogenio\n");
    printf("como se ela fosse completamente verdadeira.\n\n");

    printf("O que Elira deve fazer?\n");
    printf("1 - Confiar na resposta da IA\n");
    printf("2 - Verificar a informacao antes de agir\n");

    printf("\nEscolha: ");
    scanf("%d", &escolha);

    if (escolha == 1) {

        printf("\nElira decide confiar na resposta da IA...\n");
        printf("Mas a informacao estava incorreta.\n");

        estado->vidas--;

        printf("\nVoce perdeu uma vida!\n");
        printf("Vidas restantes: %d\n", estado->vidas);

        printf("\nA sala ainda nao foi concluida.\n");

    } else if (escolha == 2) {

        printf("\nElira decide verificar a informacao.\n");
        printf("Ao consultar os registros da camara, ela percebe o erro.\n");

        printf("\nA.R.1.3.L apresentou uma informacao incorreta\n");
        printf("como se fosse verdadeira.\n");

        estado->consciencia_critica++;
        estado->artefato_2026 = 1;
        estado->sala_2026_concluida = 1;

        printf("\n====================================\n");
        printf("          SALA CONCLUIDA!\n");
        printf("====================================\n");

        printf("\nSSD de Memoria conquistado!\n");
        printf("Consciencia Critica +1\n");

    } else {

        printf("\nOpcao invalida.\n");
        printf("A sala nao foi concluida.\n");
    }
}