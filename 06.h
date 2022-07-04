#include <stdio.h>

void exe6() {

//Faça um Programa que leia três números e mostre o maior deles.

float n1, n2, n3;

printf("Digite o primeiro número: ");
scanf("%f", &n1);
  
printf("Digite o segundo número: ");
scanf("%f", &n2);

printf("Digite o terceiro número: ");
scanf("%f", &n3);

if ( n1 >= n2 && n1 >= n3)
  printf("O número %.2f é o maior.", n1);

else
  if (n2 >= n1 && n2 >= n3)
    printf("O número %.2f é o maior.", n2);
  else
    if (n3 >= n2 && n3 >= n1)
      printf("O número %.2f é o maior.", n3);
  
  
}