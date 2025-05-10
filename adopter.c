
void adopter_animal(Animal tab[], int *taille, int capacitemax){
    int i,j;
    int num_id;
    int trouve = 0;
    int selection = -4;

    printf("\n=== Adoption d'un animal ===\n");
    if(*taille == capacitemax){
        printf("Le chenil est plein, vous ne pouvez pas adopter d'animal (%d animaux !)\n", capacitemax);
        return;
        if(*taille > 0){
            printf("Cette animal va être retiré de la liste des animaux disponibles ( ID : %d, nom : %s\n");
            tab[(*taille)-1].id, tab[(*taille)-1].nom;
            tab[(*taille) - 1] = (Animal){-5, "NULL", "NULL", -5, -5.0,"NULL"};
            (*taille)--;
        }
    }
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
