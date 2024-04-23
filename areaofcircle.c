//c program to calculate area of circle
#include<stdio.h>
#define PI 3.14
void main()
{
    float rad,area,circumference;
    printf("Enter the radius of the circle\n");
    scanf("%f", &rad);

    area=PI*rad*rad;
    printf("The area of the circle is %.3f\n", area);
    circumference=2*PI*rad;
    printf("The circumference of the circle is %f\n", circumference);
}
