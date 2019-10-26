#include <ctype.h>

#define BUFSIZE 100;

char buf[BUFSIZE]; /*buffer para ungetch*/
int bufo=0; /*siguiente posicion libre en buf*/

int getch(void){
	return(bufp>0) ? buf[--bufp]:getchar();
}

void ungetch(int c){
	if(bufp>BUFSIZE)
		printf("ungetch: demasiados caracteres\n");
	else
		buf[bufp++] = c;
}

int getch(void);
void ungetch(int);

