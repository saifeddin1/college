//Devoir multi-questions à choix unique
#include <stdio.h>
#include <string.h>
#include <ctype.h>

const int MAX = 50; //Nombre maximum de questions

typedef enum boolean {false, true} boolean;

typedef struct 
{   char question[100]; 	//Texte d’une question
  	boolean bonne; 			//la bonne réponse à la question (Faux ou Vrai)
  	int reponse; 			//Réponse du candidat à la question
	  		   				//0 si Faux et 1 si Vrai //(initialisé à -1)
}QCU;


//Prototypes
void Afficher_Question(QCU TQ[], int k);
void Reponses (QCU TQ[], int k);
float Total_points (QCU TQ[], int k);
//void Total_points (QCU TQ [], int k, float* note); //version procédure

void Afficher_Question(QCU TQ [], int k)
{	int i;
	for(i=0; i<k; i++)
	{	
		printf("%d - %s", i+1, TQ[i].question);
		//exemple d'affichage : 1- Texte de la question
	}	
}
void Reponses (QCU TQ [], int k)
{	
	char valid;
	int rep;
	int num=0;
	int i;
	for (i=0; i<k;i++)
	{ 	
		//Donner le numero num de la question (1..k) 
		do{
		printf("donner la numero de question(1..%d)",k);
		scanf("%d", &num);
		}while(num < 1 || num >k || TQ[num - 1].reponse != -1);

		//Afficher le texte de la question choisie
		printf("%s",TQ[num-1].question);
		
		//Donner votre réponse rep (0 pour Faux et 1 pour Vrai)
		do{
			printf("Donner votre reponse");
			scanf("%d", &rep);
		}while(rep !=1 && rep !=0); 
		
		//Voulez-vous valider votre réponse (O/N) :
		do{
		printf("Voulez-vous valider votre réponse (O/N) :");
		scanf("%c", &valid);
		}while(valid != 'O' && valid != 'N');
		//Si Oui, confirmer la réponse à la question num
    	if(toupper(valid) == 'O'){
    		TQ[num-1].reponse = rep;
		}
	}
}

float Total_points (QCU TQ[], int k)
{ 	int i;
	float tot=0;
	for(i=0; i<k; i++)
	{
       //...
       if(TQ[i].bonne == true && TQ[i].reponse ==1 || TQ[i].bonne == false && TQ[i].reponse ==0)
       		tot += 2;
       	else if(TQ[i].bonne == true && TQ[i].reponse ==0 || TQ[i].bonne == false && TQ[i].reponse ==1)
       		tot-=1;
	}
	return tot * 20/(2*k) ;
}

int main()
{
	float total;
	int i;
	int n=0;
	int nb = 6; //nombre des questions (c'est juste un exemple)
	QCU TQ[] = { {"VBA : Visual Basic For Application ?",true},
		  	   	 {"Hiroshima est la capitale du Japon ?",false},
		  		 {"2CN : Certificat en Competence Numerique ?",true},
		  		 {"Le reseau des ISETs est compose de 25 etablissements ?",true},
		  		 {"4C : Centre de Carriere et de Certification des Connaissances ?",false},
		  		 {"UVT : Universite Visuelle de Tunis ?",false}};
    
	//Saisie du nombre de questions n : [2..nb]
	do{
		printf("\n donner le nbre des questions(2..%d):", nb);
		scanf("%d", &n);
	}while((n<2)||(n>nb));
	//Initialisation des réponses à -1
	for(i=0;i<n;i++){
		TQ[i].reponse = -1 ;
	}
	//Affichage des n questions 
	Afficher_Question(TQ, n);
	//Saisie des réponses
	Reponses(TQ, n);
	//Calcul du total des points
	total = Total_points(TQ, n);
	//Affichage de la note finale (/20)
	printf("La note finale %f/20", total);
}
