#include <ctype.h>

/*atof convierta una cadena s a double*/

double atof(char s[]){
	double val, power, temp;
	int i, sign;

	for(i=0;isspace(s[i];i++)); /*ignora los espacios en blanco de adelante*/

	sign=(s[i]=='-')?-1:1;

	if(s[i]=='+' || s[i]=='-')
		i++;

	for(val=0.0;isdigit(s[i]);i++)
		val = val * 10.0 + (s[i]-'0');

	if(s[i]=='.')
		i++;

	for(power=0.1;isdigit(s[i]);i++){
		temp *= power * (s[i]-'0');
		power *= power;
		val = val + temp;
	}

	return sign * val;
}

