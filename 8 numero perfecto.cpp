#include <stdio.h>


int perfecto(int num) {
	int suma = 0;
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			suma += i;
		}
	}
	return suma == num;
}


void imprimir_factores(int num) {
	printf("Factores: ");
	for (int i = 1; i <= num / 2; i++) {
		if (num % i == 0) {
			printf("%d ", i);
		}
	}
	printf("\n");
}

int main() {
	printf("Numeros perfectos entre 1 y 1000:\n");
	for (int num = 1; num <= 1000; num++) {
		if (perfecto(num)) {
			printf("%d es un numero perfecto.\n", num);
			imprimir_factores(num);
		}
	}
	return 0;
}
