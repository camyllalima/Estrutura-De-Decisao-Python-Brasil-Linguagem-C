#include <stdio.h>

void exe24() {

//Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual operação ele deseja realizar. O resultado da operação deve ser acompanhado de uma frase que diga se o número é:
  
//par ou ímpar;
//positivo ou negativo;
//inteiro ou decimal.

 

  float numero1, numero2, conta ;
  int aux, ope;


  printf("Digite o primeiro número: ");
  scanf("%f", &numero1);

  printf("Digite o segundo número: ");
  scanf("%f", &numero2);

  printf("\n 1 - adição \n 2 - subtração \n 3 - multiplicação \n 4 - divisão \n Digite que operação deseja realizar: ");
  scanf("%d", &ope);


  

  if (ope == 1)
    {
      conta = (numero1 + numero2);
    }
  else
    if (ope == 2)
      {
        conta = (numero1 - numero2);
      }    
    else
      if (ope == 3)
        {
          conta = (numero1 * numero2);
        }
  else
    if (ope == 4)
      {
        conta = (numero1 / numero2);
        }
  
/////////////////////////////////////////////////////

  int arreconta = ceil(conta);
  if ((abs(arreconta) % 2) == 1)
          {
            printf("\nO número é ímpar!");
          }
  else 
            if ((arreconta % 2) == 0)
              {
                printf("\nO número é par!");
              }
/////////////////////////////////////////////////////
  
  if (conta >= 0)
          {
            printf("\nO número é positivo.");
          }
  else
          if (conta < 0)
            {
              printf("\nO número é negativo.");
            }
////////////////////////////////////////////////////

  arreconta = ceil(conta);
        
  if (conta == arreconta)
          {
            printf("\nO número digitado é inteiro!");
          }
  else
          {
            printf("\nO número digitado é decimal.");
          }


  
}