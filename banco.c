#include "cadastro.h"
#include <complex.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int loginsuc, v[60], quit;
double saldo, deposit, saque, valor;
long int password, confsenha, redsenha;
char nome[60];
double renda;

void cadastro(int s[60]) {
  char strpassword[60];
  int login, confpassword, sizepassw, try, choose;
  long long int numgerente;
  try = 3;
  numgerente = 61998007307;

  system("clear||cls");

  printf("Bem-vindo(a) ao Banco Universal!\n\n" "EU SOU UNIVERSAL\n\n");

  printf("Escreva o seu primeiro nome a seguir: \n");
  login = user_name(nome);
  printf("Digite a sua renda mensal: \n");
  renda = income(renda);
  printf("Define a sua senha(apenas 8 digitos):\n");
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
      try--;
    }
    if (try <= 0) {
      printf("entre em contato com o gerente: %lld\n", numgerente);
    }
  }
  if (confpassword == password) {
    printf("cadastro pronto\n\n");
    loginsuc = 1;
  }
}
void menu_opcoes(int s[60]) {
  long int numconta;
  int choices, comprovante;
  double add;

  printf("-----Escolha uma opcao-----\n");
  printf("\n");
  printf("1 - Saldo\n");
  printf("2 - Deposito\n");
  printf("3 - Sacar\n");
  printf("4 - Transferencia\n");
  printf("5 - Redefinir senha\n");
  printf("6 - Sair\n");
  printf("\n");
  scanf("%d", &choices);

  switch (choices) {
  case 1:
    printf("Saldo\n\n");
    printf("Deseja retirar o extrato ou proseguir pro saldo simples? \n");
    printf("1- saldo simples\n" "2- extrato\n");
    int choose;
    scanf("%d", &choose);
    if (choose == 1) {
      system("clear||cls");
      printf("o seu saldo atual eh de %.2lf\n\n", saldo);
      menu_opcoes(v);

    } else if (choose == 2) {
    	
// extrato
      system("clear||cls");
      printf("%s\n", nome);
      printf("Saldo atual: \n%.2lf\n", saldo);
      time_t current_time;
      struct tm *timeinfo;
      current_time = time(NULL);
      timeinfo = localtime(&current_time);
      printf("%s\n", asctime(timeinfo));
      printf("\n------------------------------------\n\n");
      printf("historico de movimentacao\n\n");
      printf("");
      

      menu_opcoes(v);

    } else {
      system("clear||cls");
      menu_opcoes(v);
    }
    break;

  case 2:
    printf("Deposito\n\n");
    printf("Digite o valor de deposito\n");
    scanf("%lf", &deposit);
    saldo = saldo + deposit;
    printf("Deseja receber o comprovante do deposito? \n");
    printf("Sim(1)\n" "Nao(0)\n");
    scanf("%d", &comprovante);
    if (comprovante == 1) {
      time_t current_time;
      struct tm *timeinfo;
      current_time = time(NULL);
      timeinfo = localtime(&current_time);
      system("clear||cls");
      printf("%s\n", asctime(timeinfo));
      printf("%.2lf\n", deposit);
      printf("o saldo atual eh de %.2lf\n\n", saldo);
    }
    else if (comprovante == 0) {
        system("clear||cls");
    
    }
    menu_opcoes(v);
    break;

  case 3:
    printf("Quanto voce deseja sacar? \n");
    scanf("%lf", &saque);
    if (saque > saldo) {
      system("clear||cls");
      printf("saldo insuficiente\n");
      menu_opcoes(v);
    } else {
      saldo = saldo - saque;
      system("clear||cls");
      printf("saque concluido com sucesso\n\n");
      printf("o saldo atual eh de %.2lf\n\n", saldo);
      menu_opcoes(v);
    }
    break;
  case 4:
    printf("\nNumero da Conta de Transferencia:\n");
    scanf("%ld", &numconta);
    printf("\nInforme o valor para transferencia:\n");
    scanf("%lf", &valor);
    printf("Digite a sua senha\n");
    scanf("%ld", &confsenha);
    if (confsenha == password) {
      if (valor > saldo) {
        printf("Erro ao efetuar a transferencia.\nSaldo Insuficiente.");
        system("clear||cls");
        menu_opcoes(v);
      }
      else {
      saldo = saldo - valor;
      system("clear||cls");
      printf("Transferencia efetuada com sucesso\n");
      printf("saldo atual de:%.2f\n\n", saldo);
      menu_opcoes(v);
      }
    }
    else {
      system("clear||cls");
      printf("senha incorreta, retornando ao menu de opcoes\n");
      menu_opcoes(v);
    }
    break;

  case 5:
    printf("Digite a nova senha: \n");
    scanf("%ld", &redsenha);
    if (password == redsenha) {
      printf("A senha redefinida nao pode ser igual a antiga.\n");
      menu_opcoes(v);
    } else {
      printf("Senha redefinida.\n\n");
      password = redsenha;
      menu_opcoes(v);
    }
    break;
  case 6:
    printf("Ate a proxima\n");
    quit = 1;
    break;
  }
}
int main() {
  int start;
  cadastro(v);
  if (loginsuc == 1) {
    menu_opcoes(v);
  }
  if (quit == 1) {
    return 0;
  }
}
