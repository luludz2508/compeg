#include <stdio.h>
#include <string.h>

int count(int i){
    int count =1;
    while(i != 0){
        if (i > 10){
        i = i/10;
        count +=1;
    } else {break;}
    }
    return count;
}

char convert(int i ){
    char str[30];

    for ( int a = count ( i); a >=0; a--){
        str[a]= i / ( 10^a );
    }
    return &str;
}

int main(int argc, char const *argv[]) {
    int i ;
    printf("Please input int number: " );
    scanf("%d ", &i);
    printf("The answer is : %s \n", convert(i));
    return 0;
}
