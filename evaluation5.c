#include <stdio.h>
int N;

void read(int a[], int n)
{
    int i;
    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int max(int a[], int n)
{
    int i,max=0;
    for(i=0;i<N;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}

int linearsearch(int a[], int n)
{
    int j, *max;
    for(j=0;j<N;j++)
    {
        if(a[j]==*max)
        {
            return j;
        }
    }
     return -1;
}

void new_queue(int a[], int n)
{
    int i,j=0;
    for(i=0;i<j;i++)
    {
        a[i]=a[j];
        a[j]=a[j-1];
    }
    display(a,n);
}

int main()
{
    int N,n,l,j;
    int a[100000000];
    scanf("%d", &N);
    if(N>=1&&N<=100000)
    {
    read(a,n);
    max(a,n);
    l=linearsearch(a,n);
    if(l==j)
    new_queue(a,n);
    }
    return 0;
}
