#include <stdio.h>
void check(int u){
    int i = u;
    while (i>1 ){
        int a = 2 ;
        for ( a ; a <= i && a < u ; a++) {
            if ( i % a == 0) {
                printf("%d ", a);
                i = i / a;
                break;

            } else {continue;}
        }

  }
}
int main(int argc, char const *argv[]) {
    int i;
    printf("Enter n please: " );
    scanf("%d", &i);
    check ( i );
    printf("\n");
    return 0;
}
