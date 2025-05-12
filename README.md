# Projet-MI2-B : ChenYl-TECH 
Projet de fin d'année pré-ING-1 informatique.

## Sommaire
-[Présentation](#présentation)
-[Fonctionnalités](#fonctionnalités)
-[Technologie utilisée](#technologie-utlisée)
-[Utilisation](#utilisation)
-[Prérequis](#prérequis)

## Présentation du projet 
Le projet ChenYl-TECH consiste à programmer une application permettant la gestion d'un refuge pour animaux étant 100% interactif par l'utilisateur. Le refuge contient 4 espèces d'animaux ( chat, chiens, hamsters et autruches ).

## Fonctionnalités
Le projet permet de réaliser les opérations suivantes au sein du refuge : 
* **Gestion des animaux :**
* Ajouter de nouveaux animaux au refuge (`ajouter.c`).
* Permettre l'adoption d'animaux (`adopter.c`).
* Afficher l'inventaire des animaux présents (`inventaire.c`).
* Rechercher des animaux spécifiques (`recherche.c`).
* **Tâches Quotidiennes / Hebdomadaires :**
* Gérer le nourrissage des animaux (`day_Food.c`).
* Gérer le nettoyage des enclos (`day_Clean.c`).
* **Gestion des Données :**
* Charger les données des animaux depuis un fichier vers untableau de structure " Animal "  (`Fichier_vers_Tab.c`).
* Sauvegarder les données des animaux depuis la mémoire vers un fichier (`TabVersFichier.c`).
* **Interface Utilisateur :**
* Un menu interactif pour naviguer entre les différentes fonctionnalités (`Menu.c`).
* Fonctions pour assurer une saisie robuste et gérer les erreurs (`robuste.c`).
* **Utilitaires :**
* Fonctions de manipulation de chaînes de caractères (`fonctions_strings.c`).

## Technologie utilisée 
* Langage C

## Prérequis
Pour compiler et exécuter ce projet, vous aurez besoin de :
* Un compilateur C
* L'outil `make`

## Utilisation
Une fois le projet compilée, vous avez 7 options à votre disposition : 
![image](https://github.com/user-attachments/assets/fefa6ee6-3dea-41b7-a230-59ee63a1f56f)

La 1ère options est la recherche d'un animal, en tapant le chiffre 1. Ensuite, l'application vous demande si vous souhaitez rechercher l'animal par son nom, par son âge ( senior / jeune ) ou bien par son espèce, en répondant par o (oui) ou n (non) pour chaque options. 
![image](https://github.com/user-attachments/assets/81257226-fe2f-4252-a836-8cb997505a7e)


Si vous recherchez l'animal par son NOM : vous devrez saisir celui ci. Si le nom est valide et qu'il figure dans la liste des animaux, l'application affichera l'animal que vous recherchez.

Si vous recherchez l'animal par son espèce, vous devrez donc saisir l'espèce de l'animal. Ensuite, l'application vous affichera l'animal que vous recherchez.

Si vous recherchez l'animal par son âge, vous devrez entrer la tranche d'âge de l'animal ( s'il est jeune ou senior ).

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
La 2ème option à votre disposition est l'ajout d'un animal au refuge. Entrer le chiffre 2 pour choisir cette fonctionnalité. Ensuite, l'application va construire un animal en fonction des informations que vous lui donnerez. En effet, l'application vous demandera d'entrer le nom, l'espèce, l'année de naissance, le poids de l'animal, ainsi qu'un commentaire spécifique si vous le souhaitez. 
![image](https://github.com/user-attachments/assets/4ea52d5a-eff9-4eb3-84c2-0a22c45010f2)
Ainsi, l'animal sera référencer au refuge.

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
La 3ème option est l'adoption d'un animal. Pour ce faire, vous devrez entrer l'id de celui-ci. Si l'id correspond à un id parmis tout les animaux présent dans le refuge, l'animal sera trouvé, et sera adopté par vous même !
![image](https://github.com/user-attachments/assets/d363e607-d4e3-46a4-994c-d65df557119f)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
La 4ème option proposée est l'affichage de l'inventaire du refuge. L'application vous demande si vous souhaitez avoir un affichage par un âge décroissant ou par quartile d'âge. Répondez par 0 ( décroissant )  ou 1 ( quartile ) . Suite a cela, l'application vous affichera le nombre d'animaux par âge décroissant ( si vous l'avez demandé ) en indiquant les informations propres à chaque animaux ( id, nom, espèce, année de naissance, poids, commentaire ). De même si vous demandez par quartile d'âge.
![image](https://github.com/user-attachments/assets/e175767f-dcf6-4c9e-b157-a9eb1ac4ba81)



--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
La 5ème option permet le calcul de la quantité de croquettes à donner chaque jour.Vous devrez entrer l'espèce de l'animal a nourrir. L'application vous affichera la quantité de nourriture nécessaire par jour en kilogrammes.
![image](https://github.com/user-attachments/assets/7aa34ccb-d299-46ac-8d09-c5d1ad66479d)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
La 6ème option vous affiche la durée hebdomadaire de nettoyage du refuge. En fonction de l'espèce de l'animal, la durée de nettoyage ne sera pas identique. La durée sera affiché en minutes.
![image](https://github.com/user-attachments/assets/904ea870-3495-4d46-a2f2-75d4745b63a3)

--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
Enfin la 7ème option est l'arrêt du programme.


:warning: :rotating_light: Pour un fonctionnement optimal de l'application, veuillez utiliser des lettres en minuscules ! 



