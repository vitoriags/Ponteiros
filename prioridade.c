#include <stdio.h>
#include <string.h>

struct PACIENTE {
  char nome[30];
  char profissao[30];
  int idade;
  char prioridade[30];
};

void prioridade(struct PACIENTE *paciente){

  if (paciente->idade > 60)
    strcpy(paciente->prioridade, "alta");
  
  else if (strcmp(paciente->profissao, "enfermeiro") == 0)
    strcpy(paciente->prioridade, "alta");
  
  else if (strcmp(paciente->profissao, "médico") == 0)
    strcpy(paciente->prioridade, "alta");

  else if (strcmp(paciente->profissao, "motorista") == 0)
    strcpy(paciente->prioridade, "alta");
  
  else if (strcmp(paciente->profissao, "motoboy") == 0)
    strcpy(paciente->prioridade, "alta");
  
  else if (strcmp(paciente->profissao, "atendente") == 0)
    strcpy(paciente->prioridade, "alta");
  
  else
    strcpy(paciente->prioridade, "desconhecida");
}

int main(void) {

  struct PACIENTE paciente;

  scanf("%s", paciente.nome);
  scanf("%s", paciente.profissao);
  scanf("%d", &paciente.idade);

  prioridade(&paciente);
  printf("%s", paciente.prioridade);

  return 0;
}