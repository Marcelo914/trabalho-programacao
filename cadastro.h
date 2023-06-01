#ifndef CADASTRO_H
#define CADASTRO_H
#include <stdio.h>
char user_name(char nome[60]) {
  scanf("%s", nome);
  printf("%s\n", nome);
}

float income(float renda) {
  scanf("%f", &renda);
  printf("%.2f\n", renda);
}
#endif
