#include <stdio.h>

float power(float base, int ex){
    float answer =1 ;
    if (ex >0){

        for (int i=1; i<= ex; i ++){

            answer = answer * base;
        }
    } else if (ex <0){

        for ( int i=1; i <= ex*(-1); i ++){

            answer = answer / base;
            printf("%f\n", base);
        }
    } else {  answer = 1 ;}
    return answer;
}


int main(int argc, char const *argv[]) {
    float base;
    int ex;
    printf("Please input base and exponent: " );
    scanf("%f %d", &base, &ex);

    printf("The answer is : %f", power(base, ex));
    return 0;
}
