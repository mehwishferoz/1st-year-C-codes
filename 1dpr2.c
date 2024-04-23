#include<stdio.h>
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
        printf("%d\t\n", a[i]);
    }
}
void min(int a[100], int n)
{
    int min=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    printf("Minimum element of the array is %d\n", min);
}

void max(int a[100], int n)
{
    int max=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    printf("Maximum element of the array is %d\n", max);
}

int main()
{
    int a[100], n;
    printf("Enter the size if the array: \n");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    read(a,n);
    display(a,n);
    min(a,n);
    max(a,n);
    return 0;
}
