#include<stdio.h>
#define MAXLINE 1000

int getline2(char line[], int max);

int main(int argc, char const *argv[])
{

	char line[MAXLINE];
	int a;
	printf("start\n");
	a = getline2(line, MAXLINE);
	printf("%d\n", a);
	printf("%s\n", line);
	return 0;
}

/* lee una linea y la pone en s*/
int getline2(char s[], int lim){
	int c, i;
	i=0;
	while(--lim>0 && (c=getchar())!=EOF && c != '\n'){
		s[i++] = c;		
	}
	if(c=='\n')
		s[i++]=c;
	s[i]='\0';
	return i;
}

