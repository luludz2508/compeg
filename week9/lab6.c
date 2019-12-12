#include <stdio.h>
#include <string.h>
#include <ctype.h>
void print_dig_float(char i[30]){

    for (int a=0; a <strlen(i); a++){
        if ( isdigit(i[a])){
                    printf("%c ", i[a]);
        }

    }

}

int main(int argc, char const *argv[]) {
    char i[30];
    printf("Enter float :  ");
    scanf("%s", i);
    printf("The answer is : " ); print_dig_float( i);
    return 0;
}
