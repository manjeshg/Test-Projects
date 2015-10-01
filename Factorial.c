#include <stdio.h>

int fact(int a){
  if(a == 1)
    return 1;
  else
    a * fact(a-1);
}

void main(){
  int a;
  printf("Enter num\n");
  scanf("%d", &a);
  printf("Factorial of number %d is %d", fact(a));
  system("pause"); 
}  
