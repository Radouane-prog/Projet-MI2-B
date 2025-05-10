
void adopter_animal(Animal tab[], int *taille){
    int i,j;
    int num_id;
    int trouve = 0;
    int selection = -4;

    printf("\n=== Adoption d'un animal ===\n");
    printf("Saisir le numéro d'identification de l'animal a adopter : ");
    scanf("%d", &num_id);

    for(int i=0;i<*taille;i++){
        if(tab[i].id == num_id){
            selection = i;
            printf("L'animal %d a été trouvé\n", num_id);
            break;
        }
        
    }
    if(selection == -4){
        printf("L'animal %d n'existe pas\n", num_id);
        return;
    }
    else{
        supprimer_element(tab,taille,selection);
    }
    printf("L'animal %d a été adopté avec succès\n", num_id);
    printf("Il reste %d animaux dans le chenil \n", *taille);


}

void supprimer_element(Animal tab[], int *taille, int index){
    for(int i=index;i<*taille-1;i++){
        tab[i] = tab[i+1];
    }
    (*taille)--;
}
