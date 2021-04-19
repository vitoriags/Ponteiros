#include <stdio.h>
#include <stdlib.h>

struct VOLUNTARIO{
  float peso;
  int idade;
  float altura;
  float imc;
};

void calcularImc(struct VOLUNTARIO *voluntario) {
  voluntario->imc = voluntario->peso / (voluntario->altura * voluntario->altura);
}

void MediaImc(struct VOLUNTARIO *lista, int tamanho){
  float soma = 0;
  for(int i = 0; i < tamanho; i++){
    soma = soma + lista[i].imc;
  }
  printf("%.2f\n", soma/tamanho);
}

int main(void) {

  int tamanho = 3;
  struct VOLUNTARIO *listaVoluntarios = (struct VOLUNTARIO*) malloc (tamanho * (sizeof(struct VOLUNTARIO)));

  for (int i = 0; i < tamanho; i++){
    scanf("%f", &listaVoluntarios[i].peso);
    scanf("%d", &listaVoluntarios[i].idade);
    scanf("%f", &listaVoluntarios[i].altura);

    calcularImc(&listaVoluntarios[i]);
    printf("%.1f\n", listaVoluntarios[i].imc);
  }

  MediaImc(listaVoluntarios, tamanho);

  return 0;
}