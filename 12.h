#include <stdio.h>

void exe12() {


//Faça um programa para o cálculo de uma folha de pagamento, sabendo que os descontos são do Imposto de Renda, que depende do salário bruto (conforme tabela abaixo) e 3% para o Sindicato e que o FGTS corresponde a 11% do Salário Bruto, mas não é descontado (é a empresa que deposita). O Salário Líquido corresponde ao Salário Bruto menos os descontos. O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas trabalhadas no mês.

  //Desconto do IR:
//Salário Bruto até 900 (inclusive) - isento
//Salário Bruto até 1500 (inclusive) - desconto de 5%
//Salário Bruto até 2500 (inclusive) - desconto de 10%
//Salário Bruto acima de 2500 - desconto de 20% Imprima na tela as informações, dispostas conforme o exemplo abaixo. No exemplo o valor da hora é 5 e a quantidade de hora é 220

  ///Salário Bruto: (5 * 220)        : R$ 1100,00
 //       (-) IR (5%)                     : R$   55,00  
  //      (-) INSS ( 10%)                 : R$  110,00
  //      FGTS (11%)                      : R$  121,00
  //      Total de descontos              : R$  165,00
   //     Salário Liquido                 : R$  935,00

float valorhora, horas;

printf("Digite o preço da sua hora trabalhada: ");
  scanf("%f", &valorhora);

printf("Digite a quantidade de horas que você trabalhou: ");
  scanf("%f", &horas);
  
float salariobruto = valorhora * horas;
  
  if (salariobruto <= 900)
    {
      printf("\n Salário Bruto:              R$ %.2f", salariobruto);
      printf("\n IR:                         Isento ");
      
      float sindi = salariobruto * 0.03;
      printf("\n Sindicato:                  R$ %.2f", sindi);
      
      float inss = salariobruto * 0.10;
      printf("\n INSS:                       R$ %.2f", inss);
      
      float fgts = salariobruto * 0.11;
      printf("\n FGTS:                       R$ %.2f", fgts);
      
      float totaldes = inss + sindi;
      printf("\n Total de descontos:         R$ %.2f", totaldes);

      float salarioliqui = salariobruto - totaldes;
      printf("\n Salário Líquido:            R$ %.2f", salarioliqui);
      
    }
  else
    if (salariobruto <= 1500)
      {
        printf("\n Salário Bruto:              R$ %.2f", salariobruto);

        float sindi = salariobruto * 0.03;
        printf("\n Sindicato:                  R$ %.2f", sindi);

        float ir = salariobruto * 0.05;
        printf("\n IR:                         R$ %.2f", ir);
        
        float inss = salariobruto * 0.10;
        printf("\n INSS:                       R$ %.2f", inss);
        
        float fgts = salariobruto * 0.11;
        printf("\n FGTS:                       R$ %.2f", fgts);
        
        float totaldes = inss + sindi + ir;
        printf("\n Total de descontos:         R$ %.2f", totaldes);

        float salarioliqui = salariobruto - totaldes;
        printf("\n Salário Líquido:            R$ %.2f", salarioliqui);

    
      }
    else
      if (salariobruto <= 2500)
        {
        printf("\n Salário Bruto:              R$ %.2f", salariobruto);

        float sindi = salariobruto * 0.03;
        printf("\n Sindicato:                  R$ %.2f", sindi);

        float ir = salariobruto * 0.10;
        printf("\n IR:                         R$ %.2f", ir);
        
        float inss = salariobruto * 0.10;
        printf("\n INSS:                       R$ %.2f", inss);
        
        float fgts = salariobruto * 0.11;
        printf("\n FGTS:                       R$ %.2f", fgts);
        
        float totaldes = inss + sindi + ir;
        printf("\n Total de descontos:         R$ %.2f", totaldes);

        float salarioliqui = salariobruto - totaldes;
        printf("\n Salário Líquido:            R$ %.2f", salarioliqui);
        }
      else
        if (salariobruto > 2500)
          {
            printf("\n Salário Bruto:              R$ %.2f", salariobruto);

            float sindi = salariobruto * 0.03;
            printf("\n Sindicato:                  R$ %.2f", sindi);

            float ir = salariobruto * 0.20;
            printf("\n IR:                         R$ %.2f", ir);
        
            float inss = salariobruto * 0.10;
            printf("\n INSS:                       R$ %.2f", inss);
        
            float fgts = salariobruto * 0.11;
            printf("\n FGTS:                       R$ %.2f", fgts);
        
            float totaldes = inss + sindi + ir;
            printf("\n Total de descontos:         R$ %.2f", totaldes);

            float salarioliqui = salariobruto - totaldes;
            printf("\n Salário Líquido:            R$ %.2f", salarioliqui);
          }
      
  




  


  
}