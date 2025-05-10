
float day_Food(Animal tab[], int taille) {
    float consommation = 0;

    for(int i=0;i<taille;i++){
        if (str_Egale(tab[i].espece, "chat") || str_Egale(tab[i].espece, "chien")) {
        if (tab[i].age < 2) {
            consommation += 500;
        } else {
            consommation += 0.1 * tab[i].poids * 1000; 
        }

        // Affichage spécifique selon l'espèce
        if (str_Egale(tab[i].espece, "chat")) {
        } else {
        }
    } 
    // Vérification pour le Hamster
    else if (str_Egale(tab[i].espece, "hamster")) {
        consommation += 20;
    } 
    // Vérification pour l'Autruche
    else if (str_Egale(tab[i].espece, "autruche")) {
        consommation += 2500;
    }
    consommation /= 1000;
    }
    printf("La quantité de croquettes nécessaires pour nourir tout les animaux pour un jour est de %fKg \n",consommation);
    return consommation;
}
