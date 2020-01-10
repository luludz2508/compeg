#include <stdio.h>
int main(int argc, char const *argv[]) {
    FILE *p =fopen("text.txt", "w") ;
    if ( p ==NULL){
        printf(" Cannot compiled this file\n");
        return -1;
    } else {
        fprintf(p, "%s \n", "this is a string ");

        fprintf(p, "%i \n", 50 ) ;

        fprintf(p, "%f ", 3.14157 );
    }
    fclose(p);
    return 0;
}
