#include <stdio.h>

int tipo_caracter(char c) {
	if (c >= 'A' && c <= 'Z') {
		return 0;
	} else if (c >= 'a' && c <= 'z') {
		return 1;
	} else if (c >= '0' && c <= '9') {
		return 2;
	} else {
		return 3;
	}
}

int main() {
	char c;
	
	printf("Ingrese caracteres (use '*' para terminar):\n");
	
	while (1) {
		printf("Caracter: ");
		scanf(" %c", &c);
		
		if (c == '*') {
			break; 
		}
		
		int tipo = tipo_caracter(c);
		
		switch (tipo) {
		case 0:
			printf("'%c' es una letra mayúscula.\n", c);
			break;
		case 1:
			printf("'%c' es una letra minúscula.\n", c);
			break;
		case 2:
			printf("'%c' es un dígito.\n", c);
			break;
		case 3:
			printf("'%c' es un carácter especial.\n", c);
			break;
		}
	}
	
	printf("Fin del programa.\n");
	return 0;
}
