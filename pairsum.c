#include<stdio.h>
void pairsum(int a[], int n, int t)
{
    int j,i;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]+a[j]==t)
                printf("%d%d\n", a[i], a[j]);
        }
    }
}
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
        printf("%d\n", a[i]);
    }
}
int main()
{
    int n,a[15];
    printf("Enter the size of array\n");
    scanf("%d", &n);
    printf("Enter %d array elements\n", n);
    read(a,n);
    printf("Array elements are\n");
    display(a,n);
    return 0;
}
