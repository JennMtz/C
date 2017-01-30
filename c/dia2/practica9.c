//practica 9
#include<stdio.h>

int main(int argc, char *argv[])
{
	if(argc<2)
	{
		fprintf(stderr,"Se necesita un argumento!");
		exit(1349);
	}	
//	printf("%d\n",atoi(argv[1]));
	printf("%s\n", argv[argc-1]);
}
//int atoi(char *num)
//{
//	return strtol(num,NULL,10);
//}


