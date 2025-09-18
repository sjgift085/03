#include <stdio.h>
#include <stdlib.h>

int main(void){
  
  int a, b;
  
  printf("분자를 입력하세요 : ");
  scanf("%i", &a);
  
  printf("분모를 입력하세요 : ");
  scanf("%i", &b);
  
  float c = a / b;
  printf("%d\n", sizeof(c));
  
  printf("나누기의 결과는 %f 입니다", c); 
  
  
  system("PAUSE");	
  return 0;
}
