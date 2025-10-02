/* Task description:
A twin prime is a prime number that is either 2 less or 2 more than another prime number - for example, either member of the twin prime pair (41, 43). 
In other words, a twin prime is a prime that has a prime gap of two.

The first couple of twin primes are (3, 5), (5, 7) and (11, 13). Write a C program to find the 60th twin prime! 
Extend the program to check whether the number between the twin primes has any digit equal to 5. 
Avoid code duplication, use functions wherever reasonable! Follow the top-down design methodology.
Top-down: when solving programming problems by breaking them down into smaller and smaller sub-problems until each one is trivial or known

*/


#include <stdio.h>
int prime(int x){
  int sum = 0;
  for(int i = 2; i < x; i++){
    if(x%i==0){
      sum += 1;
    }else{
      sum += 0;
    }
  }
  if(sum == 0){
    return 1;

  }else{
    return 0;
  }
}

int five(int x){
  int n, sum;
  sum = 0;
  while(x > 0){
    n = x % 10;
    if(n == 5){
      sum++;
    }
    x = x/10;
  }

  if(sum>0){
    return 1;
  }else{
    return 0;
  }
}

int main(){

  int counter = 0;
  int i= 3;
  while(counter < 60){
    
    if(prime(i)==1 && prime(i+2)==1){
      printf("%d, %d\n", i, i+2);
      if(five(i+1)== 1){
        printf("FIVE\n");
      }
      i++;
      counter++;
      
    }else{
      i++;
    }
  
  }

  printf("%d", counter);

    

  return 0;
}
