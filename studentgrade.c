#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);

    switch (marks)
    {
    case 0 ... 35:
        printf("Your grade is D");
        break;

    case 36 ... 50:
         printf("Your grade is C");
         break;

    case 51 ... 80:
        printf("Your grade is B");
        break;

    case 81 ... 90:
        printf("Your grade is A");
        break;

    case 91 ... 100:
        printf("Your grade is S");
        break;

    default:
        printf("Invalid marks");
    }



return 0;
}

