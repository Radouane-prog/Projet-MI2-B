#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE 200;
#define animal.txt:
#define animal_temp.txt;


void adopter_animal(){
    int num_id;
    printf("\n=== Adoption d'un animal ===\n");
    printf("Saisir le numéro d'identification de l'animal a adopter : ");
    scanf("%d", &num_id);

    FILE *f = fopen(animal.txt, "r");
    FILE *temp = fopen(animal_temp.txt, "w");
    char ligne[10];
    int id_actuel;
    int trouve = 0;

    while (fgets(ligne, sizeof(ligne), fichier)) {
        scanf(ligne, "%d", &id_actuel);

        if (id_actuel == num_id) {
            printf("Animal avec l'id %d adopté avec succès.\n", num_id);
            trouve = 1;
        }
        fputs(ligne, temp);
    }
    remove(animaux.txt);
    rename(animal_temp, animal.txt);
}

