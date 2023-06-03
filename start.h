#ifndef START_H
#define START_H
#include <stdio.h>
int start(int login, int cadastro, int choose){
  printf("Deseja fazer login ou se cadastrar?\n");
  printf("Digite 1 para o login e 2 para o cadastro\n");
  scanf("%d", &choose);
  if (choose == 1) {
    printf("login\n");
  }
  else if (choose == 2) {
    printf("cadastro\n");
  }
  else {
    printf("sei fazer isso não\n");
  }
}


#endif // !DEBUG
