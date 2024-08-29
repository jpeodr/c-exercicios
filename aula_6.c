#include <stdio.h>
#include <stdlib.h>

// A -> Até 1000 		>= 0 && < 1000
// B -> De 1000 a 2000		>= 1000 && < 2000
// C -> 2000 a 5000		>= 2000 && < 5000
// D -> acima de 5000 	> 5000

int main() {
	int peso = ;
	if(peso >= 0 && peso < 1000	){
		printf("Categoria A \n");
	}
	if(peso >= 1000 && peso < 2000){
		printf("Categoria B \n");
	}
	if(peso >= 2000 && peso < 5000){
		printf("Categoria C \n");
	}
	if(peso >= 5000){
		printf("Categoria D");
	}
	return 0;
}
