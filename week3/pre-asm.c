/*
  RMIT University Vietnam
  Course: EEET2448 Computing Engineering / EEET2601 Engineering Computing 1
  Semester: 2019C
  Assessment: Early Feedback Assessment
  Author: Nguyen Thanh Luan
  ID: 3757937
  Created date: 03/11/2019
  Acknowledgement: If you use any resources, acknowledge here. Failure to do so will be considered as plagiarism.
*/
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int input, i, space, left , right;
// I set position for the repeat loop
top:
    printf("Please input one number from 1-15 :   ");
    scanf( "%d" , &input);
    // This if condition is used to clarify the input number is in range or not.
    // If not, it will show the text inside the printf command.
    if ( input <= 0 || input > 15) {
        printf ( "Wrong number\n" ); 
        goto top;
    }
    // This is the big loop for repeat rows of pyramid until it equals to input number.
    // This loop started from the peak (highest row) of the pyramid.
    for ( i = 1 ; i <= input ; i++ ){

        // This loop print blank space based on formula space=input-1.
        for (space = 0 ; space < (input-i); space ++) {
            printf("\t");
        }

        // This loop print numbers decreasingly from current row (counted from the peak) to 1.
        // This loop print numbers on the left side of the pyramid.
        for( left = i ; left >= 1 ; left-- ) {
            printf("%d\t" , left );
        }

        // This loop print numbers on the right side of the pyramyd from 2 to number of stages counted from the peak.
        for ( right = 2 ; right <= i ; right++ ){
            printf("%d\t" , right );
        }

        // This command end the line/row and enter the new line
        printf( "\n" );
    }
    return 0;
}
