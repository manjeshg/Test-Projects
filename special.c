#include<stdio.h>

void main(){
  printf("Please enter a number: ");
  scanf("%d", &nNum);  
  compute(nNum);
  system("pause");
}

int compute(int val) {
  int nNum = 0;
  int nRes = 0;
  int nComp = 0;
  if(val == 10 || val == 01) {
    printf("Entered number %d is a special number\n", val)
    return 
  } else {
    while( nComp != 0 ) {
      nRes += nComp % 10;
	  nComp = nComp / 10;
    }
    (nComp == 1) ? printf("Entered number %d is a special number\n", nNum) : printf("Not a special number\n");
  }
}