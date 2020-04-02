#include <stdio.h>

void RechercheDouble()
{	
	//Déclaration des variables
	const int N = 8;
	int T[N]; 	// Tableau de N entiers impairs
    int a,b,i,ra,rb;
	//Autres variables ...
	
	
	// Remplissage du tableau T avec N entiers impairs
	
	printf("Lecture d'un tableau de %d entiers impairs :\n", N);
	
	for(i=0;i<N;i++){
		do{
			printf("Donner l'element %d:", i+1);
			scanf("%d", &T[i]);
		}while(T[i]%2 == 0);
	}
	
	//...
	
	// Saisie d'un premier entier a	
	printf("\nPremier entier a chercher : ");
	scanf("%d",&a);
	
	
	//Saisie d'un deuxième entier b (avec b <> a)
	//...
	do {
		printf("\nDeuxième entier a chercher : ");
		scanf("%d",&b);		
	}while(a==b);
	
	//Recherche de a et b dans T 
    //...
    ra = 0; rb = 0;
	for(i=0;i<N;i++){
		if(T[i] == a){
			ra = 1;
		}else if(T[i] == b){
			rb = 1;
	}
	if ((ra+rb) == 2){
		break;
	}
}
	//Affichage du résultat : 0, 1 ou 2 
    //...
    printf("Le resultat est %d\n", rb+ra);
}

