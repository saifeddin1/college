#include <stdio.h>
#include<string.h>

typedef enum bool {false, true} bool;

typedef struct
{ char mat[10]; 
  char nom[10]; 
  char bac[10]; 
}candidat;

//Prototypes
//...
//passage par variable de tableau automatiquement

void remplir(candidat l[], int n);
bool existe(candidat l[], int n, char mat[]);
void afficher(candidat l[], int n);
void supprimerDoublon(candidat l1[], int n1,candidat l2[], int *n2);

int main()
{ 
  //programme principal
  int n1=5;
  candidat l1[n1];
  int n2=0;
  candidat l2[n1];
  
  remplir(l1, n1);
  afficher(l1, n1);
  supprimerDoublon(l1, n1, l2, &n2);
  afficher(l2, n2);0
  
  
}
