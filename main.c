#include "cadastro.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int loginsuc;

void cadastro(int s[60]){
  char nome[60], strpassword[60];
  int login, password, confpassword, sizepassw, try, choose, n, m;
  long int numgerente;
  double renda, saldo, menu_saldo;
  int extrato[n][m];
  try = 3;
  numgerente =  61998007307;


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
    if (try <= 0) {
      printf("entre em contato com o gerente %ld\n", numgerente);
    }
  }
  if(confpassword == password) {
    printf("cadastro pronto\n");
    loginsuc = 1;
    
  }
}
void menu_opcoes(int s[60]){
  int choices;

    printf("\n\n -----------------------");
    printf("Escolha uma opção:\n");
    printf("\n");
    printf("1 - Saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Sacar\n");
    printf("4 - Transferencia\n");
    printf("5 - Outros\n");
    printf("\n");
    printf("Inserir outra opção:\n");
    scanf("%d", &choices);
  
  switch (choices) {
    case 1 :
    printf ("1 - Saldo.\n");
    break;
    
    case 2 :
    printf ("2 - Depósito.\n");
    break;
    
    case 3 :
    printf ("3 - Sacar.\n");
    break;
    
    case 4 :
    printf ("4 - Transferência.\n");
    break;
    
    case 5 :
    printf ("5 - Outros.\n");
    break;
    }
  }
int main() {
  int v[60];
  cadastro(v);
  if (loginsuc == 1) {
    menu_opcoes(v);
  }
  return 0;
}
