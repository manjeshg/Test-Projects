#include <stdio.h>


class Base {
  public:
    Base(){printf("Base class constructor\n");};
	virtual void test(){}
};

class D1:public virtual Base {
  public:
    D1() : Base(){printf("D1 class constructor\n");}
	virtual void test(){}
};

class D2: public virtual Base {
  public:
    D2() : Base(){printf("D2 class constructor\n");};
};

class D3 : public D1, public D2 {
  public:
    D3()
	: D1(), D2(){printf("D3 constructor called");}
	virtual void test(){}
};

int main(){
  D1 d1;
  D2 d2;
  D3 d3;
  printf(" Base size = %d", sizeof(Base)); //1 //4
  printf(" D1 size = %d", sizeof(D1)); //4 //4
  printf(" D2 size = %d", sizeof(D2)); //4 //4
  printf(" D3 size = %d", sizeof(D3)); //8 //8
  getchar();  
  return 0;  
}  

  
  