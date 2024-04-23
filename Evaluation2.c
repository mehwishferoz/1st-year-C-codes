#include<stdio.h>
void main()
{
    int z,m;
    char f,g,h;

    printf("Enter your floor number: \n");
    printf("Enter 'g' for ground floor and 'h' for floor 1 to 5\n");
    scanf(" %c", &f);
    printf("Enter the area of your flat in square feet: \n");
    scanf("%d", &z);

    if(z>=500&&z<=800&&f=='g')
    {
        m=(z*2)-100;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else if(z>=500&&z<=800&&f=='h')
    {
        m=(z*2)-200;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else if(z>=801&&z<=1000&&f=='g')
    {
        m=(800*2)+((z-800)*5)-100;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
     else if(z>=801&&z<=1000&&f=='h')
    {
        m=(800*2)+((z-800)*5)-200;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
     else if(z>=1001&&z<=1500&&f=='g')
    {
        m=(800*2)+(200*5)+((z-1000)*7)-100;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else if(z>=1001&&z<=1500&&f=='h')
    {
        m=(800*2)+(200*5)+((z-1000)*7)-200;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else if(z>1500 && f=='g')
    {
        m=(800*2)+(200*5)+(500*7)+((z-1500)*8)-100;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else if(z>1500 && f=='h')
    {
        m=(800*2)+(200*5)+(500*7)+((z-1500)*8)-200;
        printf("The maintenance charges to be paid by the customer are %d", m);
    }
    else
        printf("Invalid input\n");



}
