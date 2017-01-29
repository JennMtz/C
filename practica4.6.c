/* 
Martinez Casares Jenifer
Practica 4.6
Calcula el area de algunas figuras geometricas
*/	

#include<stdio.h>
#include<string.h>

double cuadrado(double l){
	return l*l;
}
double rectangulo(double b, double h){
	return b*h;
}
double triangulo(double b, double h){
	return b*h/2;
}

int main(int argc, char *argv[])
{
	int opcion;
	double b, h, l, area;

	do{
		printf("Calcula el area de un: \n\n");
		printf("1. Triangulo.\n2. Cuadrado.\n3. Rectangulo.\n0. Salir\n\n");
		scanf("%d", &opcion);

		area = 0;
		switch(opcion){			
			case 1:
				printf("Cual es la longitud de la base?: ");
				scanf("%lf", &b);
				printf("Cual es la altura?: ");
				scanf("%lf", &h);
				area = triangulo(b, h);
				break;
			case 2:
				printf("Cual es la longitud de uno de sus lados?: ");
				scanf("%lf", &l);
				area = cuadrado(l);
				break;
			case 3:
				printf("Cual es la longitud de la base?: ");
				scanf("%lf", &b);
				printf("Cual es la altura?: ");
				scanf("%lf", &h);
				area = rectangulo(b, h);
				break;						
		}
		if(area > 0){
			printf("El area es: %f \n\n", area);
		}
	}while(opcion != 0);

}
