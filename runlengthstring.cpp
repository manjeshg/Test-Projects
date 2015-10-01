#include <iostream>
#include <stdio.h>
using namespace std;
  
char* runlength(char *ch){
  char* temp;
  
  temp = ch;
  int count = 1;
  char init;
  char* val = ch;
  char* dest = malloc(sizeof(
  while(temp != NULL) {
    init = *temp;
	temp++;
    if(init	== *temp) {
	  count++;
	}
	else {
	  count = 1;
	}
	*val = count;
	val++;
	*val = init;
	val++;
  
  }
  
  printf("value = %s", val);
}

int main()
{
  char str[] = "aaabbccddeeeee";
  getchar();
  runlength(str);
  return 0;
}