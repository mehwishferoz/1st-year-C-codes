#include<stdio.h>
void main()
{
    int hours, wages;
    char worker;

    printf("Enter the hours of work:  ");
    scanf("%d", &hours);
    printf("Enter 'M/m' for male and 'F/f' for female\n");
    scanf(" %c", &worker);

    if ((worker=='m'||'M') && (hours>=1&&hours<=6))
    {
        wages=50*hours;
        printf("The wages of the worker are %d", wages);
    }
    else if ((worker=='f'||'F') && (hours>=1&&hours<=6))
    {
        wages=40*hours;
        printf("The wages of the worker are %d", wages);
    }
    else if ((worker=='m'||'M') && (hours>=7&&hours<=10))
    {
        wages=(50*6)+(80*(hours-6));
        printf("The wages of the worker are %d", wages);
    }
    else if ((worker=='f'||'F') && (hours>=7&&hours<=10))
    {
        wages=(40*6)+(60*(hours-6));
        printf("The wages of the worker are %d", wages);
    }
    else if ((worker=='m'||'M') && hours>10)
        {
        wages=(50*6)+(80*4)+((hours-10)*150);
        printf("The wages of the worker are %d", wages);
    }
    else if ((worker=='f'||'F') && hours>10)
        {
        wages=((40*6)+(60*4)+((hours-10)*150));
        printf("The wages of the worker are %d", wages);
    }
}

