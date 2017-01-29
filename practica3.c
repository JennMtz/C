#include<stdio.h>
#include<limits.h>
#include<time.h>
//Martinez Casares Jenifer
int main()
{
	time_t fecha_max;
	fecha_max = (time_t)0; //4294967295U
	printf("Fecha 0: %s", ctime(&fecha_max));

	fecha_max = (time_t)INT_MAX; 
	printf("Fecha INT_MAX: %s", ctime(&fecha_max));

	fecha_max = (time_t)UINT_MAX;
	printf("Fecha UINT_MAX: %s", ctime(&fecha_max));

	fecha_max = (time_t)UINT_MAX+1;
	printf("Fecha UINT_MAX+1: %s", ctime(&fecha_max));

	fecha_max = (time_t)ULONG_MAX-1; 
	printf("Fecha ULONG_MAX-1: %s", ctime(&fecha_max));

	fecha_max = (time_t)ULONG_MAX;
	printf("Fecha ULONG_MAX: %s", ctime(&fecha_max));

}

