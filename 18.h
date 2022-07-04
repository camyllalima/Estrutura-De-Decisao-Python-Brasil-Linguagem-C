#include <stdio.h>

void exe18() {

  //peça uma data no formato dd/mm/aaaa e determine se a mesma   é uma data válida.


    //Se mês for 04, 06, 09 ou 11, dia pode ser no máximo 30;

    //Se mês for 02, dia pode ser no máximo 28;

    //Se ano for bissexto e mês for 02, dia pode ser no máximo 29.

  int dd, mm, aa;

  printf("Digite a data [dd/mm/aaaa]: ");
  scanf("%d/%d/%d", &dd, &mm, &aa);

    if  ( ((aa > 0) && (aa <= 2022)) )
      {

        if ((dd >= 1 && dd <= 31) && (mm == 1 || mm == 3 || mm == 5 || mm == 7 || mm == 8 || mm == 10 || mm == 12))
            printf("A data é válida.\n");
        else 
            if ((dd >= 1 && dd <= 30) && (mm == 4 || mm == 6 || mm == 9 || mm == 11))
                printf("A data é válida.\n");
            else 
                if ((dd >= 1 && dd <= 28) && (mm == 2))
                    printf("A data é válida.\n");
                else 
                    if (dd == 29 && mm == 2 && (aa % 400 == 0 || (aa % 4 == 0 && aa % 100 != 0)))
                        printf("A data é válida.\n");
                    else
                        printf("A data é inválida.\n");

      }
    else
      {
        printf("A data é inválida!");
      }
    
    return 0;
  
}
