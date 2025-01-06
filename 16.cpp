#include <stdio.h>
#include <math.h>

double hipotenusa(double lado1, double lado2) {
	return sqrt((lado1 * lado1) + (lado2 * lado2));
}

int main() {
	int n;
	double lado1, lado2;
	
	printf("¿Cuántos triángulos deseas calcular?: ");
	scanf("%d", &n);
	
	printf("\n%-10s %-10s %-10s %-10s\n", "Triángulo", "Lado 1", "Lado 2", "Hipotenusa");
	printf("---------------------------------------------------\n");
	
	for (int i = 1; i <= n; i++) {
		printf("\nTriángulo %d:\n", i);
		
		printf("Ingrese el primer lado: ");
		scanf("%lf", &lado1);
		
		printf("Ingrese el segundo lado: ");
		scanf("%lf", &lado2);
		
		double h = hipotenusa(lado1, lado2);
		
		printf("%-10d %-10.2lf %-10.2lf %-10.2lf\n", i, lado1, lado2, h);
	}
	
	return 0;
}
