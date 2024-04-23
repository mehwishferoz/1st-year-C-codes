//C program that execute true block if inserted number is equal to 99 otherwise false block
#include<stdio.h>
void main ()
{
    int n;
    printf("ENTER A NUMBER: \n");
    scanf("%d", &n);

    if (n==99)
    {
        printf("The entered number is 99");
    }
    else
       {
           printf("The entered number is not 99");
       }
}
