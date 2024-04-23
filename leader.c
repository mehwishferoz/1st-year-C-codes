/*Find leaders of an array
An element is leader of an array if no element is greater to its right
Ex- 16,17,4,3,5,2
output - 17,5,2*/
#include<stdio.h>
void leader(int a[], int n)
{
    int i,j,l;
    for(i=0;i<n;i++)
    {
        l=1;
        for(j=i+1;j<n;j++)
        {
        if(a[i]<a[j])
        {
            l=0;
            break;
        }
    }
    if(l==1)
    {
        printf("Leader %d\n", a[i]);
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
    leader(a,n);
    return 0;
}
