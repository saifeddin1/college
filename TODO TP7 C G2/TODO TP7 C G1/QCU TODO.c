//Devoir multi-questions � choix unique
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX = 50; //Nombre maximum de questions

typedef enum boolean {false, true} boolean;

typedef struct 
{   char question[100]; 	//Texte d�une question
  	boolean bonne; 			//la bonne r�ponse � la question (Faux ou Vrai)
  	int reponse; 			//R�ponse du candidat � la question
	  		   				//0 si Faux et 1 si Vrai //(initialis� � -1)
}QCU;

//Prototypes
void Afficher_Question(QCU TQ[], int k);
void Reponses (QCU TQ[], int k);
float Total_points (QCU TQ[], int k);
//void Total_points (QCU TQ [], int k, float* note); //version proc�dure

void Afficher_Question(QCU TQ [], int k)
{	int i;
	for(i=0; i<k; i++)
	{	
		//exemple d'affichage : 1- Texte de la question
	}	
}
void Reponses (QCU TQ [], int k)
{	
	int i;
	for (i=0; i<k;i++)
	{ 	
		//Donner le numero num de la question (1..k) 

		//Afficher le texte de la question choisie
		
		//Donner votre r�ponse rep (0 pour Faux et 1 pour Vrai)
		
		//Voulez-vous valider votre r�ponse (O/N) :

		//Si Oui, confirmer la r�ponse � la question num
    }
}

float Total_points (QCU TQ[], int k)
{ 	int i;
	float tot=0;
	for(i=0; i<k; i++)
	{
       //...
	}
	//return ...
}

int main()
{
	int nb = 6; //nombre des questions (c'est juste un exemple)
	QCU TQ[] = { {"VBA : Visual Basic For Application ?",true},
		  	   	 {"Hiroshima est la capitale du Japon ?",false},
		  		 {"2CN : Certificat en Competence Numerique ?",true},
		  		 {"Le reseau des ISETs est compose de 25 etablissements ?",true},
		  		 {"4C : Centre de Carriere et de Certification des Connaissances ?",false},
		  		 {"UVT : Universite Visuelle de Tunis ?",false}};
    
	//Saisie du nombre de questions n : [2..nb]
	
	//Initialisation des r�ponses � -1
		
	//Affichage des n questions 
		
	//Saisie des r�ponses
		
	//Calcul du total des points
	
	//Affichage de la note finale (/20)
}
