void TabVersFichier(Animal tab[], int *taille){
    FILE *fichier;
    fichier = fopen("animaux.txt","w");
    if(fichier == NULL){
        printf("Fichier introuvable. \n");
        return;
    }
    for(int i=0;i < *taille;i++){
        if( (tab[i].id != -5) || (tab[i].nom != "NULL") || (tab[i].espece != "NULL") || (tab[i].annee != -5) || (tab[i].poids != -5.0) || (tab[i].citation != "NULL")){
            fprintf(fichier, "%d %s %s %d %f %s\n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);   
        }
    }
    
    fclose(fichier);
}
