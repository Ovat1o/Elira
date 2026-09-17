#include <stdio.h>

#include "../Include/game_state.h"
#include "../Include/sala_2026.h"

int main(void) {

    GameState estado;

    inicializar_game_state(&estado);

    printf("Iniciando ELIRA...\n");

    printf("\n--- ESTADO ANTES DA SALA ---\n");
    printf("Vidas: %d\n", estado.vidas);
    printf("Consciencia Critica: %d\n", estado.consciencia_critica);
    printf("Artefato 2026: %d\n", estado.artefato_2026);
    printf("Sala 2026 concluida: %d\n", estado.sala_2026_concluida);

    executar_sala_2026(&estado);

    printf("\n--- ESTADO DEPOIS DA SALA ---\n");
    printf("Vidas: %d\n", estado.vidas);
    printf("Consciencia Critica: %d\n", estado.consciencia_critica);
    printf("Artefato 2026: %d\n", estado.artefato_2026);
    printf("Sala 2026 concluida: %d\n", estado.sala_2026_concluida);

    return 0;
}