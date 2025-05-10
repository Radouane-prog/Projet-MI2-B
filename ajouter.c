 void selectionneur_espece(char *espece){
    int choix;
    do{
            printf(" | selectionneur_espece | \n");
            printf("  ==== Taper 1 si l'espece est un chat  \n");
            printf("  ==== Taper 2 si l'espece est un chiens  \n");
            printf("  ==== Taper 3 si l'espece est un hamsters  \n");
            printf("  ==== Taper 4 si l'espece est une autruches  \n");

            scanf("%d",&choix);


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

    printf("Veuillez saissir le nom de l'animal");
    scanf("%s",a1.nom);

    printf("Veuillez selectionnez son espece :");
    selectionneur_espece(a1.espece);

    printf("Veuillez saisir son année de naissance : \n");
    scanf("%d",&a1.annee);

     printf("Veuillez asissir son poids : \n");
    scanf("%d",&a1.poids);

    printf("Veuillez fournir un commentaire pour cette animal : \n");
    scanf("%s",a1.citation);
    
    a1.id = rand % 51;
    for(int i=0 ; i<taille;i++){
        while(a1.id == tab[i].id) {
             a1.id = rand()% 51;
        }
    }
    
    
    
    printf(" ==================================\n");
    printf(" ==== ✅ %s  a été ajouté au refuge ! ==== \n",a1.nom);
    printf(" ==================================\n");
    
    tab[taille+1] = a1;
    
 }
   

}
