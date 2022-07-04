#include <stdio.h>

void exe13() {

//Faça um Programa que leia um número e exiba o dia correspondente da semana. (1-Domingo, 2- Segunda, etc.), se digitar outro valor deve aparecer valor inválido.


int diasemana;
  printf(" \n 1 - Domingo \n 2 - Segunda \n 3 - Terça \n 4 - Quarta \n 5 - Quinta \n 6 - Sexta \n 7 - Sábado \n Digite o número correspondente: ");
  scanf("%d", &diasemana);

  if (diasemana == 1)
    {
      printf("\n Hoje é Domingo!");
    }
  else
    if (diasemana == 2)
      {
        printf("\n Hoje é Segunda!");
      }
    else
      if (diasemana == 3)
        {
          printf("\n Hoje é Terça!");
        }
      else
        if (diasemana == 4)
          {
            printf("\n Hoje é Quarta!");
          }
        else
          if (diasemana == 5)
            {
              printf("\n Hoje é Quinta!");
            }
          else
            if (diasemana == 6)
              {
                printf("\n Hoje é Sexta!");
              }
            else
              if (diasemana == 7)
                {
                  printf("\n Hoje é Sábado!");
                }
              else
                printf("\n Valor Inválido!");

  
}