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
 	//Constante cha�ne de caract�res contenant tous les chiffres romains
	const char ch[] ="MDCLXVI";
	int i=0; //Compteur de parcours
	
	//Variable interm�diaire sert � v�rifier si ch est un nombre romain
	bool rom = true;
	
	//V�rifier si le caract�re n�i de nbrom appartient � la cha�ne ch
	//... 
}

//retourne l��quivalent d�cimal du catact�re romain car, sinon -1
int Equivalent(char car)
{ 
  //...
}

int RomainToDecimal(char nbrom[])
{ 
  	int nbdec = -1; //l'�quivalent d�cimal de nbrom
  
  	//V�rifier d'abord si nbrom est un nombre romain valide 
  	
  	//D�clarer un tableau teq contenant l'�quivalent d�cimal de chaque chiffre de nbrom
	
	//Remplir teq avec les diff�rents �quivalents d�cimaux 
    
	//Calculer l'�quivalent d�cimal de nbrom

  	return nbdec;
}

int main()
{ 
    char nbrom[20]; //Nombre romain saisi au clavier
  
  	//Saisie d'un nombre romain valide

  	//Conversion du nombre romain en nombre d�cimal + Affichage
}
