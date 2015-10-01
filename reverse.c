#include<stdio.h>
#include<String.h>

void main(){
  String sent;
  String rev;
  int i = 0, j = 0;
  printf("Enter a string\n");
  scanf("%s", &sent);
  printf("entered sent = %s", sent);
  while(sent[i] != '\0'){
    i++;
  }
  while(i == 0){
    rev[j] = sent[i];
	i--;
	j++;
  }
  rev[j] = '\0';
  printf("reveresed = %s", rev);
  system("pause"); 
}  

  
  