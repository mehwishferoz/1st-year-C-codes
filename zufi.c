#include<stdio.h>
int main()
{
    int days, place, amount;

    printf("Enter the number of days of trip: ");
    scanf("%d", &days);

    printf("Select the place for trip: \n 1 - Kashmir\n 2 - Ooty\n 3 - Kanyakumari\n");
    scanf("%d", &place);

    switch(place)
    {
    case 1:
            amount = (1255*2)+(510*days)+(200*days);
            break;

    case 2:
            amount = (940*2)+(400*days)+(400*days);
            break;

    case 3:
            amount = (1097*2)+(375*days)+(300*days);
            break;


    default:
        printf("Invalid Input");
    }

    printf("The amount for the trip is %d", amount);
    return 0;

}
