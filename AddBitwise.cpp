#include <iostream>
#include <stdio.h>

using namespace std;
int Addnumber(int x, int y){
  if(y == 0)
    return x;
  else
    Addnumber(x^y, (x&y)<<1);

}

int Subnumber(int x, int y){
  if(y == 0)
    return x;
  else
    Subnumber(x^y, (~x&y)<<1);

}

int main(){

  int a, b;
  a = 12, b = 20;
  //cout << "added number" << Addnumber(a^b, (a&b)<<1);
  cout << "subtract number" << Subnumber(a^b, (~a&b)<<1);  
  //printf("Enter any key to continue\n");
  //scanf("%d",&i);
  getchar();
  return 0;  
}  

  
  