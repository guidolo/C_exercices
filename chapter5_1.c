#include<stdio.h>

int main(int argc, char const *argv[])
{
	int x = 1;
	int y = 2;
	int *ip; /*ip es un apuntador a enteros*/

	ip = &x; /*ip ahora apunta a x*/

	printf("%d\n", *ip);
	return 0;
}