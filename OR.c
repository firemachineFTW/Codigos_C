#include <stdio.h>
#include <stdlib.h>

main(){
	
	printf("*****AND*****");
	printf("true && true : %d\n", (1&&1));
	printf("true && false : %d\n", (1&&0));
	printf("false && true : %d\n", (0&&1));
	printf("false && false : %d\n", (0&&0));
	
	printf("*****OR*****");
	printf("true || true : %d\n", (1||1));
	printf("true || false : %d\n", (1||0));
	printf("false || true : %d\n", (0||1));
	printf("false || false : %d\n", (0||0));
	
	printf("*****XOR*****");
	printf("true ^ true : %d\n", (1^1));
	printf("true ^ false : %d\n", (1^0));
	printf("false ^ true : %d\n", (0^1));
	printf("false ^ false : %d\n", (0^0));
	
	system("pause");
	return 0;
}
