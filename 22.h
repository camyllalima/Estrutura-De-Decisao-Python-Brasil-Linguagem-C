#include <stdio.h>

void exe22() {

//Faça um Programa que peça um número inteiro e determine se ele é par ou impar. Dica: utilize o operador módulo (resto da divisão).

  int numero;

  printf("Digite um número para saber se é impar ou par: ");
  scanf("%d", &numero);

  if ((numero % 2) == 1)
    {
      printf("O número é ímpar!");
    }
  else 
    if ((numero % 2) == 0)
      {
        printf("O número é par!");
      }

  
}