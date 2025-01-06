#include <stdio.h>


void sumar(int num1, int num2, int *resultado) {
	*resultado = num1 + num2;
}

int main() {
	int num1, num2, resultado;
	
	
	printf("Ingrese el primer número: ");
	scanf("%d", &num1);
	
	printf("Ingrese el segundo número: ");
	scanf("%d", &num2);
	
	
	sumar(num1, num2, &resultado);
	
	
	printf("La suma de %d y %d es: %d\n", num1, num2, resultado);
	
	return 0;
}
