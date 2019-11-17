#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main() {
    int right;
    while( right !=1 ){
            char isbn[30];
            unsigned long int isbn1, isbn2, isbn3, isbn4, isbn5;
            char isbn2str[5], isbn3str[7], isbn4str[6], isbn5str[2];
            int number=0, hyphen=0;
            char isbnwithouthyphen[30];
            int j=0, problem=0, wrong = 0;
        // scanf the value in int and string type.
            printf ( " Enter an ISBN: ");
            scanf ( "%s" , isbn ); // Scan the whole string contained numbers as char type and hyphens
            sscanf ( isbn  , "%ld-%ld-%ld-%ld-%ld" , &isbn1, &isbn2, &isbn3, &isbn4, &isbn5); // Scan each group of element as int type which seperated by hyphens.
            sprintf ( isbn2str , "%ld" , isbn2 );
            sprintf ( isbn3str , "%ld" , isbn3 );
            sprintf ( isbn4str , "%ld" , isbn4 );
            sprintf ( isbn5str , "%ld" , isbn5 );
        // 1.
            for ( int i=0 ; i <= 17  ; i ++ ) {
                if ( isdigit ( isbn[i] ) ) {
                    number ++ ;
                    isbnwithouthyphen[j] = isbn[i] ;
                    j++ ;
                }
                if ( isbn[i] == '-' ){
                    hyphen += 1 ;
                }
            }
        /////////////////////////SYNTAX ERRRR////////////////////////
            int i =0 ;
            while ( i <= ( strlen( isbn ) - 1 ) ) {
                if ( isbn[i] != '-' ) {
                    if (  isdigit ( isbn[i] ) == 0 ) {
                        printf ( " Invalid ISBN. Input should only contain digits and hyphens.\n" );
                        printf("%d %c \n", i, isbn[i] );
                        wrong = 1 ;
                        break ;
                        }
                } i ++ ;

             }
            if ( wrong == 1 ) {
                continue;
            }
            for ( int i=0 ; i <= 17  ; i ++ ) {
                if ( isbn [i] == '-' && isbn [i+1] == '-' ) {
                    printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                    wrong = 1;
                    break ;
                }
            }
            if ( wrong == 1 ) {
                continue;
            }
            if ( hyphen != 4 ) {
                printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                continue ;
            }
        // Condition check if there is strange character

        // 13 numbers condition
            if ( number < 13 ) {
                printf ( " Invalid ISBN. Less than 13 digits.\n" ); continue;
            } else if ( number > 13 ) {
                printf ( " Invalid ISBN. More than 13 digits.\n" ); continue;
            }

        // 5. Condition for Prefix element.
            if ( isbn1 != 978 && isbn1 != 979 ) {
                printf ( " Invalid ISBN. Prefix element must be either 978 or 979.\n" ); continue;
            }
        // 6. Condition for Registration group element.
            if ( strlen ( isbn2str ) > 5 ) {
                printf ( " Invalid ISBN. Registration group element must have 1 to 5 digits.\n" ); continue;
            }
        // 7. Condition for Registrant element.
            if ( strlen ( isbn3str ) > 7 ) {
                printf ( " Invalid ISBN. Registrant element must have 1 to 7 digits.\n" ); continue;
            }
        // 8. Condition for Publication element.
            if ( strlen ( isbn4str ) > 6 ) {
                printf ( " Invalid ISBN. Publication element must have 1 to 6 digits.\n" ); continue;
            }
        // 9. Condition for Check digit.
            if ( strlen ( isbn5str ) > 1 ) {
                printf ( " Invalid ISBN. Check digit must have exactly 1 digit.\n" ); continue;
            }

        // Sum of 13 digits - Condition of ISBN validiation test
            long int isbnint = 0;
            sscanf(isbnwithouthyphen ,"%ld", &isbnint);

            unsigned long int sum = 0;
            unsigned long currentnumber = 0;
            for (long int i=1; i<14; i++){
                currentnumber= isbnint %10;
                isbnint = isbnint /10;
                if (i%2==1){sum += currentnumber;}
                else {sum += currentnumber*3;}
            }

            if (sum%10 !=0) {
                printf("%ld\n", sum);
                printf ( " Invalid ISBN. Failed validation test.\n" ); continue; }

        // Output if the ISBN number is valid.
            printf ( "Valid ISBN. \n" );
            right = 1;
        }
    return 0;

}
