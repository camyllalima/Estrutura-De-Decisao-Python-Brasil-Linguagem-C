#include <stdio.h>

void exe5() {

//Faça um programa para a leitura de duas notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e apresentar:
  
//A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
//A mensagem "Reprovado", se a média for menor do que sete;
//A mensagem "Aprovado com Distinção", se a média for igual a dez.

float nota1, nota2;

printf("Digite a primeira nota: ");
scanf("%f", &nota1);

printf("Digite a segunda nota: ");
scanf("%f", &nota2);

float media = (nota1 + nota2)/2;

if (media == 10)
  printf("Aluno Aprovado com Distinção.");
else
  if (media >= 7)
    printf("Aluno Aprovado.");
  else
    if (media < 7)
      printf("Aluno Reprovado.");



  
}