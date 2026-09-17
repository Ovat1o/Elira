#ifndef GAME_STATE_H
#define GAME_STATE_H

typedef struct {

    // Salas visitadas
    int sala_1990_concluida;
    int sala_2008_concluida;
    int sala_2026_concluida;
    int sala_2048_concluida;

    // Artefatos de memória
    int artefato_1990;
    int artefato_2008;
    int artefato_2026;
    int artefato_2048;

    // Estado geral do jogador
    int consciencia_critica;
    int vidas;

} GameState;

void inicializar_game_state(GameState *estado);
int todas_salas_concluidas(const GameState *estado);

#endif