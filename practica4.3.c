#include<stdio.h>
/* 
Martinez Casares Jenifer
Practica 4.3
Imprime los primeros n numeros primos
*/	 

int main()
{
	int numero, i, j, es_primo;
	printf("Escriba un numero: ");
	scanf("%d", &numero);

	for(i = 2; i <= numero; i++){
		es_primo = 1;
		for(j = 2; j < i; j++){
			if(i%j == 0){
				es_primo = 0;
				break;
			}
		}
		if(es_primo == 1){
			printf("El numero %d es primo \n", i);
		}
	}
}

