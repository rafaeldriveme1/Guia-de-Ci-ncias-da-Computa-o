#include <stdio.h>
#include <stdlib.h>

/*
Tipo  Tamanho   Intervalo
---------------------------------
char     8      -128 a 127
int      16     -32768 a 32767
float    32     3,4E-38 a 3.4E+38
double   64     1,7E-308 a 1,7E+308
void     0      sem valor
*/

int main(int argc, char *argv[]) {

    int numero01 = 15;
    float numero02 = 22.5;
    char caractere = 'w';
    char caractere02 = 48;
	
	printf("%d\n", numero01);
    printf("%.2f\n", numero02);
    printf("%c\n", caractere);
    printf("%c\n", caractere02);
	
	return 0;
}
