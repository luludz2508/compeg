#include <stdio.h>
int main(int argc, char const *argv[]) {
  unsigned long fib[50]; //unsigned long is better o hold long data which int cannot
  fib[1]=0;
  fib[2]=1;
  // Initialize and print the first 2 Fibonacci numbers
  printf("fib[%d] = %lu\n",1, fib[1] );
  printf("fib[%d] = %lu\n",2, fib[2] );

  // Calculate the Fibonaccis Number
  for (int n=3; n<=50; n++){
    fib[n]=fib[n-1]+fib[n-2];
    printf("fib[%d]= %ld\n", n,fib[n]);
  }



  return 0;
}
