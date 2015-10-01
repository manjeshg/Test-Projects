#include <stdio.h>
#include <stdlib.h>
#include <string.h>

class Base {
  public:
    virtual void funcA(){printf("I am base funcA\n");}
    virtual void funcB(){printf("I am base funcB\n");}
  	
  public:
    Base();
    Base(const Base &b);
  private:
    int a;
	int b;
	char* mem;
};

class D1:public Base {
  public:
  virtual void funcA(){printf("I am D1:funcA\n");}
};

class D2:public Base {
  public:
  virtual void funcB(){printf("I am D2:funcB\n");}
};

Base::Base(){
  a = 50;
  b = 60;
  mem = (char*)calloc(1, sizeof(int));
  memcpy(mem, "hell", sizeof(int));
  printf("default const %d %d\n", a, b);
  printf("default const %s", mem);
}

Base::Base(const Base& b){
  a = b.a;
  b = b.b;
//  mem = (char*)calloc(1, sizeof(int));
//  memcpy(mem, b.mem, sizeof(int));
  printf("copy const %d %d\n", a, b);
//  printf("copy const %s", mem);  
}

int main(){
  int i;
  Base *B;
  Base base;
  Base b(base);
  D1 deriv1;
  D2 deriv2;
  B = &deriv1;
  printf("D1 assigned to base pointer\n");
  B->funcA();
  B->funcB();
  printf("D1 assigned to base pointer\n");
  B = &deriv2;
  B->funcA();
  B->funcB();
  printf("Base assigned to base pointer\n");
  B = &base;
  B->funcA();
  B->funcB();
  getchar();  
  //printf("Enter any key to continue\n");
  //scanf("%d",&i);
  return 0;  
}  

  
  