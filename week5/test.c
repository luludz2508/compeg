#include <stdio.h>
#include <ctype.h>
int main() {
    char isbn[30];
    int isbn1, isbn2, isbn3, isbn4, isbn5;
top:
    printf("Please input ISBN number!");
    scanf("%s", isbn);
    sscanf(isbn ,"%d-%d-%d-%d-%d", &isbn1, &isbn2, &isbn3, &isbn4, &isbn5);
    printf("%d %d %d %d %d\n", isbn1, isbn2, isbn3, isbn4, isbn5);
    printf("%s\n",isbn );
// First condition
    int number=0, hyphen=0;
    char isbnfirst[30];
    int j=0;
    for(int i=0; i<=17; i++){
        if ( isbn[i]==isbn[i+1]=='-'){
            printf(" This is not an ISBN number! ");
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
        printf(" This is not a ISBN number! ");
        goto top;
    }
    printf("%s\n", isbnfirst);
    long int digits;
    sscanf(isbnfirst ,"%ld", &digits);
    printf("The value of x : %ld", digits);

    // Sum of 13 digits
    int sum=0;
    for (int i=12; i=1; i--)
    {
        if (i%2==1){sum=sum+(digits/(10^i));}
        else {sum=sum+(digits/(10^i))*3;}

    printf("%d\n", sum);
    }
    return 0;
}
