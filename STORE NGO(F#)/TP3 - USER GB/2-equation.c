#include<stdio.h>
#include<math.h>
void equation()
{	
	//D�claration des variables
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
    
	//Affichage de l'�quation : ax^2 + bx + c = 0
	printf("\nEquation : %.1fx^2 + %.1fx + %.1f = 0\n", a, b, c);
	 
	/*
	Voici les diff�rents cas � �tudier : 
  	a)	A=0 et B=0 et C=0 (0x^2 + 0x + 0 = 0)
		Tout r�el est une solution de cette �quation.
	b)	A=0 et B=0 et C 0 (0x^2 + 0x + C = 0)  
		Cette �quation ne poss�de pas de solutions.
	c)	A=0 (0x^2 + bx + c = 0) 
		La solution de cette �quation du premier degr� est : x = C/B
	d)	D<0 (b^2-4ac < 0)
		Cette �quation n'a pas de solutions r�elles.
	e)	D=0 (b^2-4ac = 0) 
		Cette �quation a une seule solution r�elle : x = -B/2A
	f)	D>0 (b^2-4ac > 0)
		Les solutions r�elles de cette �quation sont :
	
		
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
						printf("\nLes deux solutions reelles de cette �quation sont :");
						x1 = (-b+sqrt(delta))/(2*a) ;
						x2 = (-b-sqrt(delta))/(2*a);
						printf("\nx1 = %.2f & x2 = %.2f", x1,x2);
					}
}

