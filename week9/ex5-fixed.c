#include <stdio.h>
#include <math.h>

typedef struct{
  double x;
  double y;
} point;

void pointshow(point test){
  printf("[%.2f %.2f]\n", test.x, test.y);
}

double pointdist(point pnt1, point pnt2){
  return sqrt(pow(pnt1.x-pnt2.x,2)+ pow(pnt1.y-pnt2.y,2));  
}

int main(int argc, char const *argv[]) {
  point test= {.25, .75};
  point test2= {.35, .45};
  // pointshow(test);

  printf("Length is : %lf\n", pointdist(test,test2));

  return 0;
}
