/* Practica #5
Martinez Casares Jenifer 
"Factorial "
*/
#include <stdio.h>
int main(){
int fac;
printf ("Dame el numero\n ");
scanf("%d", &fac);
printf ("El resultado de %d es %d\n", fac, factorial(fac));

}

int factorial(int fac){
int m=1,i;
for (i=fac;i>1;i--){
	m=m*i;
}
return m;

}
