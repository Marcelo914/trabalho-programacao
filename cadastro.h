#ifndef CADASTRO_H
#define CADASTRO_H
#include <stdio.h>
char user_name(char nome[60]) {
  scanf("%s", nome);
  printf("%s\n", nome);
}

double income(double renda) {
  scanf("%lf", &renda);
  printf("%.2lf\n", renda);
}
#endif
