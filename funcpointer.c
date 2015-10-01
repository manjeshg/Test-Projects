#include <stdio.h>

typedef int (*add)(int a, int b);
typedef int (*sub)(int a, int b);

struct data {
  int val;
  add addition;
  sub subtraction;
};

int addition(int a, int b){
  return (a + b);
}

int subtraction(int a, int b){
  return (a - b);
}

void compute(struct data *dat){
  struct data *var = dat;
  printf("Value that was assigned = %d", var->val);
  var->addition = &addition;
  var->subtraction = &subtraction;
}

int main(){
  int val;
  struct data calldata;
  calldata.val = 100;
  compute(&calldata);
  val = calldata.addition(4, 4);
  printf("add =%d\n", val);
  val = calldata.subtraction(4, 4);
  printf("sub =%d\n", val);
  system("pause");
}
 