#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int par(int numero) {
	if (numero%2==0) {
		return 1; 
	} else {
		return 0; 
	}
}
int main() {
	int numero;
	printf("Ingrese un numero entero: ");
	scanf("%d", &numero);
	if (par(numero)) {
		printf("El numero es par. Retorno: 1\n");
	} else {
		printf("El numero es impar. Retorno: 0\n");
	}
	return 0;
}
