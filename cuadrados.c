#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int x=1;
	int cuadr=1;
	int cubo=1;
	
	while(x<=500){
	
	cuadr=x*x;
	cubo=x*x*x;
	printf("%d", x, cuadr, cubo"%n");
	x++;
	}
	system("pause");
	return 0;
}
