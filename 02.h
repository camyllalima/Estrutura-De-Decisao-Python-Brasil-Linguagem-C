#include <stdio.h>

void exe2() {

//Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

float numer;
printf("Digite um número: ");
scanf("%f", &numer);

if (numer >= 0)
  printf("O número é positivo.");
else
  if (numer< 0)
    printf("O número é negativo.");

  
}