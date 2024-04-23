#include<stdio.h>

int sum(int a[100], int n)
{
    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("The sum of the array elements is: %d\n", sum);
    return (sum/n);
}

void read(int a[100], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[100], int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n");
}

int main()
{
    int a[100], n, s;
    float res;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    read(a,n);
    display(a,n);
    res=sum(a,n);
    printf("The average of the array elements is: %f\n", res);
    return 0;
}
