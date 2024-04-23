/*In a company an employee is paid as under: If his/her basic salary is less than Rs.1500, then HRA = 10% of basic salary and DA = 90% of basic salary.
If his salary is either equal to or above Rs.1500, then HRA = 500 and DA = 98% of basic salary. Find his/her gross salary.*/
#include<stdio.h>
int main ()
{
    float BS, HRA, DA;
    printf("Enter your basic salary: \n");
    scanf("%f", &BS);

    if (BS<1500)
    {
        HRA = 0.1*BS;
        printf("HRA = %f\n", HRA);
        DA = 0.9*BS;
        printf("DA = %f\n", DA);
    }
    else
    {
        HRA = 500;
        printf("HRA = %f\n", HRA);
        DA = 0.98*BS;
        printf("DA = %f\n", DA);
    }
}
