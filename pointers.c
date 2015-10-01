#include <stdio.h>


int main(){
  int arr[5] = {1, 2, 3, 4, 5};
  const int *val = &arr[0];
  *val++;

  printf("1th index = %d", *val);
  system("pause");
}
  
  
//int *const val; I cannot do val++ but I can change the value to which it is pointing to (*val = 11)

//const int* val; I can do val++ but I cannot change the value to which it is pointing to (*val = 11 not allowed)




//int *const val;

//const int* val;
//const int* const val;