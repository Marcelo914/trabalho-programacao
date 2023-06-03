#include "cadastro.h"
#include <complex.h>
#include "start.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastro(int s[60]){
  char nome[60], strpassword[60];
  int login, password, confpassword, sizepassw, try, choose;
  double renda, saldo;
  try = 3;
   
  system("clear||cls");
  
  printf("Bem vindo\n");
  printf("\"nome do banco\"\n\n");



  printf("Escreva o seu nome a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha:\n");
  scanf("%d", &password);

  sprintf(strpassword, "%d", password);
  sizepassw = strlen(strpassword);

  while (sizepassw < 8) {
    printf("A senha deve ter pelo menos 8 caracteres\n");
    printf("Digite-a novamente: ");
    scanf("%d", &password);
    sprintf(strpassword, "%d", password);
    sizepassw = strlen(strpassword);
  }
  printf("Confirme sua senha\n");
  scanf("%d", &confpassword);
  if (confpassword != password) {
    while (try > 0 && confpassword != password) {
      printf("senha errada, tente novamente.\n");
      printf("%d tentativas restantes\n", try);
      scanf("%d", &confpassword);
      try --;
    }
  }
  if(confpassword == password) {
    printf("cadastro pronto\n");
  }
}



int main() {
  int v[60];
  cadastro(v);
  return 0;
}
