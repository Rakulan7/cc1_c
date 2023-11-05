/*

Fait par Rakulan SIVATHASAN

Pour l'ESGI, exo 59


*/

#include <stdlib.h>
#include <stdio.h>

// argc contient le nombre total d'argument passés en ligne de commande
// argv est un tableuu de pointeurs vers ces arguments

int main(int argc, char * argv[]){

    // j'initialise i à 1 pour ne pas prendre en compte le nom 
    // du programme (main)
    for (int i = 1; i < argc; i++){
        printf("%d : %s\n", i, argv[i]);
    }

    exit(EXIT_SUCCESS);

}