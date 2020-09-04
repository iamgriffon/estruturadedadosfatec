#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int vet[10], *p;
	vet[3] = 8;
	p = vet;
	printf("v[3]  = %d \n", vet[3]);
	printf("v + 3 = %d \n", vet + 3);
	printf("*(p+3) = %d \n", *(p+3));

	return 0;
}
