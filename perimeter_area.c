#include<stdio.h>
#define PI 3.14
void main()
{
    int num;
    float rad, area1, peri, side, area2, l, b, area3;
    printf("Choose an option: \n 1 - Area of circle\n 2 - Perimeter of circle\n 3 - Area of square\n 4 - Area of rectangle\n");
    scanf("%d", &num);

    switch (num)
    {
    case 1:

        printf("Enter the radius of circle: \n");
        scanf("%f", &rad);
        area1=PI*rad*rad;
        printf("The area of the circle is %f", area1);
        break;

    case 2:

        printf("Enter the radius of circle: \n");
        scanf("%f", &rad);
        peri=2*PI*rad;
        printf("The perimeter of the circle is %f", peri);
        break;

    case 3:

        printf("Enter the side of the square: \n");
        scanf("%f", &side);
        area2=side*side;
        printf("The area of the square is %f", area2);
        break;

    case 4:

        printf("Enter the length and breadth of the rectangle: \n");
        scanf("%f%f", &l, &b);
        area3=l*b;
        printf("The area of the rectangle is %f", area3);
        break;

    default:
        printf("Invalid input\n");
    }
}
