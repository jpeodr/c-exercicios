#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int i;
	
	for(i=0; i <= 100; i++){
		if((i % 2) == 0){
			printf(" %i", i);
		}
	}
	return 0;
}
