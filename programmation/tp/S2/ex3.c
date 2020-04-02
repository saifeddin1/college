#include<stdio.h>

typedef struct rationnel rationnel ;

struct rationnel {
	int nom;
	int denom;
};

rationnel saisie(){
	rationnel q;
	do{
		print("donner le nominateur");
		scanf("%d",&q.nom);
		print("donner le denominateur");
		scanf("%d",&q.denom);
		printf("Q= %d/%d\n",q.nom,q.denom);
	}while(q.denom==0);
	
	};
	
	
int pgcd(int a, int b){
	if (b == 0){
	return a;
	}
	else{
	return pgcd(b, a % b );
};
};

rationnel simplifie(rationnel q){

		q.nom /= pgcd(q.nom, q.denom);
		q.denom /= pgcd(q.nom, q.denom);
		return q;
};

rationnel SommeRationnel(rationnel q1, rationnel q2){
	rationnel somme;
	saisie(q1);
	saisie(q2);
	somme = q1+q2;
	return simplifie(somme);
};

int main(){
	rationnel r1;
	rationnel r2;
	rationnel smr;

	smr = SommeRationnel(r1, r2);
	printf("somme rationnel = %d / %d\n",smr.nom,smr.denom);
}

