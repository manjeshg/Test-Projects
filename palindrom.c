#include <stdio.h>


void main(){
  int num = 0, temp = 0, rev = 0;
  printf("Enter number\n");
  scanf("%d", &num);
  temp = num;
  while( temp != 0 ) {
    rev = rev + (temp % 10);
	rev = rev * 10;
	temp = temp / 10;
  }
  rev = rev / 10;  
  printf("entered number = %d\n", num);
  printf("reverse number = %d\n", rev);
  if(rev == num) 
    printf("its a palindrom\n");
  else
	printf("not a palindrom\n");
  
  system("pause"); 
}  
  
  