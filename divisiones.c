#include <stdio.h>
#include <stdlib.h>

int main(){
	
	double num1 = 1;
	double num2 = 3;
	double num3 = 5;
	double num4 = 30;
	double num5 = 23;
	double resul;
	
	resul = (num1/num2)+(num2/num3)+(num1/num4)/(num5/num4);
	
	printf("El resultado de la primera operacion es %4f\n", resul);
	
	double uno = 5;
	double dos = 2;
	double tres = 1;
	double cuatro = 4;
	double ope1;
	double ope2;
	double ope3;
	double ope4;
	
	ope1= (dos)-(tres/cuatro);
	ope2= (tres)+(dos/ope1);
	ope3= (tres/ope2);
	ope4= (uno)+(dos/ope3);
	
	printf("El resultado de la segunda operacion es %2f\n", ope4);
	
	system("pause");
	return 0;
}
