//Fichier contenant la procédure recherche
//procédure recherche qui permet de rechercher un animal en fonctions des critères choisis

void recherche(Animal tab[], int taille){
    char choix_nom[25], choix_espece[25], choix_age[25];
    char bool_nom, bool_espece, bool_age, choix_aucun_filtre;
    int compteur_affichage = 0;
    
    printf("Souhaitez-vous rechercher votre animal par son nom (o/n):");
    scanf("%c",&bool_nom);
    while( (bool_nom != 'o') || (bool_nom != 'n') ){
        printf("Erreur. Vous devez entrez o pour OUI ou n pour NON pas autre chose:");
        scanf("%c",&bool_nom);
    }
    if(bool_nom == 'o'){
        printf("Entrez le nom de votre animal:");
        scanf("%s", choix_nom);
    }else{
        copier_chaine(choix_nom, "NULL");
    }
    
    printf("Souhaitez-vous rechercher votre animal par son espece (o/n):");
    scanf("%c",&bool_espece);
    while( (bool_espece != 'o') || (bool_espece != 'n') ){
        printf("Erreur. Vous devez entrez o pour OUI ou n pour NON pas autre chose:");
        scanf("%c",&bool_espece);
    }
    if(bool_espece == 'o'){
        printf("Entrez l'espèce de votre animal:");
        scanf("%s",choix_espece);
    }else{
        copier_chaine(choix_espece, "NULL");
    }
    
    printf("Souhaitez-vous rechercher votre animal par son âge(senior ou jeune) (o/n):");
    scanf("%c",&bool_age);
    while( (bool_age != 'o') || (bool_age != 'n') ){
        printf("Erreur. Vous devez entrez o pour OUI ou n pour NON pas autre chose:");
        scanf("%c",&bool_age);
    }
    if(bool_age == 'o'){
        printf("Entrez la tranche d'âge de votre animal (jeune ou senior):");
        scanf("%s",choix_age);
        while( !(strEgale(choix_age, "senior")) || !(strEgale(choix_age, "senior")) ){
            printf("Erreur. Vous devez écrire senior ou jeune:");
            scanf("%s",choix_age);
        }
    }else{
        choix_age = "NULL";
    }
    
    if( !(strEgale(choix_espece, "NULL")) || !(strEgale(choix_nom, "NULL")) || !(strEgale(choix_age, "NULL")) ){
    
    printf("Voici les animaux de ChenYI-Tech qui correspondent à votre recherche:\n");
    
    for(int i=0; i<taille; i++){
    
        if( (bool_espece == 'o') && (bool_age == 'n') (bool_nom == 'n') ){
            if(tab[i].espece == choix_espece){
                printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                compteur_affichage++;
            }
        }
        
        if( (bool_espece == 'n') && (bool_age == 'o') (bool_nom == 'n') ){
            if(choix_age == "senior"){
                if( (2025-tab[i].annee) > 10){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }else{
                if( (2025-tab[i].annee) < 2){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }
        }
        
        if( (bool_espece == 'n') && (bool_age == 'n') (bool_nom == 'o') ){
            if(tab[i].nom == choix_nom){
                printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                compteur_affichage++;
            }
        }
        
        if( (bool_espece == 'o') && (bool_age == 'o') (bool_nom == 'n') ){
            if(choix_age == "senior"){
                if( ((2025-tab[i].annee) > 10) && (tab[i].espece == choix_espece) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }else{
                if( ((2025-tab[i].annee) < 2) && (tab[i].espece == choix_espece) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }
        }
        
        if( (bool_espece == 'o') && (bool_age == 'n') (bool_nom == 'o') ){
            if((tab[i].nom == choix_nom) && (tab[i].espece == choix_espece)){
                printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                compteur_affichage++;
            }
        }
        
        if( (bool_espece == 'n') && (bool_age == 'o') (bool_nom == 'o') ){
            if(choix_age == "senior"){
                if( ((2025-tab[i].annee) > 10) && (tab[i].nom == choix_nom) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }else{
                if( ((2025-tab[i].annee) < 2) && (tab[i].nom == choix_nom) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }
        }
        
         if( (bool_espece == 'o') && (bool_age == 'o') (bool_nom == 'o') ){
            if(choix_age == "senior"){
                if( ((2025-tab[i].annee) > 10) && (tab[i].nom == choix_nom) && (tab[i].espece == choix_espece) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }else{
                if( ((2025-tab[i].annee) < 2) && (tab[i].nom == choix_nom) && (tab[i].espece == choix_espece) ){
                    printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
                    compteur_affichage++;
                }
            }
        }
        
    }
    
    if(compteur_affichage == 0){
        printf("Aucun résultat ne correspond à votre recherche. \n");
    }
    
    }else{
        printf("Vous avez effectué une recherche qui comporte aucun filtre. Souhaitez-vous que j'affiche tout les animaux ? (o/n):");
        scanf("%c",&choix_aucun_filtre);
        if(choix_aucun_filtre == 'o'){
            for(int i=0; i<taille; i++){
                printf("Voici tout les animaux: \n");
                printf("ID: %d    NOM: %s    ESPECE: %s    ANNEE DE NAISSANCE: %d    POIDS: %f      COMMENTAIRE: %s \n",tab[i].id, tab[i].nom, tab[i].espece, tab[i].annee, tab[i].poids, tab[i].citation);
            }
        }
    }
    
    
    
}
