#include<stdio.h>
/* 
Martinez Casares Jenifer
Practica 4.4
Convierte el primer parametro a hexadecimal
*/	 

int main(int argc, char *argv[])
{

	char str[100];
	printf("%s\n", argv[1]);

	sprintf((char*)str,"%02X",argv[1]);
	printf("%s\n", str);

	printf("%02X\n", argv[1]);	
}

