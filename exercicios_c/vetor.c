#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char palavra[10];
	char letra;
	printf("Digite a palavra secreta \n");
	scanf("%s", &palavra);
	
	int erros = 0, acertos = 0;
	while(erros <= 3){
	fflush(stdin);
	printf("Digite uma letra \n");
	scanf("%c", &letra);


	int i;
	for(i = 0; i < 10; i++){
		if(letra == palavra[i]){
			printf("Acertou! \n");
			acertos++;
		}else{
			printf("Erroouuu \n");
			erros++;
			}
	}
	}
	return 0;
}
