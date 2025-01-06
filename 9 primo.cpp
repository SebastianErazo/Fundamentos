#include <stdio.h>
#include <math.h>


int primo(int num) {
	if (num <= 1) {
		return 0; 
	}
	
	int limite = (int) sqrt(num);
	for (int i = 2; i <= limite; i++) {
		if (num % i == 0) {
			return 0;
		}
	}
	
	return 1; 
}

int main() {
	printf("Numeros primos entre 1 y 10000:\n");
	
	for (int num = 2; num <= 10000; num++) { 
		if (primo(num)) {
			printf("%d ", num);
		}
	}
	
	printf("\n"); 
	return 0;
}
