#include <stdio.h>

typedef struct{
  double x;
  double y;
} point;

typedef struct {
  point low_left;
  point up_right;
} rect;
double rectarea( rect rec) {
  return 
}

int main(int argc, char const *argv[]) {
  point test1={2,2};
  point test2={4,4};
  rect( test1, test2);
  printf("Area is %lf\n", rectarea(rect));
  return 0;
}
