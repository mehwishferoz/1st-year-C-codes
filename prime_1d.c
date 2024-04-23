#include<stdio.h>

void read(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t\n", a[i]);
    }
}

int prime(int a[], int n)
{
    int count=0, x;
    for(int i=0;i<n;i++)
    {
        x=a[i];
        for(int j=2;j<x;j++)
        {
            if(a[i]<=2)
            {
                continue;
            }
            if(a[i]%j!=0)
            {
                count++;
            }
        }
    }
    return count;
}

int main()
{
    int a[100], n, p;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    read(a,n);
    printf("The array elements are: \n");
    display(a,n);
    p=prime(a,n);
    printf("The number of prime numbers in the given array is %d\n", p);
    return 0;
}
