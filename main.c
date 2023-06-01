#include "cadastro.h"
#include "password.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
void cadastro(int s[60]){
  char nome[60];
  int login, password, rptpassword;
  float renda;

  system("clear||cls");
  printf("Bem vindo\n");
  printf("\"nome do banco\"\n\n");
  printf("Escreva o seu nome completo a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha:\n");
  password = senha(password);

}
int main() {
  int v[60];
  cadastro(v);
  return 0;
}
