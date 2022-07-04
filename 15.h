#include <stdio.h>

void exe15() {

//Faça um Programa que peça os 3 lados de um triângulo. O programa deverá informar se os valores podem ser um triângulo. Indique, caso os lados formem um triângulo, se o mesmo é: equilátero, isósceles ou escaleno.
  

//Três lados formam um triângulo quando a soma de quaisquer dois lados for maior que o terceiro;
//Triângulo Equilátero: três lados iguais;
//Triângulo Isósceles: quaisquer dois lados iguais;
//Triângulo Escaleno: três lados diferentes;

float lado1, lado2, lado3;

  printf("Digite o valor do primeiro lado: ");
  scanf("%f", &lado1);

  printf("Digite o valor do segundo lado: ");
  scanf("%f", &lado2);

  printf("Digite o valor do terceiro lado: ");
  scanf("%f", &lado3);

  if ( ((lado1 + lado2) > lado3) && ((lado2 + lado3) > lado1) && ((lado1 + lado3) > lado2) )
    {
      if ( lado1 == lado2 && lado2 == lado3 && lado1 == lado3)
        {
          printf("O triângulo é Equilátero!");
        }
      else
        if (lado1 == lado2 || lado2 == lado3 || lado1 == lado3)
            {
              printf("O triângulo é Isósceles!");
            }
        else
          if ((lado1 != lado2) && (lado2 != lado3) && (lado1 != lado3))
            {
              printf("O triângulo é Escaleno!");
            }

      
    }
  else
    printf("Não é triângulo!");


  
}