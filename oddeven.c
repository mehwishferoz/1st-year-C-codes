#include<stdio.h>
void main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    switch(num%2) //this will return either 0 or 1
    {
        case 0:
            printf("%d is an EVEN number\n", num);
            break;
        case 1:
            printf("%d is an ODD number\n", num);
            break;
    }
}
