// Fonction calculant la quantitée de nourriture suffisante pour chaque espèce d'animaux
float day_Food(Animal tab[], int taille) {
    float consommation = 0;

    for(int i=0;i<taille;i++){
        if (strEgale(tab[i].espece, "chat") || strEgale(tab[i].espece, "chien")) {
        if ( (2025-tab[i].annee) < 2) {
            consommation += 500;
        } else {
            consommation += 0.1 * tab[i].poids * 1000; 
        }

        // Affichage spécifique selon l'espèce
        if (strEgale(tab[i].espece, "chat")) {
        } else {
        }
    } 
    // Vérification pour le Hamster
    else if (strEgale(tab[i].espece, "hamster")) {
        consommation += 20;
    } 
    // Vérification pour l'Autruche
    else if (strEgale(tab[i].espece, "autruche")) {
        consommation += 2500;
    }
    consommation /= 1000;
    }
    printf("La quantité de croquettes nécessaires pour nourir tout les animaux pour un jour est de %fKg \n",consommation);
    return consommation;
}
