#include <stdio.h>
#include <stdlib.h>

/* Operações Matemáticas
	+ soma
	- subtração
	/ divisão
	% mod resto da divisão
*/

int main() {
	float valorUm, valorDois, resultado, divisao, media, resto;
	int subtracao, multiplicacao;
	
	valorUm = 7;
	valorDois = 8;
	
	media = (valorUm + valorDois) / 2;
	resultado = valorUm + valorDois;
	subtracao = valorUm - valorDois;
	divisao = valorUm / valorDois;
	multiplicacao = valorUm * valorDois;
	resto = 9 % 2;
	
	printf("%0.0f", resto);
	printf("\n%0.2f", media);
	printf("\n%0.2f", divisao);
	printf("\n%0.0f", resultado);
	printf("\n%i", subtracao);
	printf("\n%i", multiplicacao);
	return 0;
}
