#include<stdio.h>


union data{
  int num;
  char cNum[sizeof(int)];
};
void main(){
  int i;
  union data dat;
  dat.num = 0x01020304; 
  
  for(i = 0; i < 4; i++){
    printf("%d\n", dat.cNum[i]);
  }  
  
  (dat.cNum[0] == 0x04) ? printf("little endian\n") : printf("big endian\n");  
  system("pause");
}
//Least significant byte is stored in the lower address hence it is little endian.
