/*



*/

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char * argv[]){

    int taille;

    printf("Taille de la mémoire :");
    scanf("%d", &taille);

    int *tab = malloc(sizeof(int) * taille);

    for(int i = 0; i < taille; i++){

        tab[i] = 0;

    }

    for(int i = 0; i < taille; i++){

        printf("%d\n", tab[i]);

    }

    exit(EXIT_SUCCESS);

}