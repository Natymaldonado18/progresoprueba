#include "player.h"
//defincion del laberinto . imprimir.comprabar si el movimiento es valido

int maze [5] [5] ={
{0, 1, 0, 0, 0},
{0, 1, 1, 1, 0},
{0, 0, 0, 0, 0},
{0, 1, 0, 1, 0},
{1, 0, 0, 1, 0},

};


void imprimir( ) {
    for (int i=0; i<5; i++){
        for (int j=0; j<5; j++){

           printf ("%d", maze[i][j])
        }
    }
    printf ("\n");
}

int validaciondemovimiento (int filas, int columnas){
    if (filas >=0 && filas <5 && columnas >=0 && columnas <5 && maze [filas][columnas]==0){
        return 1; 
    } else{
        return 0;
    }

}