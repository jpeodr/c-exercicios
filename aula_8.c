#include <stdio.h>
#include <stdlib.h>


int main() {
	int peso = 0;
	if(peso >= 0 && peso < 1000){
		printf("Cat A \n");
	}else{
		if(peso >= 1000 && peso < 2000){
			printf("Cat B \n");
		}else{
			if(peso >= 2000 && peso < 5000){
				printf("Cat C \n");
			}else{
				printf("Cat D \n");
			}
		}
	}
	return 0;
}
