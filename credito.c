#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int antig;
	int sueldo;
	int x;
	
	puts("Ingresa la antiguedad del empleado");
	scanf("%d", &antig);
	puts("Ingresa el sueldo mensual");
	scanf("%d", &sueldo);
	
	x=(sueldo * 100)/10;
	
	if(antig>=5){
		puts("El empleado cumple el primer requisito");
		
		if(x>=10000){
			puts("El empleado cumple con el segundo requisito");
		}
	}
	puts("Fin del programa");
	system("pause");
	return 0;
}
