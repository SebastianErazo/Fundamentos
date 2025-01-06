#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool esPrimo(int n) {
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return false;
	}
	return true;
}

void descomponerFloat(float numero, int *parteEntera, int *parteDecimal, int *numDecimales) {
	*parteEntera = (int)numero;
	float decimal = numero - *parteEntera;
	*numDecimales = 0;
	while (decimal != (int)decimal) {
		decimal *= 10;
		(*numDecimales)++;
	}
	*parteDecimal = (int)decimal;
}

int main() {
	float numero;
	int parteEntera, parteDecimal, numDecimales;
	
	printf("Ingrese un número: ");
	scanf("%f", &numero);
	
	descomponerFloat(numero, &parteEntera, &parteDecimal, &numDecimales);
	
	printf("Parte entera: %d\n", parteEntera);
	printf("Parte decimal: %d\n", parteDecimal);
	printf("Número de decimales: %d\n", numDecimales);
	
	return 0;
}
