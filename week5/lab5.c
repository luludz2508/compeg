#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[]) {
  int arr[]= {12,7,-3,4,1}, *p=arr ;
  // a./ Print the elements in the normal order
while( p<= &arr[4]){
    printf("%d\t ", *p ); p++;
  }
  p+=4;
  // b./ Print the elements in the reverse order
  while ( p >= &arr[0] ){
    printf("%d\t ", *p); p--;
  }
  return 0;
}
