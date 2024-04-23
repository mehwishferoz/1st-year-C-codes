/*Mohan and Sohan are two different places. Mohan decided to meet Sohan. Calculate the distance he needs to travel to reach Sohan.
If he is travelling at a speed of 4km/h, can Mohan reach Sohan wihtin one hour? */
#include<stdio.h>
#include<math.h>
#define s 4
void main ()
{
     float x1, x2, y1, y2, d;
    printf("Enter the value of x1\n");
    scanf("%f", &x1);
    printf("Enter the value of x2\n");
    scanf("%f", &x2);
    printf("Enter the value of y1\n");
    scanf("%f", &y1);
    printf("Enter the value of y2\n");
    scanf("%f", &y2);

     d = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
     printf("The distance Mohan needs to travel to reach Sohan is %f\n", d);

     float t = d/s;
     if (t>=1)
     {
         printf("Mohan can reach Sohan");
     }
     else
     {
         printf("Mohan can't reach Sohan");
     }
}
