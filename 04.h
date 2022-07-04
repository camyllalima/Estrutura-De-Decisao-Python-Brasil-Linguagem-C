#include <stdio.h>

void exe4() {

//Faça um Programa que verifique se uma letra digitada é vogal ou consoante.

char letra;

printf("\n Digite uma letra que eu digo se é vogal: ");
scanf(" %c", &letra);

if (letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
  printf("\n A letra é uma vogal.");
else
  printf("\n Não é vogal. Pode ser consoante.");

  
}