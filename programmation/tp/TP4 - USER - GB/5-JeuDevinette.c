#include <stdio.h>
#include <stdlib.h>

void JeuDevinette()
{	
	enum boolean {false, true};
	int essai =0; 			// le nombre d'essais
	int carTrouve =0; 			// Nombre de caract�res trouv�s
	char mot1 [21];  		// la cha�ne � d�voiler
	char mot2 [21]="";		// la cha�ne trouv�e initialis�e � vide
	char car;        		//  Caract�re propos� par l'adversaire	
	enum boolean trouve=false;	// Si mot1=mot2 alors trouve = vrai (fin du jeu)
	int i;  				    // compteur
		
	//Saisie du mot � d�voiler : mot1
	printf("Mot a devoiler(ne depasse pas 20 caracteres) ? : ");
	gets(mot1);  
	
	//Initialisation de la cha�ne mot2 par des tirets
    //..		
	system("cls"); 	//Effacer le contenu de l'�cran pour cacher le mot � d�voiler
		
	//D�roulement de la devinette
    //Message � afficher :
	//printf("\n\nEssai Num %d sur %d: ", essai, strlen(mot1)*2) ;
    //printf("Caracteres trouves : %s\n",mot2);   
	//printf("Nombre de lettres trouvees = %d\n",carTrouve);
	//...	

	//R�sultat 
	//printf("\nBravo ! Vous avez gagne. ");
	//printf("\nDesole ! Vous avez perdu.");
	printf("\n\nLe mot recherche est :  %s\n", mot1);
}

