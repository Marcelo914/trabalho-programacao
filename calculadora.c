#include <stdio.h>
#include <stdlib.h>
//autoadd
int num1, num2, result;
int soma(int num1, int num2, int result){
  result = num1 + num2;
  return result;
}
int main()
{
  int operacao;
  printf("escolha a operacao");
  scanf("%d", &operacao);
  if (operacao == 1){
    operacao = soma(num1, num2, result);
  }

  return 0;
}
