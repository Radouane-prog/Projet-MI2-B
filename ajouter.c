
void copier(char *espece_copier , char  *animal){
    int i = 0; 
    while(animal[i] != '\0') {
         espece_copier[i] = animal[i];
        i++;
        }
            espece_copier[i] = '\0'; 
    }




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
            copier(espece, "Chat");
            printf("😺 Chat sélectionné !\n");
            break;
        case 2:
            copier(espece, "Chien");
            printf("🐶 Chien sélectionné !\n");
            break;
        case 3:
            copier(espece, "Hamster");
            printf("🐹 Hamster sélectionné !\n");
            break;
        case 4:
            copier(espece, "Autruche");
            printf("🪿 Autruche sélectionnée !\n");
            break;
    }
}

  
  
  
  
  
void creation_animaux(ANIMAUX tab[],int Taille){
    
    if(taille + 1 > 49){
     printf(" ==================================\n");
    printf(" ==== ❌ Le refuge est plein  ==== \n");
    printf(" ==================================\n");
 }
 
 else{
    ANIMAUX a1;
    char sprc;
    printf(" ==================================\n");
    printf(" ==== 🔨 Construction de l'animal ==== \n");
    printf(" ==================================\n");

    printf("Veuillez saissir le nom de l'animal");
    scanf("%s",a1.nom);

    printf("Veuillez selectionnez son espece :");
    selectionneur_espece(a1.espece);

    printf("Veuillez asissir son année de naissance : \n");
    scanf("%d",&a1.naissance);

     printf("Veuillez asissir son poids : \n");
    scanf("%d",&a1.poids);

    printf("Veuillez fournir un commentaire pour cette animal : \n");
    scanf("%s",a1.commentaire);
    
    a1.food =0;
    a1.clean = 0;
    
    a1.num = rand % 51;
    for(int i=0 ; i<Taille;i++){
        while(tab[i].num == a.num) {
             a.num = rand()% 51;
        }
    }
    
    
    
    printf(" ==================================\n");
    printf(" ==== ✅ %s  a été ajouté au refuge ! ==== \n",a1.nom);
    printf(" ==================================\n");
    
    tab[taille+1] = a1;
    
 }
   

}
