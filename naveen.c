#include<stdio.h>
void main()
{
    float TI, income_tax, age;
    char gender, m, f;

    printf("Enter your age: ");
    scanf("%f", &age);
    printf("Enter your gender(Enter 'm' for male and 'f' for female): \n");
    scanf(" %c", &gender);
    printf("Enter your Taxable income: \n");
    scanf("%f", &TI);

    if(TI<160000 && gender=='m' && age<65)
    printf("Nil");

    else if((TI>=160000&&TI<500000) && gender=='m' && age<65)
    {
        income_tax=0.1*TI;
        printf("Your payable income tax is %f", income_tax);
    }
    else if((TI>=500000&&TI<800000)&& gender=='m' && age<65)
    {
        income_tax=(0.2*TI)+34000;
        printf("Your payable income tax is %f", income_tax);
    }
    else if(TI>=800000 && gender=='m' && age<65)
    {
        income_tax=(0.3*TI)+94000;
        printf("Your payable income tax is %f", income_tax);
    }
    else if(age<=65 || gender=='f')
        printf("Wrong Category\n");
}

