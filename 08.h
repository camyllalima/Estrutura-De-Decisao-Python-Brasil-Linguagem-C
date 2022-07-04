#include <stdio.h>

void exe8() {

//Faça um programa que pergunte o preço de três produtos e informe qual produto você deve comprar, sabendo que a decisão é sempre pelo mais barato.

float prod1, prod2, prod3;

printf("Digite o valor do primeiro produto: ");
scanf("%f", &prod1);

printf("Digite o valor do segundo produto: ");
scanf("%f", &prod2);

printf("Digite o valor do terceiro produto: ");
scanf("%f", &prod3);

if ( prod1 <= prod2 && prod1 <= prod3)
  printf("O produto %.2f é o mais barato.", prod1);

else
  if (prod2 <= prod1 && prod2 <= prod3)
    printf("O produto %.2f é o mais barato.", prod2);
  else
    if (prod3 <= prod2 && prod3 <= prod1)
      printf("O produto %.2f é o mais barato.", prod3);
}