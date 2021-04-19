#include <stdio.h>
#include <stdlib.h>

void SalarioLiquido (float *bruto, int tamanho){
  float liquido = 0;
  for(int i = 0; i < tamanho; i++){
    bruto[i] = bruto[i] - (bruto[i] * 0.08);
  }
}

int main (void) {

  int tamanho = 3;
  float *salariobruto = (float*) malloc (tamanho * sizeof(float));

  for(int i = 0; i < tamanho; i++){
    scanf("%f", &salariobruto[i]);
  }

  SalarioLiquido(salariobruto, tamanho);
  printf("\n");

  for(int j = 0; j < tamanho; j++){
    printf("%.2f\n", salariobruto[j]);
  }

free(salariobruto);

  return 0;
}