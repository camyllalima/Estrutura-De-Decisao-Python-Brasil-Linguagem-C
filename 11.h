#include <stdio.h>

void exe11() {

//Faça um programa que recebe o salário de um colaborador e o reajuste segundo o seguinte critério, baseado no salário atual:

  //salários até R$ 280,00 (incluindo) : aumento de 20%
//salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
  //salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
//salários de R$ 1500,00 em diante : aumento de 5% Após o aumento ser realizado, informe na tela:
  
  //o salário antes do reajuste;
//o percentual de aumento aplicado;
  //o valor do aumento;
//o novo salário, após o aumento.

float salario;
printf("Qual o seu salário: ");
scanf("%f", &salario);

  
  if (salario <= 280)
  {
    printf("\n Seu salário antes do reajuste era: R$ %.2f", salario);
    printf("\n O percentual de aumento é de 20 por cento.");
    float aumento = salario * 0.2;
    printf("\n O valor do aumento será de R$ %.2f", aumento);
    float novosalario = salario + aumento;
    printf("\n Seu salário com reajuste é: R$ %.2f", novosalario);
  }
  else
    if (salario > 280 && salario <= 700)
    {
      printf("\n Seu salário antes do reajuste era: R$ %.2f", salario);
      printf("\n O percentual de aumento é de 15 por cento.");
      float aumento1 = salario * 0.15;
      printf("\n O valor do aumento será de R$ %.2f", aumento1);
      float novosalario1 = salario + aumento1;
      printf("\n Seu salário com reajuste é: R$ %.2f", novosalario1);
    }
    else
      if (salario > 700 && salario <= 1500)
      {
        printf("\n Seu salário antes do reajuste era: R$ %.2f", salario);
        printf("\n O percentual de aumento é de 10 por cento.");
        float aumento2 = salario * 0.10;
        printf("\n O valor do aumento será de R$ %.2f", aumento2);
        float novosalario2 = salario + aumento2;
        printf("\n Seu salário com reajuste é: R$ %.2f", novosalario2);
      }
      else
        if (salario > 1500)
        {
          printf("\n Seu salário antes do reajuste era: R$ %.2f", salario);
          printf("\n O percentual de aumento é de 5 por cento.");
          float aumento3 = salario * 0.05;
          printf("\n O valor do aumento será de R$ %.2f", aumento3);
          float novosalario3 = salario + aumento3;
          printf("\n Seu salário com reajuste é: R$ %.2f", novosalario3);
        }

return 0;
  

  
}