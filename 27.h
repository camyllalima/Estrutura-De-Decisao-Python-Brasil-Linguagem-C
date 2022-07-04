#include <stdio.h>

void exe27() {

  //Uma fruteira está vendendo frutas com a seguinte tabela de preços:
                      //Até 5 Kg           Acima de 5 Kg
//Morango         R$ 2,50 por Kg          R$ 2,20 por Kg
//Maçã            R$ 1,80 por Kg          R$ 1,50 por Kg
//Se o cliente comprar mais de 8 Kg em frutas ou o valor total da compra ultrapassar R$ 25,00, receberá ainda um desconto de 10% sobre este total. Escreva um algoritmo para ler a quantidade (em Kg) de morangos e a quantidade (em Kg) de maças adquiridas e escreva o valor a ser pago pelo cliente.

float Preco_Maca,Preco_Morango,Peso_Maca,Peso_Morango,Total_Morango,Total_Maca,Final;


  Preco_Maca = 1.8;
  Preco_Morango = 2.5;

  printf("Digite a quantidade de morangos: ");
  scanf("%f",&Peso_Morango);

  printf("Digite a quantidade de maçãs: ");
  scanf("%f",&Peso_Maca);

  if (Peso_Morango > 5)
    {
    Total_Morango = (Preco_Morango - 0.3) * Peso_Morango;
    }
  else
    {
      Total_Morango = Preco_Morango * Peso_Morango;
    }

  if (Peso_Maca > 5)
    {
      Total_Maca = (Preco_Maca - 0.3) * Peso_Maca;
    }
  else
    {
      Total_Maca = Preco_Maca * Peso_Maca;
    }

  if((Total_Morango + Total_Maca > 25) || (Peso_Morango + Peso_Maca > 8))
    {
      Final = (Total_Morango + Total_Maca) * 0.9;
    }
  else
    {
      Final =  Total_Morango + Total_Maca;
    }

    printf("\nO valor total da compra é: R$%.2f",Final);

  return(0);


}