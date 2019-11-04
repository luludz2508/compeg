#include <stdio.h>
int main(int argc, char const *argv[]) {
    printf("input minuted that u want to convert to\n" );
    int minutes;
    scanf("%d",&minutes );
    int hour=minutes/60;
    int minute_left=minutes%60;
    printf("%d is converted to %dhour and %d minutes\n",minutes, hour, minute_left );

    return 0;
}
