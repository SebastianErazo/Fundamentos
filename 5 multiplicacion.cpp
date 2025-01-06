#include <iostream>
#include <iomanip>

int producto(int A, int B){
	int resultado=0;
	for(int i=0; i<B; i++){
		resultado += A;
	}
	return resultado;
}
	
	int main(){
		int A, B;
		printf("Ingrese el valor de A(ENTERO POSITIVO):");
		scanf("%d", &A);
		printf("Ingrese el valor de B(ENTERO POSITIVO):");
		scanf("%d", &B);
		
		if(A<0 || B<0){
			printf("Ambos valores deben ser positivos:");
			return 1;
		}
		
		int resultado = producto(A, B);
		printf("A\tB\tproducto\n");
		printf("&d\t%d\t%d\n", A, B, resultado);
		
		return 0;
	}
