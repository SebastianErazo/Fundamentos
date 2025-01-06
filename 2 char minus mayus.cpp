#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

char processCharacter(char input) {
	if (!isalpha(input)) {
		return '0';
	} else if (islower(input)) {
		return toupper(input);
	} else {
		return input;
	}
}

int main() {
	char input;
	printf("Ingrese un caracter: ");
	scanf(" %c", &input);
	
	char result = processCharacter(input);
	printf("%c\n", result);
	
	return 0;
}
