#include <stdio.h>
void approxim()
{
 	//déclaration d'une consatnte ERR = 0.000006 (1E-6)
	const float ERR = 1E-6; //0.000006;

	//déclaration et initialisation des variables
	int i = 1, signe = 1;
	float pi = 1;	
	
	do{
		i = i + 2;
		signe = -signe;	
		pi = pi + (signe*(1.0/i));
	}while(1.0/i>=ERR);
	pi *= 4;



	printf("La valeur approchée de pi est %.2f\n", pi);
}


