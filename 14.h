#include <stdio.h>

void exe14() {

//Faça um programa que lê as duas notas parciais obtidas por um aluno numa disciplina ao longo de um semestre, e calcule a sua média. A atribuição de conceitos obedece à tabela abaixo:
 
  //Média de Aproveitamento  Conceito
 // Entre 9.0 e 10.0        A
 // Entre 7.5 e 9.0         B
 // Entre 6.0 e 7.5         C
//  Entre 4.0 e 6.0         D
//  Entre 4.0 e zero        E

  //O algoritmo deve mostrar na tela as notas, a média, o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C ou “REPROVADO” se o conceito for D ou E.
  
  float nota1, nota2;
  
  printf("\nDigite a primeira nota: ");
  scanf("%f", &nota1);

  printf("Digite a segunda nota: ");
  scanf("%f", &nota2);

  float media = (nota1 + nota2) /2;

    if (media <= 10.0 && media >= 9)
      {
        printf("\nSua média é: %.2f", media);
        printf("\nVocê tirou A!");
        printf("\nAPROVADO");
      }
    else
      if (media >= 7.5 && media < 9)
        {
          printf("\nSua média é: %.2f", media);
          printf("\nVocê tirou B!");
          printf("\nAPROVADO");
        }
      else
        if (media >= 6 && media < 7.5)
          {
            printf("\nSua média é: %.2f", media);
             printf("\nVocê tirou C!");
            printf("\nAPROVADO");
          }
        else
          if (media >= 4 && media < 6)
            {
              printf("\nSua média é: %.2f", media);
              printf("\nVocê tirou D!");
              printf("\nREPROVADO");
            }
          else
            if (media >= 0 && media < 4)
                {
                  printf("\nSua média é: %.2f", media);
                  printf("\nVocê tirou E!");
                  printf("\nREPROVADO");
                }
          

}