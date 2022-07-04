#include <stdio.h>

void exe26() {


//Um posto está vendendo combustíveis com a seguinte tabela de descontos
  
//Álcool:
//até 20 litros, desconto de 3% por litro
//acima de 20 litros, desconto de 5% por litro
//Gasolina:
//até 20 litros, desconto de 4% por litro
//acima de 20 litros, desconto de 6% por litro Escreva um algoritmo que leia o número de litros vendidos, o tipo de combustível (codificado da seguinte forma: A-álcool, G-gasolina), calcule e imprima o valor a ser pago pelo cliente sabendo-se que o preço do litro da gasolina é R$ 2,50 o preço do litro do álcool é R$ 1,90.

float desc3a, desc5a;
float desc4g, desc6g;
float litros;
float total_a_pagar1;
float total_a_pagar2;
float total_a_pagar3;
float total_a_pagar4;
float valor1;
float valor2;
float valor3;
float valor4;
char combustivel;

printf("Digite o combustivel A-Álcool ou G-Gasolina: "); 
scanf("%c" , &combustivel); 

printf("Digite a quantidade de litros que deseja abastecer?: ");
scanf("%f" , &litros);

    if(combustivel == 'A' || combustivel == 'a'){

	if(litros <=20.00){
	
	valor1 = litros*1.90;
	desc3a = valor1*0.03;
	total_a_pagar1 = valor1-desc3a;
	
	printf("\nO valor total é: %.2f" , total_a_pagar1);
	
	}
     
    else if(litros >20.00){
	
	valor2 = litros*1.90;
	desc5a = valor2*0.05;
	total_a_pagar2 = valor2-desc5a;
	
	printf("\nO valor total é: %.2f" , total_a_pagar2);
		
}
}
	if(combustivel == 'G' || combustivel == 'g'){

	if(litros <= 20.00){
	
	valor3 = litros*2.50;
	desc4g = valor3*0.04;
	total_a_pagar3 = valor3-desc4g;
	
	printf("\nO valor total é: %.2f" , total_a_pagar3);
	
	}

	else if(litros > 20.00){
	
	valor4 = litros*2.50;
	desc6g = valor4*0.06;
	total_a_pagar4 = valor4-desc6g;
	
	printf("\nO valor total é: R$%.2f" , total_a_pagar4);
		
	}
}





  

}