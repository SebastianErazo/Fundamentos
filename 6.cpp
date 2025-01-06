#include <iostream>
#include <cstdio> 

bool comparar_caracteres(char ch1, char ch2) {
	return ch1 <= ch2;
}

int main() {
	char ch1, ch2;
	
	printf("Caracter 1\tCaracter 2\tResultado\n");
	
	while (true) {
		printf("Ingrese el primer caracter ('*' para salir): ");
		scanf(" %c", &ch1);
		
		if (ch1 == '*') {
			break;
		}
		
		printf("Ingrese el segundo caracter: ");
		scanf(" %c", &ch2);
		
		bool resultado = comparar_caracteres(ch1, ch2);
		
		printf("%c\t\t%c\t\t%s\n", ch1, ch2, resultado ? "verdadero" : "falso");
	}
	
	return 0;
}
