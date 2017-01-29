#include<stdio.h>
/* 
Martinez Casares Jenifer
Practica 4.2
Imprime los primeros n numeros nones
*/	 

int main()
{
	int numero, i;
	printf("Escriba un numero: ");
	scanf("%d", &numero);

	for(i = 0; i <= numero; i++)
		if(i%2 != 0)
			printf("%d \n", i);

}

