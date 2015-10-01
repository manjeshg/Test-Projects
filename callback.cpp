#include <stdio.h>
#include <iostream>	

/* Callback Interface */
class CallbackInterface {
  public:
    virtual void callback1() = 0;
	virtual void callback2() = 0;
	virtual void callback3() = 0;
};

class myclass:CallbackInterface{
  public:
    void callback1(){printf("callback 1");};
    void callback2(){printf("callback 2");};
    void callback3(){printf("callback 3");};
};

class caller {
  public:
    void registerCallback(myclass *callee){cal = callee;};
  public:
    myclass *cal;
};

int main(){
  caller call;
  myclass imp;
  call.registerCallback(&imp);
  call.cal->callback2();
  getchar();  
  return 0;  
}  

  
  