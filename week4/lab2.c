#include <stdlib.h>
#include <stdio.h>
int main(int argc, char const *argv[]) {
    int i, r, j;
    int array[10];
    time_t t;


    for (i=0; i<10; i++){
        int r=rand()%100 +1;
        r= array[i];

    }
    printf("%d\n", array[1] );
    for (j=1; j<11; j++){
        printf("%d.%d\n",j, array[j] );
    }
    return 0;
}
