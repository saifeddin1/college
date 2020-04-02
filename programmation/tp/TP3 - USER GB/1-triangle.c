#include <stdio.h>
#include <math.h>
void triangle()
{	
	//Déclaration et Lecture
	float xa, ya, xb, yb, xc, yc, ab, ac, bc;
	printf("Donner les coordonnees de A ");
	printf ("\nXA : ");	scanf("%f", &xa);
	printf ("YA : ");	scanf("%f", &ya ) ;
	printf ("\nDonner les coordonnees de B ");
	printf ("\nXB : ");	scanf("%f", &xb) ;
	printf ("YB : ");	scanf("%f", &yb) ;
	printf ("\nDonner les coordonnees de c ");
	printf ("\nXC : ");	scanf("%f", &xc) ;
	printf ("YC : ");	scanf("%f", &yc) ;

	ab = sqrt((pow((xa-xb),2))+(pow((ya-yb),2)));
	ac = sqrt((pow((xa-xc),2))+(pow((ya-yc),2)));
	bc = sqrt((pow((xb-xc),2))+(pow((yb-yc),2)));
	//Cas d'un triangle plat
	if(((ya-yb)*(xb-xc)) == ((xa-xb)*(yb-yc))){
		
		printf ("\n=> Triangle plat \n");
	
	}

	//triangle equilatérale
	if ((ab == ac)&&(ab == bc))
	{
		
		printf ("\n=> Triangle equilateral \n");
	
	}
	//triangle isocèle
	else if((ab == ac)||(ab == bc)||(ac == bc)){
		
		printf ("\n=> Triangle isocele \n");
	
	}
	//triangle scalène
	else{
		
    	printf ("\n=> Triangle scalene \n");			
	
	}

} 

