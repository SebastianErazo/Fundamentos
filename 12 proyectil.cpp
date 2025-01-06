#include <stdio.h>
#include <math.h> 

#define ITERACIONES 10 

// Funci�n para calcular seno usando la serie de Taylor
double calcular_seno(double angulo) {
	double term = angulo;
	double sum = angulo;
	
	for (int n = 1; n < ITERACIONES; n++) {
		term *= -angulo * angulo / ((2 * n) * (2 * n + 1));
		sum += term;
	}
	return sum;
}

// Funci�n para calcular la altura m�xima de un proyectil
double valor_h(double velocidad, double angulo, double gravedad) {
	double seno_angulo = calcular_seno(angulo);
	return (velocidad * velocidad * seno_angulo * seno_angulo) / (2 * gravedad);
}

int main() {
	int n;
	printf("�Cu�ntos conjuntos de datos deseas ingresar?: ");
	scanf("%d", &n);
	
	double velocidad, angulo, gravedad;
	
	printf("\n%-10s %-10s %-10s %-15s\n", "Velocidad", "Angulo", "Gravedad", "Altura M�xima");
	printf("%-10s %-10s %-10s %-15s\n", "(m/s)", "(rad)", "(m/s^2)", "(m)");
	printf("-----------------------------------------------------\n");
	
	for (int i = 0; i < n; i++) {
		printf("\nConjunto %d\n", i + 1);
		
		printf("Ingrese la velocidad de proyecci�n (m/s): ");
		scanf("%lf", &velocidad);
		
		printf("Ingrese el �ngulo de proyecci�n (radianes): ");
		scanf("%lf", &angulo);
		
		printf("Ingrese la aceleraci�n gravitacional (m/s^2): ");
		scanf("%lf", &gravedad);
		
		double altura = valor_h(velocidad, angulo, gravedad);
		
		printf("%-10.2lf %-10.2lf %-10.2lf %-15.2lf\n", velocidad, angulo, gravedad, altura);
	}
	
	return 0;
}
