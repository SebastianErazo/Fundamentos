#include <cstdio>
#include <cmath>

float distancia(float x1, float y1, float x2, float y2) {
	return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
	float x1, y1, x2, y2;
	char continuar;
	
	do {
		printf("Ingrese x1: ");
		scanf("%f", &x1);
		printf("Ingrese y1: ");
		scanf("%f", &y1);
		printf("Ingrese x2: ");
		scanf("%f", &x2);
		printf("Ingrese y2: ");
		scanf("%f", &y2);
		
		float dist = distancia(x1, y1, x2, y2);
		printf("La distancia entre (%.2f, %.2f) y (%.2f, %.2f) es: %.2f\n", x1, y1, x2, y2, dist);
		
		printf("¿Desea ingresar otro par de puntos? (s/n): ");
		scanf(" %c", &continuar);
	} while (continuar == 's' || continuar == 'S');
	
	return 0;
}
