#include <stdio.h>
#include <stdlib.h>

main(){
	
	int w= 9;
	int x= 3;
	int y= 7;
	int z= -2;
	
	printf(" %d\n", x < y && w > z);
	printf(" %d\n", x >= w ^ z == y);
	printf(" %d\n", y <= x || x == 3);
	printf(" %d\n", y > z && z < x);
	printf(" %d\n", ! w !=9);
	
	system("pause");
	return 0;
}
