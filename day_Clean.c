int day_Clean(Animal tab[], int taille) {
    int nettoyage;

    for(int i=0;i<taille;i++){

        if (str_Egale(tab[i].espece, "chat") || str_Egale(tab[i].espece, "hamster")){
        nettoyage += 10*7 + 20;
        } 

        else if (str_Egale(tab[i].espece, "autruche")){
        nettoyage += 20*7 + 45;
        } 

        else if (str_Egale(a.espece, "chien")) {
        nettoyage += 5*7 + 20;
        }
    }
    nettoyage += 2*(50-taille);
    printf("Le temps requis pour nettoyer tout le refuge est de %dmin \n",nettoyage);
    return nettoyage;
}
