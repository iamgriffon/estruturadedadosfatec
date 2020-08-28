#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int *p[4];
	int vA[]={2,5,7,8,9};
	int vB[]={9,3,2};
	int vC[]={7,8,9,1};
	int vD[]={3,5,7};
	p[0] = vA;
	p[1] = vB;
	p[2] = vC;
	p[3] = vD;
	
	for(x=0;x<4; x++){
		printf("End=%x valor=%i \n", p[x], *p[x]);
	}
	
	
	
	return 0;
}
