/*Practica 14
Jenifer Martinez Casares 
Preprocesador
*/

#include<stdio.h>
#include<stdlib.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[])
{

#if 0
	if(argc<2)
	{
		perror("Se necesita un argumento\n");
		return(1111);
	}
#endif

	int fd; //Declaracion de un descriptor de archivos.
	char *archivo="/dev/random\0";
	int buffer;
	fd=open(archivo,O_RDONLY);
	
	if(fd==-1)
		fprintf(stderr,"No se pudo abrir o crear el archivo");
	printf("Descriptor de archivo: %d\n",fd);

//#if 0
	if(read(fd,&buffer, sizeof(int))!=0)
		printf("%d", buffer);
//#endif

	if(close(fd)==-1)
		fprintf(stderr,"No se pudo cerrar el descriptor de archivo");
}

