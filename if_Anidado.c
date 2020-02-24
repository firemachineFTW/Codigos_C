#include <stdio.h>
#include <stdlib.h>

int main(){
	int numero= 55;
	if(numero < 100){
		printf("El numero es par\n");
		if(numero > 50){
			printf("Y mayor que 50\n");
		}
	}
	printf("Fin del programa\n");
	
	
	int numero2= 35;
	if(numero2 < 100){
		printf("El numero es par\n");
		if(numero2 > 50){
			printf("Y mayor que 50\n");
		}
	}
	printf("Fin del programa\n");
	system("pause");
	return 0;
}
