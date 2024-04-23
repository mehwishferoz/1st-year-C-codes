#include<stdio.h>
int main ()
{
    char day, friday, Friday;
    printf("Enter current day: \n");
    scanf("%c", &day);
    if (day=='f' || day=='F')
    {
        printf("Have a nice weekend!");
    }
    else
    {
        printf("Have a nice day!");
    }
}
