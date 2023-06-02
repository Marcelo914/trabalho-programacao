#include "cadastro.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastro(int s[60]){
  char nome[60], strpassword[60];
  int login, password, rptpassword, sizepassw, try;
  double renda;
  try = 3;
  
  system("clear||cls");

  printf("Bem vindo\n");
  printf("\"nome do banco\"\n\n");


  printf("Escreva o seu nome completo a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha:\n");
  scanf("%d", &password);

  sprintf(strpassword, "%d", password);
  sizepassw = strlen(strpassword);

  while (sizepassw < 8 && try > 0) {
    printf("A senha deve ter pelo menos 8 caracteres\n");
    printf("Digite-a novamente: ");
    scanf("%d", &password);
    sprintf(strpassword, "%d", password);
    sizepassw = strlen(strpassword);
    try --;
  }
}



int main() {
  int v[60];
  cadastro(v);
  return 0;
}
