#include<stdio.h>
#include<math.h>
typedef struct point point;

struct point
{
float x ;
float y ;
} ;

point saisie(){
	point p;
	printf("donner l'abscisse x: ");
	scanf("%f",&p.x);
	printf("donner l'ordonnée y: ");
	scanf("%f",&p.y);
	return p;
	};
	
point deplace( point p, float dx, float dy){
	point t;
	scanf("%f",&dx);
	scanf("%f",&dy);	
	t.x = p.x + dx;
	t.y = p.y + dy;
	return t;
};

void affiche(point p){
	printf("Le point p(%f, %f)",p.x, p.y);
};

float distance(point p1, point p2){
	float d;
	d = sqrt(pow(p2.y - p1.y,2) +pow(p2.x - p1.x,2));
	return d;
}

point milieu(point p1, point p2){
	point m;
	m.x = ((p1.x+p2.x)/2);
	m.y = ((p1.y+p2.y)/2);
	return m;
};

int main() {
	point A,B;
	float dx, dy;
	A = saisie(A);
	B = deplace(A, dx,dy);
	float dist = distance(A, B); printf("%f\n",dist);
	point pm = milieu(A, B); printf("milieu(%.2f, %.2f)",pm.x,pm.y);
	
}


	
