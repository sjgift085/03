#include <stdio.h>
#include <stdlib.h>

int main(void){
    
    char alp;
    int alp_num;
    char alp_next;
    int alp_next_num;
    
	printf("enter an character : ");
	scanf("%c", &alp);
	
	alp_num = alp;
	alp_next_num = alp_num + 1;
	alp_next = alp_next_num;

	printf("the next character of %c (%i) is %c (%i)\n", alp, alp_num, alp_next, alp_next_num);

    system("pause");
	return 0;

}
