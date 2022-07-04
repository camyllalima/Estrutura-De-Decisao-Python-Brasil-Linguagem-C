#include <stdio.h>

void exe19() {

  //Testar com:  11, 1, 7 e 16

  int numero;
  
  printf("Digite um número menor que mil: ");
  scanf("%d", &numero);

  
    int cent = numero / 100;
	  int dez = ((numero -(cent * 100) ) / 10);
	  int uni = (numero -( cent * 100 + dez * 10));  
  
  if (numero > 1000)
    {
      printf("Valor inválido!");
    }
  else
    if (numero < 1000)
      {
        if ((cent == 1) && (dez == 1) && (uni == 1)) 
          {
            printf("%d = %d centena, %d dezena e %d unidade.", numero, cent, dez, uni);
          }
        else
          if ((cent == 1) && (dez == 1)) 
            {
              printf("%d = %d centena, %d dezena e %d unidades.", numero, cent, dez, uni);
            }
          else
            if ((cent == 1) && (uni == 1) && (dez == 0))
              {
                printf("%d = %d centena e %d unidade.", numero, cent, uni);
              }
            else
              if ((cent != 0) && (dez == 1) && (uni == 1))
                {
                  printf("%d = %d centenas, %d dezena e %d unidade.", numero, cent, dez, uni);
                }
              else
                if ((cent == 1) && (dez == 0) && (uni == 0))
                  {
                    printf("%d = %d centena.", numero, cent);
                  }
                else
                  if ((cent == 1) && (dez == 1) && (uni == 0))
                    {
                      printf("%d = %d centena e %d dezena.", numero, cent, dez); 
                    }
                  else
                    if ((cent == 0) && (dez == 1) && (uni == 0))
                      {
                        printf("%d = %d dezena.", numero, dez);
                      } 
                    else
                      if ( (cent !=0) && (dez == 1) && (uni == 0) )
                        {
                          printf("%d = %d centenas e %d dezena.", numero, cent, dez);
                        }
                      else
                        if ( (cent !=0) && (dez != 0) && (uni == 0) )
                          {
                            printf("%d = %d centenas e %d dezenas.", numero, cent, dez);
                          }
                        else
                          if ((cent != 0) && (dez == 0) && (uni == 1))
                            {
                              printf("%d = %d centenas e %d unidade.", numero, cent, uni);
                            }
                          else
                            if ((cent != 0) && (dez == 0) && (uni !=0))
                              {
                                printf("%d = %d centenas e %d unidades.", numero, cent, uni);
                              }
                            else 
                              if ((cent == 0) && (uni == 1) && (dez == 1))
                                {
                                  printf("%d = %d dezena e %d unidade.", numero, dez, uni);
                                }
                              else 
                                if ((cent == 0) && (uni == 1) && dez != 0)
                                  {
                                    printf("%d = %d dezenas e %d unidade.", numero, dez, uni);
                                  }
                                else ///////
                                  if ((cent == 0) && (uni != 0) && (dez != 0))
                                    {
                                      printf("%d = %d dezenas e %d unidades.", numero, dez, uni);
                                    }
                                  else
                                    if ((cent == 0) && (uni != 0) && (dez == 1))
                                     {
                                       printf("%d = %d dezenas e %d unidades.", numero, dez, uni);
                                     }
                                      else if ( uni == 1)
                                      {
                                        printf("%d = %d unidade.", numero, uni);
                                      }
                                        else if (uni != 0)
                                        {
                                          printf("%d = %d unidades.", numero, uni);
                                        }
                                        
            else
              printf("ERRO");
           
	return 0;

        }

  }