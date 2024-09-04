#include <stdio.h>
#include <stdlib.h>
/* 3 -  Crie um programa que calcule a média das notas de 4 bimestre e apresente a média, se o estudante tirou mais 
que 7, exiba aprovado. */
int main(){
  	float n1, n2, n3, n4, media;
  	n1 = 8;
  	n2 = 9;
  	n3 = 8;
  	n4 = 9;
  	
  	media = (n1 + n2 + n3 + n4) / 4;
  	
  	if(media > 7){
  		printf("Aprovado");
	  }else{
	  	if(media >= 5 && media <= 7){
	  		printf("PF");
		  }else{
		  	printf("Reprovado");
		  }
	  }
  	return 0;
}
