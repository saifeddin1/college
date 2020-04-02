#include <stdio.h>
#include <string.h>
#include <ctype.h>

typedef enum bool {false, true} bool;

//Prototypes
bool Romain (char nbrom[]);
int Equivalent(char car);
int RomainToDecimal(char nbrom[]);

bool Romain (char nbrom[])
{
 	//Constante chaîne de caractères contenant tous les chiffres romains
	const char ch[] ="MDCLXVI";
	int i=0; //Compteur de parcours
	
	//Variable intermédiaire sert à vérifier si ch est un nombre romain
	bool rom = true;
	
	//Vérifier si le caractère n°i de nbrom appartient à la chaîne ch
	//... 
}

//retourne l’équivalent décimal du catactère romain car, sinon -1
int Equivalent(char car)
{ 
  //...
}

int RomainToDecimal(char nbrom[])
{ 
  	int nbdec = -1; //l'équivalent décimal de nbrom
  
  	//Vérifier d'abord si nbrom est un nombre romain valide 
  	
  	//Déclarer un tableau teq contenant l'équivalent décimal de chaque chiffre de nbrom
	
	//Remplir teq avec les différents équivalents décimaux 
    
	//Calculer l'équivalent décimal de nbrom

  	return nbdec;
}

int main()
{ 
    char nbrom[20]; //Nombre romain saisi au clavier
  
  	//Saisie d'un nombre romain valide

  	//Conversion du nombre romain en nombre décimal + Affichage
}
