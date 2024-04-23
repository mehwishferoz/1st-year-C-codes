//C program to compute the total amount to be paid by the owner
#include<stdio.h>
int main()
{
    char f,m,g;
    float time,cost;
    printf("Enter your gender: ");
    scanf("%c", &g);
    printf("Enter the number of hours of work: \n");
    scanf("%f", &time);

    if (g=='m'&&time<=6)
    printf("The amount to be paid by owner is 200 rupees\n");

    else if (g=='f'&&time<=6)
    printf("The amount to be paid by owner is 250 rupees\n");

    else if (g=='m'&&time>6)
    {
        cost=200+200+((time-6)*60);
        printf("The amount to be paid by owner is %f rupees\n", cost);

    }
    else if (g=='f'&&time>6)
    {
        cost=250+200+((time-6)*60);
        printf("The amount to be paid by owner is %f rupees\n", cost);

    }


return 0;
}
