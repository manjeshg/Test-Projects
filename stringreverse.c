#include <stdio.h>
#include <string.h>

/* String Reverse Coding Task */
void string_reverse1(char *string)
{
  char rev[256];
  char *temp = &rev[0];
  int len = 0, j = 0;
  memset(&rev, '\0', sizeof(rev));
  printf("Entered string: %s\n", string);
  len = strlen(string);
  
  while(len >= 0){
    rev[j] = string[len-1];
	len--;
	j++;
  }  
  printf("1st implementation - Reversed string: %s\n\n", temp);
}

char *string_reverse2(const char *string)
{
  char rev[256];
  char *temp = &rev[0];
  int len = 0, j = 0;
  memset(&rev, '\0', sizeof(rev));
  printf("Entered string: %s\n", string);
  len = strlen(string);

  while(len >= 0){
    rev[j] = string[len-1];
	len--;
	j++;
  }
  return temp;
}

void main(){
  char val[256];
  printf("Enter a string: \n");
  fgets(val, 256, stdin);
  /* First implementation */  
  string_reverse1(val);
  /* Second implementation */
  printf("2nd implementation - Reversed string: %s\n\n", string_reverse2(val)); 
  system("pause"); 
}  

  
  