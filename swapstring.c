#include <stdio.h>


void myswap(char* source, char* dest)
{
  char ch;
  printf("source = %s\n", source);
  printf("dest = %s\n", dest);
  while(source++ != '\0'){
    ch = *dest;
	*dest = *source;
	*source = ch;
	dest++;
  }
/*  while(dest != '\0'){
    *source = *dest;
	dest++;
	source++;
  }*/
  *source = '\0';
  *dest = '\0';
}

void main(){
  char src[256];
  char dest[256];
  printf("Enter source\n");
  fgets(src, 256, stdin);
  printf("Enter dest\n");
  fgets(dest, 256, stdin);
  myswap(src, dest);
  system("pause"); 
}  

  
  