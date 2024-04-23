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
    for(int j=0;j<n;j++)
    {
        printf("%d\t\n", a[j]);
    }
}
int main()
{
    int a[100];
    int n,b=0;
    printf("Enter size: \n");
    scanf("%d", &n);
    printf("Enter elements: \n");
    read(a,n);
    printf("Elements are: \n");
    display(a,n);
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
            b=a[j];
            a[j]=a[j+1];
            a[j+1]=b;
            }
        }
    }
    printf("Sorted array: \n");
    display(a,n);
    return 0;
}
