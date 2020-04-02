#include <stdio.h>
	void etoiles()
{	
	short n; //nombre de lignes
	short i; //compteur de lignes
	short j; //compteur d'espaces
	short k; //compteur de symboles (étoile ou autre)
	char c[1];  //symbole
	
	printf("Donner le nombre de lignes :");	
	scanf("%d",&n);
	
	//fflush(stdin);
	//printf("Donner le symbole a afficher :");
	//scanf("%c",&c);
	//Représentation graphique du triangle
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
			
		}
		for(k=1;k<=2*i-1;k++)
			{
				printf("*");
			}
		printf("\n");
		}
	
}

