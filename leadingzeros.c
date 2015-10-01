#include<stdio.h>

void main(){
  char a = 4;
  int i  = 8, count = 0;
  while(i){
    if((a >> i) == 0){
	  count++;
	}
	else
	  break;
    i--;
  }
  printf("Number of leading zeros = %d", count);
  getch();
}

