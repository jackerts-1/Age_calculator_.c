#include <stdio.h>
#define CURRENTYEAR 2026

int main()
{
   int yearborn, age;
         printf("what year were you born?\n");
         scanf("%d", &yearborn);
    if(yearborn>CURRENTYEAR)
    {
         printf("really you haven't been born yet\n");
         printf("want to try again with different year\n");
         printf("what year were you born\n");
         printf("%d", yearborn);
    }
    else
    {
         age = CURRENTYEAR - yearborn;
             printf("\nso, this year you will turn %d on your birthday!", age);
                 if((yearborn % 4) == 0)
                 {
                   printf("\n you were born in a leap year--cool!\n");
                 }    
    }                

    return 0;
}
