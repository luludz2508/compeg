#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    char isbn[30];
    int isbn1, isbn2, isbn3, isbn4, isbn5;
    int number=0, hyphen=0;
    char isbnfirst[30];
    int j=0, problem=0;
top:
    printf("Please input ISBN number!");
    scanf("%s", isbn);
    sscanf(isbn ,"%d-%d-%d-%d-%d", &isbn1, &isbn2, &isbn3, &isbn4, &isbn5);

// First condition
    if ( strlen(isbn) >17 ){
        printf(" This is not an ISBN number!3 \n");
        goto top;
    }

//

    for(int i=0; i<=17; i++){
        if ( isbn[i]==isbn[i+1]=='-'){
            printf(" This is not an ISBN number!1 ");
            goto top;
        }
        if (isdigit(isbn[i])) {
            number ++;
            isbnfirst[j]=isbn[i];
            j++;
        } else if (isbn[i]=='-'){
            hyphen ++;
        }
    }
    if (number != 13 || hyphen !=4) {
        printf(" This is not an ISBN number!3 \n");
        goto top;
    }
//

// Second condition
    printf("%s\n", isbnfirst);
    long int digits;
    sscanf(isbnfirst ,"%ld", &digits);
    printf("The value of x : %ld \n", digits);

    // Sum of 13 digits
    unsigned long int sum=0;
    for (long int i=1; i>0; i--)
    {   printf("%ld\n", i);
    printf ( "%ld %ld \n", sum, digits);
        unsigned long currentnumber= digits / ( 10^i );
        digits = digits % ( 10^i );
        sum += currentnumber;

        printf ( "%ld %ld %ld\n", sum, digits, currentnumber);
    }



    return 0;

}
