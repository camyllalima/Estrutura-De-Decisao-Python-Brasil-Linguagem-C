#include <stdio.h>

void exe1() {

//Faça um Programa que peça dois números e imprima o maior deles.

float n1, n2;

printf("Digite um número: ");
scanf("%f", &n1);

printf("Digite outro número: ");
scanf("%f", &n2);

if (n1 > n2)
  printf("O maior número foi: %.2f ", n1);
else
  if (n2 > n1)
     printf("O maior número foi: %.2f ", n2);
  else
    printf("Os valores são iguais.");
  
}