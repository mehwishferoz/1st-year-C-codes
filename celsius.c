//C program to convert celsius to farhenheit
#include<stdio.h>
void main()
{
    float f, c;
    printf("Enter the value of temperature in celsius: ");
    scanf("%f", &c);
    f = (c * 9 / 5) + 32;
    printf("The value of temperature in farhenheit is: %f", f);

}
