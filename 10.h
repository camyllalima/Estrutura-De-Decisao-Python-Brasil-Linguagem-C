#include <stdio.h>

void exe10() {

//Faça um Programa que pergunte em que turno você estuda. Peça para digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inválido!", conforme o caso.

char turno;

printf("\n Que turno você estuda? [M-Matutino/V-Vespertino/N-Noturno]: ");
scanf("%c", &turno);

if (turno == 'V' || turno == 'v')
  printf("\n Boa tarde! ");
else
  if (turno == 'M' || turno == 'm')
  printf("\n Bom dia! ");
  else
    if (turno == 'N' || turno == 'n')
      printf("\n Boa noite! ");
    else
    printf("Valor Inválido");












  
  
}