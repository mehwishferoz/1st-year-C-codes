#include <stdio.h>
int main()
{
    int a, b;
    printf("enter your biology marks\n", a);
    scanf("%d", &a);
    printf("you have entered %d as your biology marks\n", a);

    printf("enter your physics marks\n", b);
    scanf("%d", &b);

    printf("you have entered %d as your physics marks\n", b);

    if(a>=35&&b>=35)
        printf("congo! you won two gifts\n");
   else if (a > 35 && b < 35 || a < 35 && b > 35)
        printf("congo! you won one gift\n");
        else
            printf("opps! you didnt got any gift\n");

    return 0;
}
