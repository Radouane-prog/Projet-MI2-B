void inventaire(Animal tab[], int taille, int choix_tri){
    if(choix_tri == 1){
        int index_decroissant[taille];
        for(int i=0;i<taille;i++){
            index_decroissant[i] = i;
        }
        printf("📋 Inventaire par âge décroissant: \n");
        printf("Nombre d'animaux: %d \n",taille);
        for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (tab[index_decroissant[j]].annee < tab[index_decroissant[j+1]].annee) {
                int temp = index_decroissant[j];
                index_decroissant[j] = index_decroissant[j + 1];
                index_decroissant[j + 1] = temp;
            }
        }
    }
    for(int i=0; i<taille;i++){
        printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[index_decroissant[i]].id, tab[index_decroissant[i]].nom, tab[index_decroissant[i]].espece, tab[index_decroissant[i]].annee, tab[index_decroissant[i]].poids, tab[index_decroissant[i]].citation);
    }

    }else{
        int index_croissant[taille];
        for(int i=0;i<taille;i++){
            index_croissant[i] = i;
        }
        int q = taille/4;
        int reste = taille%4;
        printf("📋 Inventaire par tranche d'âge: \n");
        printf("Nombre d'animaux: %d \n",taille);
        for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - 1 - i; j++) {
            if (tab[index_croissant[j]].annee > tab[index_croissant[j+1]].annee) {
                int temp = index_croissant[j];
                index_croissant[j] = index_croissant[j + 1];
                index_croissant[j + 1] = temp;
            }
        }
    }
        printf("Quartile 1: \n");
        for(int i=0; i<taille;i++){
            if(i == q+reste){
                printf("Quartile 2:\n");
            }else if(i == 2*q+reste){
                printf("Quartile 3:\n");
            }else if(i == 3*q+reste){
                printf("Quartile 4:\n");
            }
            printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[index_croissant[i]].id, tab[index_croissant[i]].nom, tab[index_croissant[i]].espece, tab[index_croissant[i]].annee, tab[index_croissant[i]].poids, tab[index_croissant[i]].citation);
    } 
    }
    
}

