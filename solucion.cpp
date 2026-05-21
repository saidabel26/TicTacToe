#include "constantes.h"
#include "solucion.h"
#include "logica.h"

#include <iostream>
using namespace std;

/*
* Implementar esta función.
* Dependiendo el estado del juego esta debe retornar:  

GANO_X: Si Ha ganado el jugador X
GANO_O: Si Ha ganado el jugador O
EMPATE: Si ya se llenaron todas las casillas y no hay ganador
JUEGO_EN_CURSO: Si el juego aún no se ha terminado.
*/
int GetEstado()
{
    char** tablero = GetTablero();

    // Verificar filas y columnas
    for (int i = 0; i < 3; i++)
    {
        // Fila i
        if ((tablero[i][0] == 'X' || tablero[i][0] == 'O') &&
            tablero[i][0] == tablero[i][1] &&
            tablero[i][1] == tablero[i][2])
        {
            return (tablero[i][0] == 'X') ? GANO_X : GANO_O;
        }

        // Columna i
        if ((tablero[0][i] == 'X' || tablero[0][i] == 'O') &&
            tablero[0][i] == tablero[1][i] &&
            tablero[1][i] == tablero[2][i])
        {
            return (tablero[0][i] == 'X') ? GANO_X : GANO_O;
        }
    }

    // Diagonal principal (↘)
    if ((tablero[0][0] == 'X' || tablero[0][0] == 'O') &&
        tablero[0][0] == tablero[1][1] &&
        tablero[1][1] == tablero[2][2])
    {
        return (tablero[0][0] == 'X') ? GANO_X : GANO_O;
    }

    // Diagonal secundaria (↙)
    if ((tablero[0][2] == 'X' || tablero[0][2] == 'O') &&
        tablero[0][2] == tablero[1][1] &&
        tablero[1][1] == tablero[2][0])
    {
        return (tablero[0][2] == 'X') ? GANO_X : GANO_O;
    }

    // Verificar empate (tablero lleno sin ganador)
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (tablero[i][j] != 'X' && tablero[i][j] != 'O')
                return JUEGO_EN_CURSO;

    return EMPATE;
}