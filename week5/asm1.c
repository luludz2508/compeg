/*
  RMIT University Vietnam
  Course: EEET2448 Comp Eng/EEET2601 Eng Comp 1
  Semester: 2019C
  Assessment: Assessment 1
  Author: Nguyen Thanh Luan
  ID: 3757937
  Created  date: 11/11/2019
  Last modified: 19/11/2019
  Acknowledgement: https://fresh2refresh.com/
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
int main() {
    int right;
    while( right !=1 ){
            char isbn[30] ;
            unsigned long int isbn1, isbn2, isbn3, isbn4, isbn5;
            char isbn2str[8], isbn3str[8], isbn4str[8], isbn5str[8]; 
            int number=0, hyphen=0;
            char isbnwithouthyphen[30];
            int j=0, problem=0, wrong = 0;
        // scanf the value in int and string type.
            printf ( " Enter an ISBN: ");
            scanf ( "%s" , isbn ); // Scan the whole string contained numbers as char type and hyphens
        // Cancel Function.
            if ( *isbn == '0' && strlen ( isbn ) == 1) {
                printf(" Program exits. Goodbye!!!\n" ); break;
            }
        // Declare Numbers and hyphens
            for ( int i=0 ; i < strlen(isbn)  ; i ++ ) {
                if ( isdigit ( isbn[i] ) ) {
                    number ++ ;
                    isbnwithouthyphen[j] = isbn[i] ; // Create a new isbn numbers string without hyphens
                    j++ ;
                } else if ( isbn[i] == '-' ) {
                    hyphen ++ ;
                }
            }
        // Check if there are any character except digits and hyphens
            if ( number + hyphen != strlen(isbn) ) {
                printf ( " Invalid ISBN. Input should only contain digits and hyphens.\n" );
                continue ;
            }
        // Check if there are continuous hyphens
            for ( int i=0 ; i <= strlen(isbn)  ; i ++ ) {
                if ( isbn [i] == '-' && isbn [i+1] == '-' ) {
                    printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                    wrong = 1; // Sign to continue the external loop
                    break ;
                }
            }
            if ( wrong == 1 ) {
                continue; // Skip the whole loop
            }
            // Check if the first element is empty
            if ( isbn [0] == '-' ) {
                printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                continue ;
            }
            // Check if the last element is empty
            if ( isbn [ strlen(isbn) - 1 ] == '-' ) {
                printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                continue ;
            }
            // Check if there are more than 5 elements
            if ( hyphen != 4 ) {
                printf ( " Invalid ISBN. Input should have 5 elements separated by hyphens.\n" );
                continue ;
            }
        // Scan each element from int to string type except element 1
            sscanf ( isbn  , "%ld-%ld-%ld-%ld-%ld" , &isbn1, &isbn2, &isbn3, &isbn4, &isbn5); // Scan each group of element as int type which seperated by hyphens.
            sprintf ( isbn2str , "%ld" , isbn2 );
            sprintf ( isbn3str , "%ld" , isbn3 );
            sprintf ( isbn4str , "%ld" , isbn4 );
            sprintf ( isbn5str , "%ld" , isbn5 );


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
            sscanf ( isbnwithouthyphen ,"%ld", &isbnint); // Scan the whole 13 ISBN number as integer to calculate ISBN valid test.

            unsigned long int sum = 0;
            unsigned long remainer = 0;
        /*
                The below loop is made to calculate the sum of 13 digits of ISBN number of ISBN valid test
            whether value of digits which order divideable by 2 is multiply by 3.

                -I begin to sum all digits from the last one by :
                Dividing the whole ISBN number by 10 , the remainer is summed into sum set.
                The decimal quotient part is continuos divided by 10, the remainer is triple
            and summed into sum set because its order of calculation is 2( divideable by2 ) and so on until 13 digits is calculated and summed.
        */
            for ( int i = 1 ; i < 14 ; i++){
                remainer = isbnint % 10;
                isbnint = isbnint / 10;
                if ( i % 2 ==1 ) { sum += remainer ; }
                else {sum += remainer*3;}
            }

            if (sum%10 !=0) {
                printf ( " Invalid ISBN. Failed validation test.\n" ); continue; }

        // Output if the ISBN number is valid.
            printf ( " Valid ISBN. \n" );
        }
    return 0;
}
