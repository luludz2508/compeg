#include <stdio.h>

int main ()
{
    int value;
    printf("please input value\n" );
    scanf("%d\n",&value );

   switch(value)
   {
     case 1:
     printf("Value is 1 \n");
     break;

     case 2:
     printf("Value is 2 \n" );
     break;

     case 3:
     printf("Value is 3 \n" );
     break;

     case 4:
     printf("Value is 4 \n" );
     break;

     default :
     printf("Value is other than 1,2,3,4 \n");
   }
   return 0;
}
