#include<stdio.h>
/* 
Martinez Casares Jenifer
Practica 4.1 
Imprime los numeros de 0 a n
*/	 

int main()
{
	int numero, i;
	printf("Escriba un numero: ");
	scanf("%d", &numero);

	for(i = 0; i <= numero; i++)
		printf("%d \n", i);

}

