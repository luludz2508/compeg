#include <stdio.h>
int main(int argc, char const *argv[]) {
    int first=0, second=1, sum, i, j, number;

    int Fib[50];
    printf("Number of Fibonaccis int u want to know from 0 to 50? : " );
    scanf("%d", &number);

    for (i=0; i<=number; i++ ) {
        printf("%d, ", first);
        sum= first+ second;
        first=second;
        second= sum;
    }
printf("\n");
    return 0;
}
