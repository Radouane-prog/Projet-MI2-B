void Menu(Animal tab[], int *taille){
    int choix_fonctionalite;
    int choix_tri;
    printf("\n🌟  \033[1;33m========================================\033[0m 🌟");
    printf("\n🌟  \033[1;33m==  Bienvenue au refuge ChenYI-TECH ! ==\033[0m 🌟");
    printf("\n🌟  \033[1;33m========================================\033[0m 🌟");

    printf("\n📋 \033[1;33mMenu principal :\033[0m\n");
    printf("  1️⃣  🔍 Rechercher un animal dans notre refuge\n");
    printf("  2️⃣  ➕ Ajouter un animal au refuge\n");
    printf("  3️⃣  🗑️ Supprimer un animal adopté\n");
    printf("  4️⃣  📦 Afficher l'inventaire du refuge\n");
    printf("  5️⃣  🍖 Calculer la quantité de croquettes quotidienne\n");
    printf("  6️⃣  🧹 Durée de nettoyage hebdomadaire du refuge\n");
    printf("  0️⃣  ❌ Quitter le programme\n");

    printf("\n⚠️  \033[1;31mVeuillez entrer tout texte en minuscules pour un fonctionnement optimal.\033[0m\n");
    printf("👉 \033[1;36mEntrez le numéro correspondant à l'action souhaitée : \033[0m");
    scanf(" %d",&choix_fonctionalite);
    
    while( (choix_fonctionalite != 1) && (choix_fonctionalite != 2) && (choix_fonctionalite != 3) && (choix_fonctionalite != 4) && (choix_fonctionalite != 5) && (choix_fonctionalite != 6) && (choix_fonctionalite != 0) ){
        printf("❌ \033[1;31m  Erreur ! Veuillez choisir la fonctionalités souhaité en entrant le chiffre correspondant: \033[0m\n");
        scanf(" %d",&choix_fonctionalite);
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
        printf("📋Souhaitez-vous afficher l'inventaire par âge décroissant(1) ou par quartile d'âge(0) :");
        scanf("%d",&choix_tri);
        while( (choix_tri!=0) && (choix_tri!=1) ){
            printf("❌ Erreur. Souhaitez-vous afficher l'inventaire par âge décroissant(1) ou par quartile d'âge(0) :");
            scanf("%d",&choix_tri);
        }
        inventaire(tab,*taille,choix_tri);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 5){
        day_Food(tab,*taille);
        Menu(tab,taille);
    }else if(choix_fonctionalite == 6){
        day_Clean(tab,*taille);
        Menu(tab,taille);
    }else{
        return;
    }
}
