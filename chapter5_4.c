/* errones declaracion de la funcion swap.
Solo se intercambian copias de los argunmentos a e y */

#include<stdio.h>

void swap(int x, int y){
	int temp;
	temp=y;
	y=x;
	x=temp;
}

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 2;

	printf("x: %d y: %d\n", x, y);
	swap(x,y);
	printf("x: %d y: %d\n", x, y);

	return 0;
}