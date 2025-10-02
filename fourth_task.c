/* Task description:
Create a simple menu controlled program! The program stores a number with an initial value of n = 1. Then the program should print the actual value of n and the menu below. After the user selects a menu item (scanf()) the program should do whatever the user requested and print the value of n and the menu! These must be repeated as long as the user chooses anything but the Exit menu option! Use switch() and post-testing do ... while() loop.

printf("0. Restore the initial value (n = 1)\n"
       "1. Add 1\n"
       "2. Negate the number (+/-)\n"
       "3. Multiple by 2\n"
       "9. Exit\n");

Realize each operation in a (tiny) function that receives the value of n as a parameter and returns the modified value! Your main() can only call these functions to change the value of n.

*/


int add(int n){
  return n+1;
}

int negate(int n){
  return -n;
}

int mult(int n){
  return n*2;
}




#include <stdio.h>

int main(){

  int go = 0;
  int n = 1;
  while(go == 0){
  int x;

  printf("0. Restore the initial value (n = 1)\n"
       "1. Add 1\n"
       "2. Negate the number (+/-)\n"
       "3. Multiple by 2\n"
       "9. Exit\n");

  scanf("%d", &x);

  if(x == 0){
    n = 1;
  }else if(x == 1){
    n = add(n);
  }else if(x==2){
    n = negate(n);
  }else if(x==3){
    n = mult(n);
  }else{
    go =1;
  }

  printf("====  %d  ====\n", n);
}

  return 0;
}
