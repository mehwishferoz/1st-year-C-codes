#include<stdio.h>
void main()
{
    int days;
    printf("Enter the number of days: ");
    scanf("%d", &days);

    if (days<=5)
    printf("The fine is 50 paise");

    else if (days>5&&days<=10)
    printf("The fine is 1 rupee");

    else if (days>10&&days<=30)
    printf("The fine is 5 rupees");

    else
    printf("Your membership is cancelled");
}
