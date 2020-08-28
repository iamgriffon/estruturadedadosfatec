#include <stdio.h>
#include <stdlib.h>
//parametro por valor
void soma10(int x){
	x = x + 10;
	printf("Soma10=%i, end=%x \n", x, &x);
	return;
}
//parametro por referencia
void soma10p(int *x){
	*x = *x + 10;
	printf("Soma10p=%i, end=%x \n", *x, x);
	return;
}

int main(int argc, char *argv[]) {
	int numero = 34;
	printf("Numero = %i, end=%x \n", numero, &numero);
	soma10(numero);
	printf("Numero = %i \n", numero);
	
	soma10p(&numero);
	printf("Numero = %i \n", numero);
	
	soma10p(&numero);
	printf("Numero = %i \n", numero);
	
	
	return 0;
}
