#include <stdio.h>

void exe21() {

//Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao usuário a valor do saque e depois informar quantas notas de cada valor serão fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se preocupar com a quantidade de notas existentes na máquina.


int valor,ced100,ced50,ced20,ced10,ced5,ced2,ced1;
printf("Digite o valor em reais: ");
scanf("%d",&valor);

if ((valor < 10) || (valor > 600))
  {
    printf("Valor Inválido!");
  }
else
{
  ced100 = (valor/100);
  valor = valor%100;
  ced50 = (valor/50);
  valor = (valor%50);
  ced20 = (valor/20);
  valor = (valor%20);
  ced10 = (valor/10);
  valor = (valor%10);
  ced5 = (valor/5);
  valor=(valor%5);
  ced2=(valor/2);
  valor=(valor%2);
  ced1=(valor/1);
  valor=(valor%1);
  
  printf("O valor de saque é: \n%d notas de R$100 \n%d notas de R$50 \n%d notas de R$20 \n%d notas de R$10 \n%d notas de R$5 \n%d notas de R$2 \n%d notas de R$1." ,ced100,ced50,ced20,ced10,ced5,ced2,ced1); 
  
}


}