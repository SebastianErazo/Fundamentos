#include <stdio.h>
#include <math.h>

void calcularRaices(double a, double b, double c) {
	if (a == 0) {
		printf("ERROR: El coeficiente 'a' no puede ser 0.\n");
		return;
	}
	
	double discriminante = b * b - 4 * a * c;
	
	if (discriminante < 0) {
		printf("Las ra�ces son complejas.\n");
		double parteReal = -b / (2 * a);
		double parteImaginaria = sqrt(-discriminante) / (2 * a);
		printf("x1 = %.2f + %.2fi\n", parteReal, parteImaginaria);
		printf("x2 = %.2f - %.2fi\n", parteReal, parteImaginaria);
	} else if (discriminante == 0) {
		double raiz = -b / (2 * a);
		printf("La ecuaci�n tiene una ra�z doble: x1 = x2 = %.2f\n", raiz);
	} else {
		double raiz1 = (-b + sqrt(discriminante)) / (2 * a);
		double raiz2 = (-b - sqrt(discriminante)) / (2 * a);
		printf("Las ra�ces de la ecuaci�n son: x1 = %.2f, x2 = %.2f\n", raiz1, raiz2);
	}
}

int main() {
	double a, b, c;
	

	printf("Ingrese el coeficiente a: ");
	scanf("%lf", &a);
	printf("Ingrese el coeficiente b: ");
	scanf("%lf", &b);
	printf("Ingrese el coeficiente c: ");
	scanf("%lf", &c);
	

	printf("La ecuaci�n cuadr�tica es: ");
	if (a != 0) printf("%.2fx^2 ", a);
	if (b >= 0) printf("+ %.2fx ", b);
	else printf("- %.2fx ", -b);
	if (c >= 0) printf("+ %.2f = 0\n", c);
	else printf("- %.2f = 0\n", -c);
	

	calcularRaices(a, b, c);
	
	return 0;
}
