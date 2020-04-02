#include <stdio.h>

typedef struct
{ 	int jj; //jour: 1..31
	int mm; //mois: 1..12
	int aa; //annee: 1..9999
}date;

typedef enum bool {false, true} bool;

//Prototypes
//...
bool Bissextile(int annee);
bool isDate(date d);

//Fonction Principale
int main()
{ 
  	date d;
  	char fin;
  	printf("Saisie d'une date valide (jj/mm/aaaa):\n");
  	printf("--------------------------------------\n");
    
	//Saisie de d
	
	printf("Jour : "); scanf("%d", &d.jj);
  	printf("Mois : "); scanf("%d", &d.mm);
  	printf("Annee: "); scanf("%d", &d.aa);
	//printf("Date invalide!Reessayer...(taper f/F pour annuler)\n");
	
	
	
	//Résultat
	if(isDate(d))
    	printf("OK! %d/%d/%d est une date valide", d.jj,d.mm,d.aa);
    else
    	printf("Not ok!")
	/*printf("Operation annulee !");
	*/
}

//Fonction Bissextile

bool Bissextile(int annee)
{
	if(annee % 400 == 0) || ((annee % 4 ==0)&&(annee % 100 !=0))
		return true;
	else
		return false;
	
}


//Fonction isDate
bool isDate(date d){
	int tm [] = {31,28,31,30,31,30,31,31,30,31,30,31}
	if(d.aa<1 || d.aa>9999)
		return false;
		else if(d.mm<1 || d.mm>12)
			return false; 
			else {
			if(Bissextile(d.aa))
				tm[1] == 29;
			else 
				return true
		
}
}
				
