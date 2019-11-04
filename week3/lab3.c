#include <stdio.h>
int main(int argc, char const *argv[]) {
    int number=0;
    int i;
    int count =0;
    printf("Enter a positive integer\n" );
    scanf("%d", &i);
    while (i>=0)
     {
        number = number +i;
        count +=1;
        printf("Enter a positive integer\n" );
        scanf("%d", &i);


            }
    printf("sum is %d\n", number );
    printf("There is %d positive number\n", count);
    return 0;
}
