#include <stdio.h>
#include <stdlib.h>
/* 2 - Crie um programa que verifique a idade da pessoa, caso ela possua 65 anos ela possa ter o benefício. */
int main(){
  
  	int idade = 65;
  	
  	if(idade >= 65){
  		printf("A pessoa pode ter o beneficio.");
	  }else{
	  	printf("Nao pode ter o beneficio.");
	  }
  	return 0;
}
