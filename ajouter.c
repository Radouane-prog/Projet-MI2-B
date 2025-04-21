





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

     if(choix == 1){
         strncpy(espece, "Chat");
            }
     if(choix == 2){
        strncpy(espece, "chiens");
         }
     if(choix == 3){
       strncpy(espece, "hamsters");
        }
    if(choix == 4){
       strncpy(espece, "autruches");
          }

    return espece;
}

  
  
  
  
  
void creation_animaux(ANIMAUX tab[],int Taille){
    
    if(taille + 1 > 49){
     printf(" ==================================\n");
    printf(" ==== Le refuge est plein :( ==== \n");
    printf(" ==================================\n");
 }
 
 else{
    ANIMAUX a1;

    printf(" ==================================\n");
    printf(" ==== Construction de l'animal ==== \n");
    printf(" ==================================\n");

    printf("Veuillez saissir le nom de l'animal");
    scanf("%s",a1.nom);

    printf("Veuillez selectionnez son espece :");
    a1.espece = selectionneur_espece();

    printf("Veuillez asissir son année de naissance : \n");
    scanf("%d",&a1.naissance);

     printf("Veuillez asissir son poids : \n");
    scanf("%d",&a1.poids);

    printf("Veuillez fournir un commentaire pour cette animal : \n");
    scanf("%s",a1.commentaire);

    a1.num = rand() % 51;
    
    printf(" ==================================\n");
    printf(" ==== %s  a été ajouté au refuge ! ==== \n",a1.nom);
    printf(" ==================================\n");
    
    tab[taille+1] = a1;
    
 }
   

}
