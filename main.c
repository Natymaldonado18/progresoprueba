#include <stdio.h>
#include "maze.h"
#include "player.h"

int main  (){
    int opcion;
    do {
    printf("Bienvenido al juego del laberinto\n");
    printf("Escoja una opcion\n");
    printf ("1.- Jugar\n");
    printf ("2.- Creditos\n");
    printf ("3.- Salir\n");
    scanf ("%d", &opcion);

    switch (opcion){
        case 1:
        printf("posicion inicial: 0,0\n"); 
        moverjugador (char usuario );
        imprimir(int filas, int columnas, int maze[filas][columnas]);
        
        break;
        case 2: 
           printf("creditos\n");
           printf("Nombre: Nathalia Maldonado\n");
           printf("ID BANNER: A00097575\n");
        break; 
        case 3:
          default:
        break;

    }

    } while (opcion!= 3);
    return 0;
}