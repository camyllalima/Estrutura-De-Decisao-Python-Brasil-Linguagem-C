#include <stdio.h>

void exe25() {


  //Faça um programa que faça 5 perguntas para uma pessoa sobre um crime. As perguntas são:
//"Telefonou para a vítima?"
//"Esteve no local do crime?"
//"Mora perto da vítima?"
//"Devia para a vítima?"
//"Já trabalhou com a vítima?" O programa deve no final emitir uma classificação sobre a participação da pessoa no crime. Se a pessoa responder positivamente a 2 questões ela deve ser classificada como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino". Caso contrário, ele será classificado como "Inocente".



  
  char  resp1, resp2, resp3, resp4, resp5;
    int cont,cont1,cont2,cont3,cont4,contt;

printf("\nDigite [S] para Sim e [N] para Não.\n");
printf("\nTelefonou para a vítima? ");
scanf(" %c", &resp1);
    
    cont=0;
    
    if(resp1=='S'){
        cont1= cont + 1;
    }else{
        cont1= cont + 0;
    }
  
printf("\nEsteve no local do crime? ");
scanf(" %c", &resp2);
    
    if(resp2=='S'){
        cont2= cont1 + 1;
    }else{
        cont2= cont1 + 0;
    }

printf("\nMorava perto da vítima?  ");
scanf(" %c", &resp3);
  
    if(resp3=='S'){
        cont3= cont2 + 1;
    }else{
        cont3= cont2 + 0;
    }

printf("\nDevia para a vítima? ");
scanf(" %c", &resp4);
    
    if(resp4=='S'){
        cont4= cont3 + 1;
    }else{
        cont4= cont3 + 0;
    }
    
printf("\nTrabalhou com a vitima? ");
scanf(" %c", &resp5);
    
    if(resp5=='S'){
        contt= cont4 + 1;
    }else{
        contt= cont4 + 0;
    }
    
    if(contt==2){
        printf("\nSuspeita!");
    }else if(contt==3||contt==4){
        printf("\nCúmplice!");
    }else if(contt==1){
        printf("\nInocente!");
    }else if(contt==5){
        printf("\nAssassino!");
    }else{
        printf("\nNada a declarar!");
    }


}



