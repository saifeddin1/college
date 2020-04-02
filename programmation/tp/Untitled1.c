#include<stdio.h>

int main () 
{
	//THIS CODE IS FOR EDUCATIONAL PURPOSES ONLY ! I'M NOT RESPONSIBLE FOR ANY MALWARES THAT MIGHT AFFECT YOUR MACHINE !
	
	int i = 0;
	printf("donner moi votre age:");
	scanf("%d", &i);
	//printf("i= %d\n", i);
	long j = 0; 
	printf("combien avez vous dans votre compte bancaire:");
	scanf("%ld", &j);
	//printf("j= %ld\n", j);
	fflush(stdin);
	char c; 
	printf("donner le premier carctère de votre nom:");
	getchar();//scanf()
	//scanf("%c", &c);
	//printf("c= %d\n", c);//putchar
	float x = 0; 
	printf("donner votre moyenne en bac:");
	scanf("%f", &x);
	//printf("x= %.2f\n", x);
	/*double y = 0;
	printf("donner un double:");
	scanf("%lf", &y);
	printf("y= %lf\n", y);*/
	
	enum depart 
	{
			info, meca, elec,gest
	};	
	enum depart def;
	printf("donner un department: \n0 : info\n1 : meca \n2 : elec \n3 : gest\n");
	scanf("%d", &def);
	//switch rplaces if statement
	switch(def)
	{
	
		case 0:printf("Etudiant %c , %d and, a %ld dans son compte bancaire , et a ressit par %f en bac et maintenat etudie a ISET nabel dapartment info", c,i,j,x,def) ;break;
		case 1:printf("Etudiant %c , %d and, a %ld dans son compte bancaire , et a ressit par %f en bac et maintenat etudie a ISET nabel dapartment info", c,i,j,x,def) ;break;
		case 2:printf("Etudiant %c , %d and, a %ld dans son compte bancaire , et a ressit par %f en bac et maintenat etudie a ISET nabel deaprtment meca", c,i,j,x,def) ;break;
		default:printf("Etudiant %c , %d and, a %ld dans son compte bancaire , et a ressit par %f en bac et maintenat etudie a ISET nabel depatment gest", c,i,j,x,def);
	}
	
	
	/*chaine
	
	
	
	char ch[5] = "ISETN";
	printf("ch = %s\n", ch);//gets() vous permet de sasir des chaine conteant des espaces 
	scanf("%s", ch);//puts()
	printf("ch = %s", ch);
	*/
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
