void TabVersFichier(Animal tab[], int *taille){
    FILE *fichier;
    fichier = fopen("ChenYI_Tech/animaux.txt","w");
    if(fichier == NULL){
        printf("Fichier introuvable. \n");
        return;
    }
    for(int i=0;i < *taille-1;i++){
        fprintf("%d %s %s %d %fKg %s\n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
    }
    
    fclose(fichier);
}
