#include <stdio.h>
#include<string.h>
void Palindrome()
{	
	enum boolean {false, true};
	char ch[30];
			// Chaîne de caractères à saisir au clavier
	//Autres variables
	int i,j;
	enum boolean ok;
	
    //...
    
	//Saisie d'une chaîne de caractères
	printf("Donner une chaine de caracteres :");
	gets(ch);
    //...
	//Traitement
	ok = true;
	for(i=0, j=strlen(ch)-1;i<j && ok == true;i++,j--){
		if(ch[i] != ch[j]){
			ok = false;
		}
	}
	//printf
	//strrev(ch);
	
	
			//printf("\nLa chaine nest pas palindrome\n");
			//printf("\nLa chaine %s est palindrome\n", ch);
    //...
	
	//Résultat ...
}  

