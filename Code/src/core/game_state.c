#include "../../Include/game_state.h"

void inicializar_game_state(GameState *estado) {

    estado->sala_1990_concluida = 0;
    estado->sala_2008_concluida = 0;
    estado->sala_2026_concluida = 0;
    estado->sala_2048_concluida = 0;

    estado->artefato_1990 = 0;
    estado->artefato_2008 = 0;
    estado->artefato_2026 = 0;
    estado->artefato_2048 = 0;

    estado->consciencia_critica = 0;
    estado->vidas = 3;
}

int todas_salas_concluidas(const GameState *estado) {

    return estado->sala_1990_concluida &&
           estado->sala_2008_concluida &&
           estado->sala_2026_concluida &&
           estado->sala_2048_concluida;
}