#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base {
  public:
  Base() : a(10), b(20){}  
  Base(const Base &b) {printf("copy constructor\n");}
  Base& operator = (const Base &b) {printf("operator constructor\n");}
  private:
  int a, b;
};




int main(){
  Base b, d;
  d = b; //operator
  Base c(b); //copy constructor
  getchar();
  return 0;  
}  

  
 