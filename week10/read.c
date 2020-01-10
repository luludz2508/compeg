#include <stdio.h>
int main(int argc, char const *argv[]) {
    FILE *p =fopen("text.txt", "r") ;
    if ( p ==NULL){
        printf(" Cannot compiled this file\n");
        return -1;
    }

        char s[100];
        int i;
        float f;
        fscanf(p, "%[^\n]s ", s);

        fscanf(p, "%d ", &i ) ;

        fscanf(p, "%f ", &f );

        printf( "%s \n %d \n %f \n", s, i, f);

    fclose(p);
    return 0;
}
