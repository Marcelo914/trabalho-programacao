#include "cadastro.h"
#include "deposito.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int loginsuc, v[60], quit;
double saldo, deposit, saque;
long int password;

void cadastro(int s[60]){
  char nome[60], strpassword[60];
  int login, confpassword, sizepassw, try, choose, n, m;
  long int numgerente;
  double renda, menu_saldo;
  int extrato[n][m];
  try = 3;
  numgerente =  61998007307;


  system("clear||cls");
  
  printf("Bem vindo\n");
  printf("Wu Dingchang\n");



  printf("Escreva o seu nome a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha:\n");
  scanf("%ld", &password);

  sprintf(strpassword, "%ld", password);
  sizepassw = strlen(strpassword);

  while (sizepassw < 8) {
    printf("A senha deve ter pelo menos 8 caracteres\n");
    printf("Digite-a novamente: ");
    scanf("%ld", &password);
    sprintf(strpassword, "%ld", password);
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
  double add;

    printf("\n\n -----------------------");
    printf("Escolha uma opção:\n");
    printf("\n");
    printf("1 - Saldo\n");
    printf("2 - Deposito\n");
    printf("3 - Sacar\n");
    printf("4 - Transferencia\n");
    printf("5 - Outros\n");
    printf("6 - Sair\n");
    printf("\n");
    scanf("%d", &choices);
  
  switch (choices) {
    case 1:
      printf("Saldo\n\n");
      printf("Deseja retirar o extrato ou proseguir pro saldo simples? \n");
      printf("1 - saldo simples\n2 - extrato\n");
      int choose;
      scanf("%d", &choose);
      if (choose == 1) {
        printf("o seu saldo atual é de %.2lf\n", saldo);
        menu_opcoes(v);
        
      }
      else if (choose == 2) {
        printf("depois eu vejo isso mó preguiça mas é pra ter o extrato viu.\n");
        menu_opcoes(v);
      
      }
      else {
        system("clear||cls");
        menu_opcoes(v);
      }
    break;
    
    case 2 :
      printf("Deposito\n\n");
      printf("Digite o valor de deposito\n");
      scanf("%lf", &deposit);
      saldo = saldo + deposit;
      system("clear||cls");
      menu_opcoes(v);
    break;
    
    case 3 :
      printf("Quanta você deseja sacar? \n");
      scanf("%lf", &saque);
      if (saque > saldo) {
        printf("você não tem saldo o suficiente para este saque\n");
        menu_opcoes(v);
      }
      else {
        saldo = saldo - saque;
        printf("o saldo atual é de %.2lf\n", saldo);
        printf("saque concluido com sucesso\n");
      }
    break;
    
    case 4:
    printf ("4 - Transferência.\n");
    break;
    
    case 5 :
    printf ("5 - Outros.\n");
    break;
    case 6:
    printf("até a proxima\n");
    quit = 1;
    break;
    }
  }
int main() {
  int start;
  printf("Bem vindo ao banco\n");
  printf("1 - cadastro\n2 - login\n");
  cadastro(v);
  if (loginsuc == 1) {
    menu_opcoes(v);
  }
  if (quit == 1) {
    return 0;
  }
}
