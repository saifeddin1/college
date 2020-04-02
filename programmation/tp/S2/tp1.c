#include <stdio.h>
#include <stdlib.h>
main()
{
//int a = 10;
//int *p;
//p = &a;
//printf("a=%i,p=%i,*p=%i,&a=%i ",a,p,*p,&a) ;

///////////////////////////////////////////

//int a=10;
//double b=11.57;
//double *p = &b;
//int *q = &a;
//double *r = p; 
//
//printf("a=%i,b=%f,*p=%f,p=%i,&a=%i,&b=%i,q=%i,*q=%i,r=%i,*r=%f ",a,b,*p,p,&a,&b,q,*q,r,*r) ;

/////////////////////////////////////////

//int a = 10;
//int *p;
////printf("*p=%i",*p) ;
//p = &a;
//printf("*p=%i",*p) ;
////p = NULL;
////printf("*p=%i",*p); 

////////////////////////////////////////// 

//int a = 10;
//int *p;
//p = &a;
//printf("*p=%i",*p) ; 

/////////////////////////////////////////

//int a = 10;
//int *p;
//p = &a;
////p = NULL;
//printf("*p=%i",*p); 

//int a = 10;
// int *pa = &a;
// int **pp = &pa;
// printf("a = %d, pa=%d, pp=%d, *pa=%d,*pp=%d, **pp=%d\n",a,pa,pp,*pa,*pp,**pp);
// return 0; 


// int *p = malloc(sizeof(int));
// *p = 10;
// printf("%d\n", *p);
//free(p);
// return 0;

//char *c = malloc(sizeof(char));
//
//printf("TAPER UNE LETTRE: ");
//scanf("%c",c); 
//printf("character = %c",*c);

int swap(int *a, int *b){
	int y;

	y = *b;
	*b = *a; 
	*a = y;
	return 1;
}


int *a = malloc(sizeof(int));
int *b = malloc(sizeof(int));
printf("a =");
scanf("%i",a);
printf("b = ");
scanf("%i",b);

swap(a, b);

printf("*a = %i *b= %i  \n", *a, *b);


























} 
