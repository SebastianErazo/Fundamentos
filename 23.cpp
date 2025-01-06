#include <stdio.h>
#include <string.h>

void convertirNumeroALetras(int numero, char *resultado);

int main() {
	int numero;
	char resultado[100];
	
	printf("Ingrese un n�mero entre 1 y 999999: ");
	scanf("%d", &numero);
	
	if (numero < 1 || numero > 999999) {
		printf("N�mero fuera de rango.\n");
		return 1;
	}
	
	convertirNumeroALetras(numero, resultado);
	printf("N�mero en letras: %s\n", resultado);
	
	return 0;
}

void convertirNumeroALetras(int numero, char *resultado) {
	
	char *unidades[] = {"", "uno", "dos", "tres", "cuatro", "cinco", "seis", "siete", "ocho", "nueve"};
	char *decenas[] = {"", "diez", "veinte", "treinta", "cuarenta", "cincuenta", "sesenta", "setenta", "ochenta", "noventa"};
	char *especiales[] = {"diez", "once", "doce", "trece", "catorce", "quince", "diecis�is", "diecisiete", "dieciocho", "diecinueve"};
	char *centenas[] = {"", "cien", "doscientos", "trescientos", "cuatrocientos", "quinientos", "seiscientos", "setecientos", "ochocientos", "novecientos"};
	
	int mil = numero / 1000;
	int resto = numero % 1000;
	int centena = resto / 100;
	resto = resto % 100;
	int decena = resto / 10;
	int unidad = resto % 10;
	
	resultado[0] = '\0';
	
	if (mil > 0) {
		if (mil == 1) {
			strcat(resultado, "mil ");
		} else {
			strcat(resultado, unidades[mil]);
			strcat(resultado, " mil ");
		}
	}
	
	if (centena > 0) {
		strcat(resultado, centenas[centena]);
		strcat(resultado, " ");
	}
	
	if (decena > 1) {
		strcat(resultado, decenas[decena]);
		strcat(resultado, " ");
		if (unidad > 0) {
			strcat(resultado, unidades[unidad]);
		}
	} else if (decena == 1) {
		strcat(resultado, especiales[unidad]);
	} else {
		strcat(resultado, unidades[unidad]);
	}
}
