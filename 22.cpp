#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


bool es_bisiesto(int anio) {
	return (anio % 4 == 0 && (anio % 100 != 0 || anio % 400 == 0));
}


bool validar_fecha(int anio, int mes, int dia) {
	if (anio < 1 || mes < 1 || mes > 12 || dia < 1) {
		return false;
	}
	
	int dias_en_mes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (es_bisiesto(anio)) {
		dias_en_mes[1] = 29;
	}
	
	return dia <= dias_en_mes[mes - 1];
}


void fecha_siguiente(int *anio, int *mes, int *dia) {
	int dias_en_mes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	
	if (es_bisiesto(*anio)) {
		dias_en_mes[1] = 29;
	}
	
	(*dia)++;
	if (*dia > dias_en_mes[*mes - 1]) {
		*dia = 1;
		(*mes)++;
		if (*mes > 12) {
			*mes = 1;
			(*anio)++;
		}
	}
}


void imprimir_fecha_en_palabras(int anio, int mes, int dia) {
	const char *meses[] = { "enero", "febrero", "marzo", "abril", "mayo", "junio", 
		"julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre" };
	printf("%d de %s de %d\n", dia, meses[mes - 1], anio);
}

int main() {
	int anio, mes, dia;
	printf("Ingrese la fecha en formato año/mes/día: ");
	if (scanf("%d/%d/%d", &anio, &mes, &dia) != 3) {
		printf("Formato de fecha no válido.\n");
		return 1;
	}
	
	if (validar_fecha(anio, mes, dia)) {
		fecha_siguiente(&anio, &mes, &dia);
		printf("La fecha del día siguiente es: ");
		imprimir_fecha_en_palabras(anio, mes, dia);
	} else {
		printf("Fecha no válida. Por favor, ingrese una fecha correcta.\n");
	}
	
	return 0;
}
