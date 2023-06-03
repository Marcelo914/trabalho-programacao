#include "cadastro.h"
#include <complex.h>
#include "start.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void cadastro(int s[60]){
  char nome[60], strpassword[60];
  int login, password, confpassword, sizepassw, try, choose, n, m;
  double renda, saldo, menu_saldo;
  int extrato[n][m];
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
void menu_opcoes(int s[60]){
  int choose;
  printf("Bem vindo ao menu de opções!\n\n");
  printf("veja as opções a seguir: \n");
  printf("Saldo da conta (1)\n");
  printf("Deposito (2)\n");
  printf("Sacar (3)\n");
  printf("trasferência(4)\n");
  printf("configurações(5)\n");

  scanf("%d", &choose);
   switch (choose) {
    case 1:
  }
}



int main() {
  int v[60];
  cadastro(v);
  menu_opcoes(v);
  return 0;
}
