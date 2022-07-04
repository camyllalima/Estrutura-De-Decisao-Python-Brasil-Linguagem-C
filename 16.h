#include <stdio.h>
#include <math.h>

void exe16() {

//Faça um programa que calcule as raízes de uma equação do segundo grau, na forma ax2 + bx + c. O programa deverá pedir os valores de a, b e c e fazer as consistências, informando ao usuário nas seguintes situações:
  
//Se o usuário informar o valor de A igual a zero, a equação não é do segundo grau e o programa não deve fazer pedir os demais valores, sendo encerrado;
  
//Se o delta calculado for negativo, a equação não possui raizes reais. Informe ao usuário e encerre o programa;
  
//Se o delta calculado for igual a zero a equação possui apenas uma raiz real; informe-a ao usuário;
  
//Se o delta for positivo, a equação possui duas raiz reais; informe-as ao usuário;

int a,b,c;

  printf("Digite o valor de a: ");
  scanf("%d", &a);

  if (a == 0)
    {
      printf("A equação não é de segundo grau!");
    }
  else
    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    float delta = ((b * b) - (4 * a * c));

    if (delta < 0)
      {
        printf("A equação não possui raízes reais!");
      }
    else
      if (delta == 0)
        {
          float x = ((-b) / (a * 2));
          printf("A equação possuí apenas uma raíz real: %.2f", x);
        }
      else
        if (delta > 0)
          {
            float x1 = (((-b) + sqrt(delta)) / (a * 2));
            float x2 = (((-b) - sqrt(delta)) / (a * 2));
            
            printf("A equação possuí duas raízes reais: %.2f e %.2f ", x1, x2);
          }

  
}