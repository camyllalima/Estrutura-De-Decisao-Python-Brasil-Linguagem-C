#include <stdio.h>

void exe9() {

  //Faça um Programa que leia três números e mostre-os em ordem decrescente.

float n1, n2, n3;

printf("Digite o primeiro número: ");
scanf("%f", &n1);
  
printf("Digite o segundo número: ");
scanf("%f", &n2);

printf("Digite o terceiro número: ");
scanf("%f", &n3);

if ( n1 <= n2 && n1 <= n3 && n2 <= n3)
  printf("A ordem crescente é: %.2f %.2f %.2f", n1,n2,n3);

else
  
  if ( n1 <= n2 && n1 <= n3 && n3 <= n2)
  printf("A ordem crescente é: %.2f %.2f %.2f", n1,n3,n2);
  
  else
    
    if ( n3 <= n1 && n2 <= n1 && n3 <= n2)
    printf("A ordem crescente é: %.2f %.2f %.2f", n3,n2,n1);
    
    else
      
      if ( n1 <= n2 && n3 <= n2 && n3 <= n1)
    printf("A ordem crescente é: %.2f %.2f %.2f", n3,n1,n2);

      else
        
        if ( n2 <= n1 && n2 <= n3 && n1 <= n3)
    printf("A ordem crescente é: %.2f %.2f %.2f", n2,n1,n3);
        
        else
          
          if ( n2 <= n1 && n2 <= n3 && n3 <= n1)
    printf("A ordem crescente é: %.2f %.2f %.2f", n2,n3,n1);
      
      


  
}