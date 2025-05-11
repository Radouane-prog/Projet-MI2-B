float lire_flottant() {
    char buffer[100];
    float valeur;
    char extra;

    while (1) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            continue;
        }

        if (sscanf(buffer, "%f %c", &valeur, &extra) == 1) {
            return valeur;
        } else {
            printf(" Entrée invalide. Veuillez entrer un nombre à virgule valide (ex: 3.14).\n");
        }
    }
}


int lire_entier() {
    char buffer[100];
    int entier;
    char extra;

    while (1) {
        if (fgets(buffer, sizeof(buffer), stdin) == NULL) {
            continue;
        }

        if (sscanf(buffer, "%d %c", &entier, &extra) == 1) {
            return entier;
        } else {
            printf(" Entrée invalide. Veuillez entrer un nombre entier valide.\n");
        }
    }
}
