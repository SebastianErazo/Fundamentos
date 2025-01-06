#include <stdio.h>

typedef struct {
	int anio;
	int mes;
	int dia;
} Fecha;


int es_bisiesto(int anio) {
	return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}


int dias_en_mes(int mes, int anio) {
	switch (mes) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		return 31;
	case 4: case 6: case 9: case 11:
		return 30;
	case 2:
		return es_bisiesto(anio) ? 29 : 28;
	default:
		return 0;
	}
}


int convertir_a_dias(Fecha fecha) {
	int total_dias = 0;
	

	for (int i = 0; i < fecha.anio; i++) {
		total_dias += es_bisiesto(i) ? 366 : 365;
	}
	

	for (int i = 1; i < fecha.mes; i++) {
		total_dias += dias_en_mes(i, fecha.anio);
	}
	

	total_dias += fecha.dia;
	
	return total_dias;
}

int diferencia_dias(Fecha fecha1, Fecha fecha2) {
	int dias1 = convertir_a_dias(fecha1);
	int dias2 = convertir_a_dias(fecha2);
	return dias2 - dias1;
}

int main() {
	Fecha fecha1, fecha2;
	

	printf("Ingrese la primera fecha (formato: anio/mes/dia): ");
	scanf("%d/%d/%d", &fecha1.anio, &fecha1.mes, &fecha1.dia);
	

	printf("Ingrese la segunda fecha (formato: anio/mes/dia): ");
	scanf("%d/%d/%d", &fecha2.anio, &fecha2.mes, &fecha2.dia);
	

	int dias_diferencia = diferencia_dias(fecha1, fecha2);
	

	printf("\nFecha 1: %04d/%02d/%02d\n", fecha1.anio, fecha1.mes, fecha1.dia);
	printf("Fecha 2: %04d/%02d/%02d\n", fecha2.anio, fecha2.mes, fecha2.dia);
	printf("Diferencia en días: %d días\n", dias_diferencia);
	
	return 0;
}
