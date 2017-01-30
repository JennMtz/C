#define NUM_ALUMNOS ((const int)10) 
/*
Ejemplo Structs y campos de bits.
*/
#include<stdio.h>
#include<string.h>
struct becario{
	char nombre[25];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1;
}becarios[NUM_ALUMNOS];

int main()
{
	strcpy(becarios[0].nombre,"Fernando ");
	becarios[0].edad = 22;
	becarios[0].promedio = 7;
	strcpy(becarios[0].procedencia,"FI");
	becarios[0].generacion = 11;
	becarios[0].proyecto=0;

	strcpy(becarios[1].nombre,"Jenifer");
	becarios[1].edad = 23;
	becarios[1].promedio = 8.58;
	strcpy(becarios[1].procedencia,"FCA");
	becarios[1].generacion = 11;
	becarios[1].proyecto=1;

	strcpy(becarios[2].nombre,"Diana");
	becarios[2].edad = 27;
	becarios[2].promedio = 9;
	strcpy(becarios[2].procedencia,"FC");
	becarios[2].generacion = 11;
	becarios[2].proyecto=0;

	strcpy(becarios[3].nombre,"Armando");
	becarios[3].edad = 23;
	becarios[3].promedio = 8.51;
	strcpy(becarios[3].procedencia,"FI");
	becarios[3].generacion = 11;
	becarios[3].proyecto=1;

	strcpy(becarios[4].nombre,"Fernando Tachi");
	becarios[4].edad = 23;
	becarios[4].promedio = 8;
	strcpy(becarios[4].procedencia,"FI");
	becarios[4].generacion = 11;
	becarios[4].proyecto=0;

	strcpy(becarios[5].nombre,"Saine");
	becarios[5].edad = 23;
	becarios[5].promedio = 8.98;
	strcpy(becarios[5].procedencia,"FI");
	becarios[5].generacion = 11;
	becarios[5].proyecto=1;

	strcpy(becarios[6].nombre,"Fernando Parra");
	becarios[6].edad = 23;
	becarios[6].promedio = 9.5;
	strcpy(becarios[6].procedencia,"FI");
	becarios[6].generacion = 11;
	becarios[6].proyecto=1;

	strcpy(becarios[7].nombre,"Oscar Anota");
	becarios[7].edad = 23;
	becarios[7].promedio = 10;
	strcpy(becarios[7].procedencia,"ESCOM");
	becarios[7].generacion = 11;
	becarios[7].proyecto=1;

	strcpy(becarios[8].nombre,"Gonzalo");
	becarios[8].edad = 25;
	becarios[8].promedio = 9;
	strcpy(becarios[8].procedencia,"FC");
	becarios[8].generacion = 11;
	becarios[8].proyecto=1;

	strcpy(becarios[9].nombre,"Yeudiel");
	becarios[9].edad = 27;
	becarios[9].promedio = 9;
	strcpy(becarios[9].procedencia,"FCA");
	becarios[9].generacion = 11;
	becarios[9].proyecto=1;


	int i;

	for(i = 0; i < NUM_ALUMNOS; i++){
		printf("%d. Nombre: %s\nEdad: %d\nPromedio: %f\nProcedencia: %s\nGeneracion: %d\nProyecto: %s\n\n", i+1, becarios[i].nombre, becarios[i].edad, becarios[i].promedio, becarios[i].procedencia, becarios[i].generacion, (becarios[i].proyecto&1)?"Si":"No");
	}	
	
}
