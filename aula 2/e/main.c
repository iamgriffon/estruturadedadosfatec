#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int v[] = {3,2,5,7,10,5};
	int *p;
	p = v; // p = &v[0];
	printf("Pos=%x, Valor=%i \n", p, *p);
	printf("Pos=%x, Valor=%i \n", (p+1), *(p+1));
	
	printf("Pos=%x, Valor=%i \n", (p+3), *(p+3));
	//usando a mesma notação de vetor
	printf("Pos=%x, Valor=%i \n", &p[4], p[4]);
		
	return 0;
}
