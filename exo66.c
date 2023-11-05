/*

Fait par Rakulan SIVATHASAN

Pour l'ESGI, exo 66


*/

#include <stdlib.h>
#include <stdio.h>


int main(int argc, char * argv[]){

    int ask_number;

    do {
        printf("Entrez des entiers positifs : ");
        scanf("%d", &ask_number);
        printf("%d \n", ask_number);
    } while (ask_number >= 0);

    exit(EXIT_SUCCESS);

}