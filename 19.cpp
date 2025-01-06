#include <stdio.h>
#include <math.h>


int esTriangulo(int a, int b, int c) {
	return (a + b > c) && (a + c > b) && (b + c > a);
}


void tipoTriangulo(int a, int b, int c) {
	if (a == b && b == c) {
		printf("El triángulo es equilátero.\n");
	} else if (a == b || a == c || b == c) {
		printf("El triángulo es isósceles.\n");
	} else {
		printf("El triángulo es escaleno.\n");
	}
}


double areaTriangulo(int a, int b, int c) {
	double s = (a + b + c) / 2.0;
	return sqrt(s * (s - a) * (s - b) * (s - c));
}

int main() {
	int a, b, c;
	

	printf("Ingrese las longitudes de los tres lados del triángulo: ");
	scanf("%d %d %d", &a, &b, &c);
	

	if (esTriangulo(a, b, c)) {
		printf("Los valores forman un triángulo.\n");
		tipoTriangulo(a, b, c);
		printf("El área del triángulo es: %.2f\n", areaTriangulo(a, b, c));
	} else {
		printf("Los valores no forman un triángulo.\n");
	}
	
	return 0;
}
