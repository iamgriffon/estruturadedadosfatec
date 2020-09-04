#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
 float *v;
 int qtd, x;

printf("Informe a quantidade desejada:");
scanf("%i", &qtd);

v = (float*)malloc(qtd*sizeof(float));
float media = 0;
print("O valor do end. do vetor dinamico e: %x", &v);

for(x=0; x<qtd; x++){
  printf("Informe um número! ");
  scanf("%f", &v[x]);
  media += v[x];
  };

media = media/qtd;
printf("A media do vetor dinamico = %f", media);
free(v);
return 0;
};
