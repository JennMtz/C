#define PASSWORD ((const char *)"J3nn") 
#include<stdio.h>
#include<string.h>
/* 
Martinez Casares Jenifer
Practica 4.5
Convierte el primer parametro a hexadecimal
*/	 

//static const char PASSWORD[] = "PASSWORD";

int main(int argc, char *argv[])
{

	char pwd[100];
	printf("Password: ");
	scanf("%s", &pwd);
	
	if(strcmp(pwd, PASSWORD) == 0){
		printf("OK\n");	
	}else{
		printf("GTFOH!\n");
	}
}

