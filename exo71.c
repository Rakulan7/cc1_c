#include <stdio.h>
#include <stdlib.h>


int main() {

    const char * chemin = "test.txt";

    FILE * fichier = NULL;

    if((fichier = fopen(chemin, "w")) == NULL){

        printf("Le fichier n'a pas pu être créer");
        exit(EXIT_FAILURE);

    }

    fprintf(fichier, "Test.\n");
    fclose(fichier);
    fichier = NULL;

    exit(EXIT_SUCCESS);

}