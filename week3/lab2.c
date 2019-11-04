#include <stdio.h>
int main(int argc, char const *argv[]) {
    printf("(please input 3 float number)\n" );
    float a, b, c;
    scanf("%f%f%f", &a , &b , &c );

    if (a>b && a>c) {
        printf("%0.2f is biggest float number\n", a);
    }
    else if (c>b && c>a){
        printf("%0.2f is biggest float number\n", c);
    }
    else printf("%0.2f is biggest float number\n", b);


    return 0;
}
