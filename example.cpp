#include<iostream>
#include <stdio.h>
using namespace std;
 
class A
{
  int x;
public:
  A(){cout << "A called";};
  void setX(int i) {x = i;}
  void print() { cout << x; }
};
 
class B:  virtual public A
{
public:
  B(){cout << "B called";};//  { setX(10); }
};
 
class C:  virtual public A  
{
public:
  C(){cout << "C called";};  //{ setX(20); }
};
 
class D: public B, public C {
};
 
int main()
{
    D d;
    d.print();
	getchar();
    return 0;
}