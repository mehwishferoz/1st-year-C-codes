#include<stdio.h>
#define PI 3.14
float circum(float r);
float area(float r);
float circum(float r)
{
    float circum1;
    circum1=2*PI*r;
    return circum1;
}

float area(float r)
{
    float area1;
    area1=PI*r*r;
    return area1;
}
void main()
{
    float r, c, a;
    printf("Enter the radius of the circle: \n");
    scanf("%f", &r);
    c = circum(r);
    printf("The circumference of the circle with radius %f is %f", r, c);
    a = area(r);
    printf("The area of the circle with radius %f is %f", r, a);
}


