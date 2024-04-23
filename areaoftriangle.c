//Program to find the area of triangle
#include<stdio.h>
void main()
{
    int b, h, area;
    printf("Enter the value of base of the triangle\n");
    scanf("%d", &b);
    printf("Enter the value of height of the triangle\n");
    scanf("%d", &h);
    area= 0.5*b*h;
    printf("The area of the triangle is %d", area);


}
