#include <stdio.h>
#include <stdlib.h>

//Structure permettant de gérer un Animal
typedef struct{
        int id;
        char nom[25];
        char espece[25];
        int annee;
        float poids;
        char citation[250];
    }Animal;

#include "fonctions_strings.c"
#include "adopter.c"
#include "ajouter.c"
#include "day_Food.c"
#include "day_Clean.c"
#include "Fichier_vers_Tab.c"
#include "inventaire.c"
#include "recherche.c"
#include "TabVersFichier.c"
#include "Menu.c"
#define TAILLE_MAX 50

int main(){
    Animal tab[TAILLE_MAX];
    int taille = lire_animaux_fichier("animaux.txt",tab,50);
    int *pointeur_taille = &taille;
    Menu(tab,pointeur_taille);
    return 0;
}
