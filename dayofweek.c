#include<stdio.h>
void main ()
{
    int day;
    printf("Enter the day: ");
    scanf("%d", &day);

    switch (day)
    {
        case 1 ... 7:
        printf("First week\n");
        break;

        case 8 ... 14:
        printf("Second week\n");
        break;

        case 15 ... 21:
        printf("Third week\n");
        break;

        case 22 ... 28:
        printf("Fourth week\n");
        break;

        default:
            printf("Invalid");
    }

}
