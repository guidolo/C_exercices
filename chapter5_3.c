/* incremento incorrecto de el valor de un puntero*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 2;
	int *ip; /*ip es un apuntador a enteros*/

	ip = &x; /*ip ahora apunta a x*/

	*ip = *ip + 1;

	ip++;  /* esto incrementa en un el puntero, por  lo que ahora apunto a no se donde*/

	printf("%d\n", *ip);
	return 0;
}