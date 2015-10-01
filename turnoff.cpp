#include <iostream>
#include <stdio.h>

using namespace std;

/*
int main(){

  int n, k;
  n = 15, k = 1;

  cout << "after turning off Kth bit" << (n & ~(1 << (k-1)));  

  getchar();
  return 0;  
}  
*/
  
int main(){

  int n, k, bits;
  n = 68, k = 1;

  bits = sizeof(n) * 8;
  while( k != bits){
    if(n & (1 << (k - 1))) {
	  printf("Found %d bit set", k);
	}
    k++;
  }
  
	
  getchar();
  return 0;  
}    