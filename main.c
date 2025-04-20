#include <stdio.h>


//Structure permettant de gérer un Animal
typedef struct{
        int id;
        char nom[25];
        char espece[25];
        int annee;
        float poids;
        char citation[];
    }Animal;

int main(){
    
    
    return 0;
}
