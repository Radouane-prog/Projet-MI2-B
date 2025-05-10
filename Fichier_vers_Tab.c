
void retirer_saut_de_ligne(char *chaine) {
    int i = 0;
    while (chaine[i] != '\0') {
        if (chaine[i] == '\n') {
            chaine[i] = '\0';
            break;
        }
        i++;
    }
}


int lire_animaux_fichier(char *nomFichier, Animal tab[], int capacite) {
    FILE *f = fopen(nomFichier, "r");
    
    if (f == NULL) {
        printf("Impossible d'ouvrir le fichier.\n");
        return -1;
    }

    char ligne[256]; // taille augmentée pour stocker toute une ligne
    int compteur = 0;

    while (fgets(ligne, sizeof(ligne), f) && compteur < capacite) {
        retirer_saut_de_ligne(ligne);

        Animal a;
        int nb = sscanf(
            ligne,
            "%d %24s %24s %d %f %199[^\n]",
            &a.id,
            a.nom,
            a.espece,
            &a.annee,
            &a.poids,
            a.citation
        );

        if (nb == 6) {
            tab[compteur++] = a;
        } else {
            printf("Ligne mal formatée ignorée : %s\n", ligne);
        }
    }

    fclose(f);
    return compteur;
}
