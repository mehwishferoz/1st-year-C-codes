/*A software company named Websolve has 1000 employees. The Company decided to give bonus to all of its employees as per the following experience.
Calculate the bonus amount for the employee*/
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
     else
     {
         Bonus= 0.2*BS;
     }
    printf("The bonus is %f", Bonus);
    return 0;
}
