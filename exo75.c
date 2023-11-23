/*

Fait par Rakulan SIVATHASAN

Pour l'ESGI, exo 60

Correction + personnel

*/



#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    /*
    FILE * compteur = NULL;
    int check;
    int number;

    fopen("compteur.txt", "w+");

    while ((check = fgetc(compteur)) != EOF){
        fputc(check, number);
        number++;
        remove("compteur.txt");
        fopen("compteur.txt", "w+");
        fprintf("%d",number);
    }
    */

    const char * compteurfile = "compteur.txt";
    int compteur = 0;
    FILE * check = NULL;

    if ((check = fopen(compteurfile, "r")) != NULL){
        fscanf(check, "%d", &compteur);
        fclose(check);
        check = NULL;
    }

    check = fopen("compteur.txt", "w");

    ++compteur;
    printf("Programme lancé %d fois\n", compteur);
    fprintf(check, "%d\n", compteur);
    fclose(check);
    check = NULL;

    exit(EXIT_SUCCESS);
}