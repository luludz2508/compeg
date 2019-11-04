#include <stdio.h>
int main(int argc, char const *argv[]) {
repeat:
    printf("Please input any number in range 0-1000\n" );
    int number, a, a2, b, c, result;
    scanf("%d",&number );
    a=number/100;
    a2=number%100;
    b=a2/10;
    c=a2%10;
    result=a+b+c;
    if (number>0 && number<1000){
        printf("the sum of all the digits in %d is %d\n",number, result );
    }
    else{printf("invalid\n" );
    goto repeat;}


    return 0;
}
