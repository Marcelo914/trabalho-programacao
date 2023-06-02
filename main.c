#include "cadastro.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastro(int s[60]){
  char nome[60], psize[100];
  int login, password, rptpassword, intpsize, try;
  float renda;
  try = 3;

  system("clear||cls");

  printf("Bem vindo\n");
  printf("\"nome do banco\"\n\n");


  printf("Escreva o seu nome completo a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha:\n");

}


int main() {
  int v[60];
  cadastro(v);
  return 0;
}
