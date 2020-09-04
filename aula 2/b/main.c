#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float teste = 20;
	float *ptr1;
	float **ptr2;
	
	ptr2 = &ptr1;
	ptr1 = &teste;
	printf("End teste =%x \n", &teste);
	printf("End ptr1  =%x \n", &ptr1);
	printf("End ptr2 =%x \n",  &ptr2);
	
	printf("Valor *ptr1 =%f \n", *ptr1);
	printf("Valor **ptr2 =%f \n", **ptr2);
	
	**ptr2 = 30.23;
	
	printf("Valor *ptr1 =%f \n", *ptr1);
	printf("Valor **ptr2 =%f \n", **ptr2);
	printf("Valor teste =%f \n", teste);
	
	
	
	return 0;

/* OUTPUT: 

End ptr2 =3623f1d8       
Valor *ptr1 =20.000000   
Valor **ptr2 =20.000000  
Valor *ptr1 =30.230000   
Valor **ptr2 =30.230000  
Valor teste =30.230000    */

}
