#include <stdio.h>
int main() {
top:
    printf("Please input the final mark, i will show you the result\n" );
    float mark;
    scanf("%f",&mark );
    if ( mark<0 || mark>100)
    {
        printf("Error\nPlease input again\n");
        goto top;
    }
    else
    {

        if (mark<50)
             printf("You got NN\n" );
        else if (mark<60) {
            printf("You got PA\n" );
        }
        else if (mark<70) {printf("You got CR\n" );
        }
        else if (mark<80) {printf("You got DI\n" );
        }
        else {printf("You got HD\n");
        goto top;
        }
    }
}
