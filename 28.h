#include <stdio.h>

void exe28() {

    //O Hipermercado Tabajara está com uma promoção de carnes que é imperdível. Confira:
         //             Até 5 Kg           Acima de 5 Kg
//File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
//Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
//Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

  //Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos de carne da promoção, porém não há limites para a quantidade de carne por cliente. Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de 5% sobre o total da compra. Escreva um programa que peça o tipo e a quantidade de carne comprada pelo usuário e gere um cupom fiscal, contendo as informações da compra: tipo e quantidade de carne, preço total, tipo de pagamento, valor do desconto e valor a pagar.

  int opcao,formapag;
	float qtdcarne,valorcompra,desconto,precofinal;
  char tipocarne[3] = {'File Duplo', 'Alcatra', 'Picnha'};
	
    printf("\n1 - File Duplo \n2 - Alcatra \n3 - Picanha \nQual o tipo de carne escolhida? ");
    scanf(" %d", &opcao);
    
	if (opcao == 1)
    {
	 	  printf("Digite a quantidade desejada?:  ");
	 	  scanf("%f", &qtdcarne);
	 	
	 	  if(qtdcarne >=5)
        {
	 		    valorcompra = qtdcarne * 5.8;
		    }
      else
        {
		 	    valorcompra= qtdcarne * 4.9;
		    }
	  }
  else 
    if (opcao == 2)
      {
	 	    printf("Digite a quantidade desejada?:  ");
	 	    scanf("%f", &qtdcarne);
	 	
	 	    if(qtdcarne >=5)
          {
	 		      valorcompra = qtdcarne * 6.8;
		      }
        else
          {
		 	      valorcompra= qtdcarne * 5.9;
		      }
		 
		  }
    else 
      if (opcao == 3)
        {
		      printf("Digite a quantidade desejada?:  ");
	 	      scanf("%f", &qtdcarne);
          
		      if(qtdcarne >=5)
            {
	 	          valorcompra = qtdcarne * 7.8;
		        }
          else
            {
		 	        valorcompra= qtdcarne * 6.9;
		        }
		 	
		    }
      else 
        {
		      printf("Valor Inválido!");
		    }
		 
  printf("\n 1 - Cartão de Crédito \n 2 - Pagamento à vista \nQual a forma de pagamento: ");
		 scanf(" %d", &formapag);
		 
	if (formapag == 1)
    { 
		  desconto = valorcompra * 0.05;
		  precofinal = valorcompra - desconto;
         
		}
     else
		   precofinal = valorcompra;
		
		 
		 printf("\n            SUPERMERCADO TABAJARA            \n");
		 printf("\nA Quantidade comprada:   %.2f KG",qtdcarne);
		 printf ("\nO valor total da compra é:  R$%.2f",valorcompra);
		 printf("\nO valor do desconto é:  R$%.2f",desconto);		 
		 printf("\nO valor total com desconto é:  R$%.2f",precofinal);
		 
}