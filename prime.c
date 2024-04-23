#include<stdio.h>

void main()
{
    int n, flag=0;
    printf("Enter a number to check if it's prime: \n");
    scanf("%d", &n);
    if(n<2)
        printf("Not prime!\n");
    else if(n==2)
        printf("Is prime!\n");
    else
    {
        for(int i=2;i<n;i++)
        {
            if(n%i==0)
            {
                flag=-1;
                
                break;
            }
        }
        if(flag!=0)
        printf("Not prime\n");
        else
            printf("Is prime\n");
    }

}
