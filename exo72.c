/*

Fait par Rakulan SIVATHASAN

Pour l'ESGI, exo 60


*/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {

    FILE * output = stdout;
    FILE * current = NULL; // correction

    int car; // correction
    
    for (int i = 1; i < argc; i++){
        /*
        
        char fichier;
        output = fopen(argv[i], "r");

        if (output != NULL){
            fscanf(output, "%c", fichier);
            printf("%c\n", fichier);
        }
        */

        if ((current = fopen(argv[i], "r")) == NULL) {
            fprintf(stderr, "Erreur ouverture \"%s\".\n", argv[i]);
            continue;
        }
        while((car = fgetc(current)) != EOF) {
            fputc(car, output);
        }
        fclose(current);
    }

    exit(EXIT_SUCCESS);
    
}