#include<stdio.h>
void main()
{
    char gender;
    printf("Enter gender (M/m or F/f): ");
    scanf("%c", &gender);

    switch(gender)
    {
    case 'M':
    case 'm':
        printf("Male\n");
        break;
    case 'F':
    case 'f':
        printf("Female\n");
        break;
    default:
        printf("Unspecified Gender\n");
    }
}
