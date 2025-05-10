void Menu(Animal tab[], int *taille){
    int choix_fonctionalite;
    int choix_tri;
    printf("Bienvenue au refuge ChenYI-TECH ! \n");
    printf("Voici les différentes fonctionalités de notre refuge:\n");
    printf("Rechercher un Animal dans notre refuge (1) \n");
    printf("Ajouter un Animal dans notre refuge (2) \n");
    printf("Supprimer un Animal qui a été adopter (3) \n");
    printf("Afficher l'inventaire du refuge (4) \n");
    printf("Afficher la quantité de croquettes nécessaire pour nourir les animaux du refuge quotidiennement (5) \n");
    printf("Afficher la durée de travail nécessaire pour nettoyer le refuge pour une semaine (6) \n");
    printf("Quitter le programme (0) \n");
    printf("TOUT TEXTE DEVRA ETRE ENTREZ EN MINUSCULES POUR UN FONCTIONNEMENT OPTIMALE.\n \n");
    printf("Veuillez choisir la fonctionalités souhaité en entrant le chiffre correspondant:");
    scanf("%d",choix_fonctionalite);
    
    while( (choix_fonctionalite != 1) && (choix_fonctionalite != 2) && (choix_fonctionalite != 3) && (choix_fonctionalite != 4) && (choix_fonctionalite != 5) && (choix_fonctionalite != 6) && (choix_fonctionalite != 0) ){
        printf("Erreur. Veuillez choisir la fonctionalités souhaité en entrant le chiffre correspondant:");
        scanf("%d",choix_fonctionalite);
    }
    
    if(choix_fonctionalite == 1){
        recherche(tab,*taille);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 2){
        creation_animaux(tab,*taille);
        (*taille)++;
        TabVersFichier(tab,taille);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 3){
        adopter_animal(tab, taille);
        TabVersFichier(tab,taille);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 4){
        printf("Souhaitez-vous afficher l'inventaire par âge décroissant(1) ou par quartile d'âge(0) :");
        scanf("%d",&choix_tri);
        while( (choix_tri!=0) && (choix_tri!=1) ){
            printf("Erreur. Souhaitez-vous afficher l'inventaire par âge décroissant(1) ou par quartile d'âge(0) :");
            scanf("%d",&choix_tri);
        }
        inventaire(tab,*taille,choix_tri);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 5){
        day_Food(tab,taille);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 6){
        day_Clean(tab,taille);
        Menu(tab,taille);
    }else{
        return;
    }
}
