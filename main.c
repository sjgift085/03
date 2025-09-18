#include <stdio.h>
#include <stdlib.h>

int main(void){
	char c;
	int i;
	
	printf("input a number : ");
	scanf("%c", &c);

    i = c;
	printf("The input number is %i\n", i);

    system("pause");
	return 0;

}
