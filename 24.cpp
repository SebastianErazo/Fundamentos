#include <stdio.h>
#include <stdbool.h>

bool esPrimo(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

int main() {
	int n;
	printf("Ingrese un número: ");
	scanf("%d", &n);
	
	if (esPrimo(n)) {
		printf("%d es un número primo.\n", n);
	} else {
		printf("%d no es un número primo.\n", n);
	}
	
	return 0;
}
