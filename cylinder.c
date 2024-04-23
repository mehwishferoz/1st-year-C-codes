//C program to compute the volume of cylinder
#include<stdio.h>
#define PI 3.14
void main ()
{
    float r, h, v;
    printf("Enter the value of radius\n");
    scanf("%f",&r);
    printf("Enter the value of height\n");
    scanf("%f", &h);
    v = PI*r*r*h;
    printf("The volume of cylinder is %f", v);

}
