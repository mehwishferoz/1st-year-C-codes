#include<stdio.h>
void main()
{
    int days, cost;
    printf("Enter the number of days of work");
    scanf("%d", &days);

    if (days<=3)
    {
        cost=(days*100)+(days*6*250);
        printf("The cost is %d\n", cost);

    }
    else if (days>=4&&days<7)
    {
        cost=(days*150)+(days*6*350);
        printf("The cost is %d\n", cost);

    }
    else if(days>=7&&days<=9)
     {
        cost=(days*250)+(days*6*450);
        printf("The cost is %d\n", cost);
     }
     else
     printf("You've overworked\n");

}
