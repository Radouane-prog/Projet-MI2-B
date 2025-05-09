//fonction permettant d'assigner une chaîne de caractère à un tableau de caractères
void copier_chaine(char *dest, const char *src) {
    while (*src) {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

//fonction permettant de comparer deux chaînes de caractères
int strEgale(char *a, char *b) {
    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') {
        if (a[i] != b[i]) return 0;
        i++;
    }
    return (a[i] == '\0' && b[i] == '\0');
}

//fonction permettant de stocker dans le fichier animaux.txt les données du tableaux
void TabVersFichier(Animal tab[], int *taille) {
    FILE *fichier = fopen("animaux.txt", "w");
    if (fichier == NULL) {
        printf("Fichier introuvable.\n");
        return;
    }

    for (int i = 0; i < *taille; i++) {
        if (tab[i].id != -5 || 
            !strEgale(tab[i].nom, "NULL") ||
            !strEgale(tab[i].espece, "NULL") ||
            tab[i].annee != -5 || 
            tab[i].poids != -5.0 || 
            !strEgale(tab[i].citation, "NULL")) {

            fprintf(fichier, "%d %s %s %d %f %s\n",
                    tab[i].id,
                    tab[i].nom,
                    tab[i].espece,
                    tab[i].annee,
                    tab[i].poids,
                    tab[i].citation);
                    printf("Ok \n");
        }
    }

    fclose(fichier);
}
