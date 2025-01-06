#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>


int calidad_puntos(float prom) {
	if (prom >= 90 && prom <= 100) {
		return 4;
	} else if (prom >= 80 && prom <= 89) {
		return 3;
	} else if (prom >= 70 && prom <= 79) {
		return 2;
	} else if (prom >= 60 && prom <= 69) {
		return 1;
	} else if (prom < 60) {
		return 0;
	}
	return -1; // Valor por defecto si no entra en ningún rango (aunque no debería ocurrir).
}

int main() {
	float prom;
	
	
	printf("Ingrese el promedio: ");
	scanf("%f", &prom);
	
	
	int puntos = calidad_puntos(prom);
	
	
	if (puntos != -1) {
		printf("%d\n", puntos);
	} else {
		printf("Promedio invalido\n");
	}
	
	return 0;
}
