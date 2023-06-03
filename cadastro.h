#ifndef CADASTRO_H
#define CADASTRO_H
#include <stdio.h>
char user_name(char nome[60]) {
  scanf("%s", nome);
}

double income(double renda) {
  scanf("%lf", &renda);
}
#endif
