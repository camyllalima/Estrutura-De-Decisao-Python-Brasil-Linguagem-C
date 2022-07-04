#include <stdio.h>

void exe23() {

//Faça um Programa que peça um número e informe se o número é inteiro ou decimal. Dica: utilize uma função de arredondamento.

  float valor;
	int aux;
	
	printf("Insira um número: ");
	scanf("%f", &valor);
	
	aux = valor;
		
		valor= ceil (valor);
	
	
	if (aux==valor)
    {
		 printf("O número digitado é inteiro!");
	  }
  else
    {
		 printf("O número digitado é decimal.");
    }

  
}