#include <stdio.h>
#include <string.h>

char * reverse(char *str){
  int i = 0, j = 0, l = 0;
  l = strlen(str) - 1;
  for(i = 0 ; i < l / 2 ; i++){
    str[i] = str[i] ^ str [l - i];
    str[l - i] = str[l - i] ^ str [i];
	str[i] = str[i] ^ str [l - i];
  }
  return str;  
}

void main(){
  char str[] = "this is a good program";

  printf("reverse = %s", reverse(str));
  system("pause"); 
}  

  
  