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


ANIMAUX creation_animaux(){
    ANIMAUX a1;
    
    printf(" ==================================\n");
    printf(" ==== Constrcution de l'animal ==== \n");
    printf(" ==================================\n");
    
    printf("Veuillez saissir le nomde l'animal");
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
    printf(" ==== Affichage de l'animal ==== \n");
    printf(" ==================================\n");
    
    
    printf(" Nom : %s \n",a1.nom);
    printf(" Espece : %s \n",a1.espece);
    printf(" Date de naissance : %d \n",a1.naissance);
    printf(" Poids: %d \n",a1.poids);
    printf(" Commentaire : %s \n",a1.commentaire);
    
    printf(" ==================================\n"):
    
    return a1;
    
}