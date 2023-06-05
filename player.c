
#include <stdio.h>
#include "maze.h"
//funciones para moverse
int contadormovimientos=0;
int posx=0;
int posy=0; 

void moverjugador  (char usuario ){
    int actposx=posx;
    int actposy=posy;
   
    printf("Escriba una posicion en mayuscula: A,S,D,W ");
    scanf ("%c",usuario );

    switch (usuario){
        case 'A':
        actposy--;
        break;
        case 'S':
        actposx++;
        break;
        case 'D':
        actposy++;
        break;
        case 'W':
        actposx--;
        break;
    }

    if (validaciondemovimiento (actposx, actposy)){
        posx = actposx;
        posy = actposy;
        contadormovimientos++;
    }else{
        printf("Movimiento no valido");
    }
    

    int terminarjuego ( ) {
        if (posx == 4 && posy==4){
            printf("acaba de ganar. felicidades\n");
        }
        if (contadormovimientos<=8){
            printf ("que bien juega. es un pro!\n");
        }
        else if (contadormovimientos<=15){
            pintf("es un novato\n");
        }
        else {
            printf("es un noob!");
        }
        return 1;
    }
    return 0;
}

