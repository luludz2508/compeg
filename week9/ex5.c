#include <stdio.h>
#include <math.h>

float pointdist (float x1, float x2, float y1, float y2){
  float distance;
  distance = sqrt((pow((x1-x2),2))+(pow((y1-y2),2)));
  printf("%f\n", distance);
  return 0;
}

int main(int argc, char const *argv[]) {
  float a1,a2,b1,b2;
  printf("Please input point A and B as (x,y): " );
  scanf("(%f,%f)(%f,%f) ", &a1,&b1,&a2,&b2 );
  pointdist(a1, a2, b1, b2);
  return 0;
}
