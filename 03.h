#include <stdio.h>

void exe3() {

//Faça um Programa que verifique se uma letra digitada é "F" ou "M". Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido

char sexo;

printf("\n Digite seu sexo [F/M]: ");
scanf(" %c", &sexo);

if (sexo == 'F' || sexo == 'f')
  printf("\n Seu sexo é feminino.");
else
  if (sexo == 'M' || sexo == 'm')
  printf("\n Seu sexo é masculino.");
  else
    printf("Sexo Inválido");
  
}