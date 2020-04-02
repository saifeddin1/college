#include<stdio.h>

void Devinette3tab()
{
	const  int TAILLE = 6;
	int i ,j;
	int tinit[TAILLE], trang[TAILLE], tres[TAILLE];
	
	for(i=0;i<TAILLE;i++)
	{
		printf("Donner l'element N: ", i+1);
		scanf("%i", &tinit[i]);
	
	}
	
	for(i=0;i<TAILLE;i++)
	{
		trang[i] = 0;
	}
	for(i=0;i<TAILLE-1;i++)
	{
		for(j=i+1;j<=TAILLE;j++);
		{
			if(tinit[i] > tinit[j]) 
			{
				trang[i] = trang[i] + 1;
			}else{
				trang[j] = trang[j] + 1;
			}
		}
	}
	for(i=0;i<TAILLE;i++)
	{
		tres[trang[i]] = tinit[i];
	

	}
	for(i=0;i<TAILLE;i++)
	{
		printf("%i \n",tres[i]);
	}
	


}











