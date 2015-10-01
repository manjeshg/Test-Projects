#include <stdio.h>


class Base {
  public:
  virtual void funcA(){printf("I am base funcA\n");};
  virtual void funcB(){printf("I am base funcB\n");};
};

class D1:public Base {
  public:
  virtual void funcA(){printf("I am D1:funcA\n");};
};

class D2:public Base {
  public:
  virtual void funcB(){printf("I am D2:funcB\n");};
};

int main(){
  int i;
  Base *B;
  Base base;
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

  
  