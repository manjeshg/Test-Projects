#include <stdio.h>


void main(){
  unsigned int num;
  unsigned int numofBits;
  unsigned int i = 0, temp = 0, rev = 0;
  char val[sizeof(num)*8];
  printf("Enter the number to be reversed: \n");
  scanf("%d", &num);
  numofBits = sizeof(num) * 8;
  //temp = numofBits;
  printf("entered number = %u\n",num);
  for(i = 0 ; i < numofBits ; i++) {
    temp = (num & (1 << i));
    if(temp){
	  rev |= (1 << ((numofBits - 1) - i));
	  val[i] = 1;
	}
	else
	  val[i] = 0;
  }
  printf("%u\n", rev);
  for(i = 0 ; i < numofBits ; i++){
    printf("%d", val[i]);
  }
  system("pause"); 
}  

  
 0000 0010
 0100 0000 