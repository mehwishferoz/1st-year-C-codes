#include<stdio.h>
void main()
{
    float units, cost;
    printf("Enter the units: ");
    scanf("%f", &units);
    if(units<=50)
    {
        cost=0.50*units;
        printf("The cost is %f\n", cost);
    }
    else if(units>=51 && units<=150)
    {
        cost=((50*0.50)+(units-50)*(0.75));
        printf("The cost is %f\n", cost);
    }
     else if(units>=151 && units<=250)
    {
        cost=((25+75)+(units-150)*(1.20));
        printf("The cost is %f\n", cost);
    }
     else
    {
        cost=((25+75+120)+(units-250)*(1.50));
        printf("The cost is %f\n", cost);
    }

    float cost2, total_amount;
    cost2=100+cost;

    if(cost2>400)
    {
        total_amount=cost2+(0.15*cost2);
        printf("The total amount is %f\n", total_amount);
    }
    else
        printf("The total amount is %f\n", cost2);


}
