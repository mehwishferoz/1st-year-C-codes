//C program for Websolve company version 2.0
#include<stdio.h>
int main ()
{
     float BS, exp, Bonus;
    printf("Enter your basic salary and experience: \n");
    scanf("%f%f", &BS,&exp);
     if (exp<=7)
     {
         Bonus= 0.1*BS;
     }
     else if (exp<=10)
     {
         Bonus= 0.2*BS;
     }
     else if (exp<=15)
     {
         Bonus= 0.3*BS;
     }
     else
     {
         Bonus= 0.4*BS;
     }

    printf("The bonus is %f", Bonus);
    return 0;
}
