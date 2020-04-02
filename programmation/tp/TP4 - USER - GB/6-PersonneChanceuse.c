#include <stdio.h>
#include <stdlib.h>		
#include <string.h>			//contient la fonction srand

void PersonneChanceuse()
{	
	const int max = 30;			//nombre max de pr�noms
	const int taille = 20;		// taille maximale de chaque pr�nom
	// Matrice L contenant max lignes (pr�noms) et taille colonnes (taille maximale d'un //pr�nom)
	char L[max][taille];			
	int p,n; 	//Nombre de pr�noms � saisir 
	//Autres variables ...
	int i,j;
	//Saisie du nombre de personnes (1..max)
	do{
		printf("Donner le nombre de personnes <  %d : ",max);
		scanf("%d", &n);
	}while((n > max) || (n <0));
	
	
	 p =rand() % n;  //position de la personne chanceuse
	//...
	
	//Remplissage de la liste L avec n pr�noms (cha�nes de caract�res non vides) 
	printf("\nSaisie des prenoms :\n");
	for (i=0;i<n;i++){
		printf("donner la personne N%d", i+1);
		scanf("%s", L[i]);
		fflush(stdin);
	}
    //...
	srand(time(NULL));
	//�limination des n-1 personnes de la liste L en utilisant la fonction rand
	for (j=0;j<n;j++){
		if(strcmp(L[j], "")==0)
			strcpy(L[p],"");
			n--;	
	}
		
	//...
	//Affichage du pr�nom et de la position p de la personne chanceuse  
	printf("\nPersonne chanceuse : %s (position  : %d)\n",L[p] ,p+1);
}

