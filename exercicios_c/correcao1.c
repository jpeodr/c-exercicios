#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n = 0;
	int p, i = 0;
	
	scanf(" %i", &n);
	
	if((n % 2) == 0){
		p = n;
	}else{
		i = n;
	}
	printf("P: %i i: %i", p, i);
	
	return 0;
}
