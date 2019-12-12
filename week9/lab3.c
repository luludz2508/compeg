#include <stdio.h>

int modulus(int i1, int i2){
    int divided, left;
    divided = i1/i2;
    left =  i1 - divided * i2;
    return left;
}


int main(int argc, char const *argv[]) {
    int i1, i2;
    printf("Input i1, i2 please : ");
    scanf("%d[^\n] %d",&i1, &i2);
    printf("The rusult is : %d", modulus(i1, i2) );
    return 0;
}
