#include <stdio.h>

int multiplo(int a, int b) {
	if (b == 0) {
		return 0;
	}
	return (a % b == 0);
}

int main() {
	int num1, num2;
	
	printf("Numero 1\tNumero 2\tResultado\n");
	
	while (1) {
		
		printf("Ingresar el primer numero (o 0 para salir): ");
		scanf("%d", &num1);
		
		
		if (num1 == 0) {
			break;
		}
		
		
		printf("Ingresar el segundo numero: ");
		scanf("%d", &num2);
		
		
		int resultado = multiplo(num1, num2);
		
		
		printf("%d\t\t%d\t\t%s\n", num1, num2, resultado ? "verdadero" : "falso");
	}
	
	return 0;
}
