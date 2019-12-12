#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Random num: A
void randomnum(int randomnum[]){
  srand(time(0));
  for (int i =0; i <10; i++) {
    randomnum[i] = rand() %101;
  }
}

// Get array and its size from the user B
void size(int arr[], int size) {
  printf("all the element in the array is:   ");
  for (int i=0; i<10;i++){
    printf("%d\t", arr[i]);
  }
  printf("\n");
}

// Arrange the array follow the other C
void print_reverse(int order[], int size){
  printf( "Array in reverse order is:   ");
  for (int i =size-1; i>=0;i--){
    printf("%d\t", order[i]);
  }
  printf("\n");
}

// max D
 int max_num (int  arr4[], int size){
   int max=0;
   for (int i=0; i<10;i++){
     if ( arr4[i] > max ){
       max= arr4[i];
     }
   }
   printf("The biggest int is %d\n", max);
   return max;
 }


// ODD number E
void odd_number(int arr[], int size){
  printf (" ODD numbers are:    ");
  for (int i=0; i <10; i ++){
    if ( arr[i] %2 == 1 ){
      printf("%d \t", arr[i]);
    }
  }printf("\n");
}

// Find number F
int finding (int arr2[], int size, int find){
  for (int i=0; i<10;i++){
    if (arr2[i] == find) {
      return 1;
    }
  }
  return 0;
}
// prime from arr H
void primearr(int arr[], int size) {

  for (int i=0; i <10; i ++){
  int answer = 1;
    for ( int j=2; j < arr[i]; j ++){
      if ( arr[i]  % j ==0){
        answer = 0; continue;
      }
    }
    if ( answer ==1) {
      printf("%d is the prime number \n", arr[i]);
    }
  }
}
// prime numbers G

int primenumber(int declare){
  int answer=1;
  for (int i=2; i< declare;i++){
    if ( declare % i == 0) {
      answer=0;
      break;
    }
  }
  printf(" %d \n", answer);
  return answer;
}


int main(int argc, char const *argv[]) {
  int arr1[10];

// RANDOM A
  randomnum(arr1);
// PRINT B
  size(arr1, 10);
// PRINT RESERVE C
  print_reverse(arr1, 10);
// PRINT MAX NUM D
  max_num(arr1, 10 );

// PRINT ODD NUM E
  odd_number(arr1, 10);

  // Prime from arr  H
    primearr(arr1, 10);

// FIND NUM F
  printf("enter the number u want to find:  " );
  int numfind;
  scanf("%d", &numfind);
  printf(" The answer is %d\n", finding(arr1, 10, numfind));
// ENTER PRIME? NUM G
  printf("Enter the number, if the answer is 1. It is prime \n 0 is not \n Enter number : " );
  int prime;
  scanf("%d", &prime);
  primenumber(prime);
  return 0;
}
