
#include <stdio.h>

int main(int argc, char const *argv[]) {

    long vnd;
    float usd;
    const int EXC_RATE=22150;
    printf("input number of money that u want to convert \n" );

    scanf("%ld", &vnd );
    usd=(float) vnd/EXC_RATE ;
    printf("money converted to usd: %f\n",usd );
return 0;
}
