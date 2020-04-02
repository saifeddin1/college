#include <stdio.h>

void Pascal()
{
	const int max =10;	//Nombre maximum de lignes
	//Déclaration des variables
	int n,i,j; 
	int P[max][max];
	//...
	
	// Saisie du nombre de lignes de la matrice
    //...
	do{
		printf("Donner le nombre des lignes:");
		scanf("%d", &n);
	
	}while(n > max);
	
	//Remplissage du triangle de pascal d'ordre n
    //...
    P[0][0]=1;
    for(i=1;i<n;i++){
    		P[i][0] = 1;
	    	P[i][i] = 1;
    	for(j=2;j<i;j++){
    		P[i][j] = P[i-1][j] + P[i-1][j-1];
		}
    	
	}
	
	//Affichage du triangle de pascal
	printf("\nTriangle de Pascal d'ordre %d :\n", n);
	
	for(i=0;i<n;i++){
		for(j=0;j<i;j++){
			
			printf( "| %d |", P[i][j]);
		
		}
		printf("\n");
		}
	
	//...
}
