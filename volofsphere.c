//c program to compute the volume of sphere
#include<stdio.h>
#include<math.h>
#define PI 3.14
void main ()
{
    float r, v;
    printf("Enter the value of radius\n");
    scanf("%f", &r);

    v = (4/3)*PI*r*r*r;
    printf("The volume of sphere is %f", v);
}


