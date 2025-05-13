// Procedure permettant de selectionner le type d'espece 
void selectionneur_espece(char *espece){
    int choix;
    do{
            printf(" ------------------------\n");
            printf(" | selectionneur_espece | \n");
            printf(" ------------------------\n");
        
            printf("  ==== Taper 1 si l'espece est un chat  \n");
            printf("  ==== Taper 2 si l'espece est un chiens  \n");
            printf("  ==== Taper 3 si l'espece est un hamsters  \n");
            printf("  ==== Taper 4 si l'espece est une autruches  \n");

            choix = lire_entier();


    }while( choix < 1 || choix > 4);

    switch (choix) {
        case 1:
            copier_chaine(espece, "chat");
            printf("😺 Chat sélectionné !\n");
            break;
        case 2:
            copier_chaine(espece, "chien");
            printf("🐶 Chien sélectionné !\n");
            break;
        case 3:
            copier_chaine(espece, "hamster");
            printf("🐹 Hamster sélectionné !\n");
            break;
        case 4:
            copier_chaine(espece, "autruche");
            printf("🪿 Autruche sélectionnée !\n");
            break;
    }
}
  

// Procedure permettant de cree un animal 
void creation_animaux(Animal tab[],int taille){
    
    if(taille + 1 > 49){
     printf(" ==================================\n");
    printf(" ==== ❌ Le refuge est plein  ==== \n");
    printf(" ==================================\n");
 }
 
 else{
    Animal a1;
    char sprc;
    printf(" ==================================\n");
    printf(" ==== 🔨 Construction de l'animal ==== \n");
    printf(" ==================================\n");

    printf("Veuillez saisir le nom de l'animal:");
    scanf(" %[^\n]",a1.nom);

    printf("Veuillez selectionnez son espece :");
    selectionneur_espece(a1.espece);

    printf("Veuillez saisir son année de naissance : ");
    a1.annee = lire_entier();
    while(a1.annee < 0){
        printf("Erreur. Veuillez saisir son année de naissance :");
        a1.annee = lire_entier();
    }

     printf("Veuillez saisir son poids :");
     a1.poids = lire_flottant();
     while(a1.poids < 0){
        printf("Erreur. Veuillez saisir son poids :");
        a1.poids = lire_flottant();
     }

    printf("Veuillez fournir un commentaire pour cette animal :");
    scanf(" %[^\n]",a1.citation);
    
    a1.id = rand() % 51;
    for(int i=0 ; i<taille;i++){
        while(a1.id == tab[i].id) {
             a1.id = rand()% 51;
        }
    }
    
    
    
    printf(" ==================================\n");
    printf(" ==== ✅ %s  a été ajouté au refuge ! ==== \n",a1.nom);
    printf(" ==================================\n");
    
    tab[taille] = a1;
    
 }
   

}
