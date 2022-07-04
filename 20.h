#include <stdio.h>

void exe20() {

//Faça um Programa para leitura de três notas parciais de um aluno. O programa deve calcular a média alcançada por aluno e presentar:
  
//A mensagem "Aprovado", se a média for maior ou igual a 7, com a respectiva média alcançada;
//A mensagem "Reprovado", se a média for menor do que 7, com a respectiva média alcançada;
//A mensagem "Aprovado com Distinção", se a média for igual a 10.

  float nota1, nota2, nota3;
  
  printf("Digite a primeira nota: ");
  scanf("%f", &nota1);
  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);
  printf("Digite a terceira nota: ");
  scanf("%f", &nota3);

  float media = (nota1 + nota2 + nota3) / 3;

  if (media == 10)
    {
      printf("Aprovado com Distinção! Sua média foi %.2f", media);
    }
  else 
    if (media >= 7)
      {
        printf("Aprovado! Sua média foi %.2f", media);
      }
    else
      if (media < 7)
        {
          printf("Reprovado! Sua média foi %.2f", media);
        }
   
}