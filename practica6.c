//Practica 6
//"Hackea" este programa
#include<stdio.h>
#include<limits.h>
int main()
{
	int var1,var2,mayor;
	printf("Ingresa dos enteros sin signo(maximo %u):",UINT_MAX);
	scanf("%d",&var1);
	scanf("%d",&var2);
	//(var1 > var2) ? var1 : var2;
	printf("El mayor es %ld\n", (var1 > var2) ? var1 : var2);

