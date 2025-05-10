

void supprimer_element(Animal tab[], int *taille, int index){

    if(index == 49){
        copier_chaine(tab[49].nom, "NULL");
        copier_chaine(tab[49].espece, "NULL");
        tab[49].id = -5;
        tab[49].annee = -5;
        tab[49].poids = -5.0;
        copier_chaine(tab[49].citation, "NULL");

    }else{
        for(int i=index;i<*taille-1;i++){
        tab[i] = tab[i+1];
        }
    }
    (*taille)--; 
}

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
