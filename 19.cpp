#include <stdio.h>
#include <math.h>


int esTriangulo(int a, int b, int c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}


void tipoTriangulo(int a, int b, int c) {
	if (a == b && b == c) {
		printf("El tri�ngulo es equil�tero.\n");
	} else if (a == b || a == c || b == c) {
		printf("El tri�ngulo es is�sceles.\n");
	} else {
		printf("El tri�ngulo es escaleno.\n");
	}
}


double areaTriangulo(int a, int b, int c) {
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	int a, b, c;
	

	printf("Ingrese las longitudes de los tres lados del tri�ngulo: ");
	scanf("%d %d %d", &a, &b, &c);
	

	if (esTriangulo(a, b, c)) {
		printf("Los valores forman un tri�ngulo.\n");
		tipoTriangulo(a, b, c);
		printf("El �rea del tri�ngulo es: %.2f\n", areaTriangulo(a, b, c));
	} else {
		printf("Los valores no forman un tri�ngulo.\n");
	}
	
	return 0;
}
