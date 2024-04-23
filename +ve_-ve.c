#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num>0)
    {
    case 0:
        printf("The number is negative\n");
        break;

    case 1:
        printf("The number is positive\n");
        break;
    }


}
