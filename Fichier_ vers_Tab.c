
void retirer_saut_de_ligne(char *chaine){
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
    
    if (f==NULL) {
        printf("Impossible d'ouvrir le fichier \n");
        return -1;
    }

    char ligne[50];
    int  compteur = 0;

    while (fgets(ligne,50, f) && compteur < capacite) {
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
            a.commentaire
        );

        if (nb == 6) {
            tab[compteur++] = a;
        }
    }

    fclose(f);
    return compteur;
}
