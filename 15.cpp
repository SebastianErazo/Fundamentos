#include <stdio.h>


double calcular_lado_izquierdo(int n) {
	double suma = 0;
	for (int i = 2; i <= n; i++) {
		suma += (n - i + 2);
	}
	return n + suma;
}


double calcular_lado_derecho(int n) {
	return (n * n / 2.0) + (3 * n / 2.0) - 1;
}


int verificar_relacion(int n) {
	double lado_izquierdo = calcular_lado_izquierdo(n);
	double lado_derecho = calcular_lado_derecho(n);
	
	
	return (lado_izquierdo == lado_derecho);
}

int main() {
	int n;
	

	printf("Ingrese un valor entero para n: ");
	scanf("%d", &n);
	

	if (verificar_relacion(n)) {
		printf("La relación es verdadera para n = %d.\n", n);
	} else {
		printf("La relación es falsa para n = %d.\n", n);
	}
	
	return 0;
}
