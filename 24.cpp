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
	printf("Ingrese un n�mero: ");
	scanf("%d", &n);
	
	if (esPrimo(n)) {
		printf("%d es un n�mero primo.\n", n);
	} else {
		printf("%d no es un n�mero primo.\n", n);
	}
	
	return 0;
}
