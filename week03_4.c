#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int a, b;
  
  printf("���ڸ� �Է��ϼ��� : ");
  scanf("%i", &a);
  
  printf("�и� �Է��ϼ��� : ");
  scanf("%i", &b);
  
  float c = a / b;
  printf("%d\n", sizeof(c));
  
  printf("�������� ����� %f �Դϴ�", c); 
  
  
  system("PAUSE");	
  return 0;
}
