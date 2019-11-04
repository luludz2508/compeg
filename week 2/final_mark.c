#include <stdio.h>
int main(int argc, char const *argv[]) {
    float mark1;
    float mark2;
    float mark3;
    float final;
    const float w1=0.3;
    const float w2=0.3;
    const float w3=0.4;

// Input marks
    printf("Please input marks of 3 asm:");
    scanf("%f%f%f",&mark1 ,&mark2 ,&mark3 );

// Calculate final test
    if (0<=mark1 && mark1<=100 && 0<=mark2 && mark2<=100 && 0<=mark3 && mark3<=100) {
        final= mark1*w1 + mark2*w2 + mark3*w3;
        printf("the final grade is : %0.2f\n",final );
    }
    else {printf("invalid\n");
}

    return 0;
}
