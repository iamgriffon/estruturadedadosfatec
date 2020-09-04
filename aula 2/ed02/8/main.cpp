#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void troca(float *a, float *b){
	float aux;
	aux = *a;
	*a = *b;
	*b = aux;	
}

int main(int argc, char** argv) {
	float x=6, y=9;
	
	printf("x=%f, y=%f \n", x, y);
	troca(&x, &y);
	printf("x=%f, y=%f \n", x, y);
	return 0;
}


