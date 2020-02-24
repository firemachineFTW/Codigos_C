#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int HST;
	int PH;
	int x;
	
	puts("ingresa las horas semanales trabajadas");
	scanf("%d", &HST);
	puts("ingresa el precio por hora");
	scanf("%d", &PH);
	
	if(HST<=40){
		x=(PH*40);
	}else{
		x=(40*PH+(PH*1.5*(HST-40)));
	}
	printf("El sueldo es %d\n",x);
	system("pause");
	return 0;
}
