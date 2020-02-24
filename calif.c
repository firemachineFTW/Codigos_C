#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int calif;
	puts("ingresa tu calificacion");
	scanf("%d", &calif);
	
	if(calif >= 8){
		puts("Felicidades, has aprobado el curso");
	}
	puts("Fin del programa");
	
	system("pause");
	return 0;
	
	
}
