#include<stdio.h>
#include<math.h>
void equation()
{	
	//Déclaration des variables
	float a,b,c, delta;
	float x1,x2;
	
	//Saisie des trois coefficients
	printf("Introduire les coffecients : ");
	printf("\n- Coffecient A : ");
	scanf("%f", &a);
	printf("- Coffecient B : ");
	scanf("%f", &b);
	printf("- Coffecient C : ");
	scanf("%f", &c);
    delta=pow(b,2)-4*a*c;
    
	//Affichage de l'équation : ax^2 + bx + c = 0
	printf("\nEquation : %.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);
	 
	/*
	Voici les différents cas à étudier : 
  	a)	A=0 et B=0 et C=0 (0x^2 + 0x + 0 = 0)
		Tout réel est une solution de cette équation.
	b)	A=0 et B=0 et C 0 (0x^2 + 0x + C = 0)  
		Cette équation ne possède pas de solutions.
	c)	A=0 (0x^2 + bx + c = 0) 
		La solution de cette équation du premier degré est : x = C/B
	d)	D<0 (b^2-4ac < 0)
		Cette équation n'a pas de solutions réelles.
	e)	D=0 (b^2-4ac = 0) 
		Cette équation a une seule solution réelle : x = -B/2A
	f)	D>0 (b^2-4ac > 0)
		Les solutions réelles de cette équation sont :
	
		
	*/
	
	if (a==0 &&b==0&&c==0)
		printf("\nTout reel est une solution.");
	else
		if (a==0 &&b==0 &&c!=0)
			printf("\nCette equation ne possede pas de solutions !");
		else
			if (a==0 &&b!=0 &&c!=0) 
				printf("\nLa solution de cette equation du premier degre est : %.2f", -c/b);
			else 
				if (delta<0 )
					printf("\nCette equation n'a pas de solutions reelles !");
				else
					if (delta==0)
						printf("\nCette equation a une seule solution reelle : x = %.2f",-b/(2*a));
					else //auto delta >0
					{
						printf("\nLes deux solutions reelles de cette équation sont :");
						x1 = (-b+sqrt(delta))/(2*a) ;
						x2 = (-b-sqrt(delta))/(2*a);
						printf("\nx1 = %.2f & x2 = %.2f", x1,x2);
					}
}

