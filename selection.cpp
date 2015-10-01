#include <stdio.h>


void main(){
  int a, b;
  printf("Enter num1\n");
  scanf("%d", &a);
  printf("Enter num2\n");
  scanf("%d", &b);
  printf("Number entered are %d, %d\n", a, b);
  a = a^b;
  b = a^b;
  a = a^b;
  
  printf("after swap %d, %d\n", a, b);
  system("pause"); 
}  
//  00000001
//  00000010
  
  