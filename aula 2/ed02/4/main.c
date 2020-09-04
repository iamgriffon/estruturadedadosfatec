#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x, *p;
	x = 100;
	p = &x; // p = x;
	printf("Valor de p: %d.\n", *p);
	
	char *a, *b;
	a = "abacate";
	b = "uva";
	if(a < b)
		printf ("%s vem antes de %s no dicionário", a, b);
	else
		printf ("%s vem depois de %s no dicionário", a, b);
	
	return 0;
}
/*
void troca(int *i, int *j) {
	int *temp;
	temp = *i;
	*i = *j;
	j = *temp;
}
*/
