#include <stdio.h>
#include <stdlib.h>

void JeuDevinette()
{	
	enum boolean {false, true};
	int essai =0; 			// le nombre d'essais
	int carTrouve =0; 			// Nombre de caractères trouvés
	char mot1 [21];  		// la chaîne à dévoiler
	char mot2 [21]="";		// la chaîne trouvée initialisée à vide
	char car;        		//  Caractère proposé par l'adversaire	
	enum boolean trouve=false;	// Si mot1=mot2 alors trouve = vrai (fin du jeu)
	int i;  				    // compteur
		
	//Saisie du mot à dévoiler : mot1
	printf("Mot a devoiler(ne depasse pas 20 caracteres) ? : ");
	gets(mot1);  
	
	//Initialisation de la chaîne mot2 par des tirets
    //..		
	system("cls"); 	//Effacer le contenu de l'écran pour cacher le mot à dévoiler
		
	//Déroulement de la devinette
    //Message à afficher :
	//printf("\n\nEssai Num %d sur %d: ", essai, strlen(mot1)*2) ;
    //printf("Caracteres trouves : %s\n",mot2);   
	//printf("Nombre de lettres trouvees = %d\n",carTrouve);
	//...	

	//Résultat 
	//printf("\nBravo ! Vous avez gagne. ");
	//printf("\nDesole ! Vous avez perdu.");
	printf("\n\nLe mot recherche est :  %s\n", mot1);
}

