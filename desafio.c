#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int arraycharparaint (char entrada[5]){
  int auxa, auxb, auxc, auxd;

  auxa = (int)entrada[0]-48; //conversão de char para paint onde auxa é o número mais significativo
  auxb = (int)entrada[1]-48;
  auxc =(int)entrada[2]-48;
  auxd = (int)entrada[3]-48;
  
  return (auxa*1000+auxb*100+auxc*10+auxd);
}


int main ()
{
  char input[5]; //recebe o valor do usuário através do stdin
  int aux[4]; //armazena todos os dados até o buffer estar completo

  

      while(1){
    
    
          for (int i = 0; i < 5; i++){
          gets(input);
    	  aux[i] = arraycharparaint (input);
    	}
         // printf ("\n");
          printf ("RDWCV=%.1f,", (float) aux[4] / 100);
          printf ("RDWSD=%.1f\r", (float) aux[0] / 100);
    
         // printf ("MCV=%d,", aux[1]); não utilizado no desafio
         //  printf ("MCHC=%d,", aux[2]);  não utilizado no desafio
         // printf ("MCH=%d,", aux[3]);  não utilizado no desafio
     
    }
     return 0;
}