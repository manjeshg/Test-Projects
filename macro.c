#include <stdio.h>

#define CONC(a, b) a##b

void main(){
  printf("%d", CONC(12,13));
  system("pause"); 
}  

  