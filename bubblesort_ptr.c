#include<stdio.h>
void read(int*, int n);
void display(int*, int n);
void bubble(int*, int n);
int linearsearch(int*, int n, int key);
int binarysearch(int*, int n);
int i;
int main()
{
    int a[100];
    int n,key,l,b;
    int *p;
    p=a;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    read(a,n);
    bubble(a,n);
    printf("Enter an element to be searched using linear search: \n");
    scanf("%d", &key);
    l=linearsearch(a,n,key);
    if(l==-1)
        printf("Element not found\n");
    else
        printf("Element found at %dth position using linear search\n", l);
    b=binarysearch(a,n);
    if(b==-1)
        printf("Element not found\n");
    else
        printf("Element found at %dth position using binary search\n", b+1);
    return 0;
}
void read(int *m, int n)
{
    for(i=0;i<n;i++)
    {
        scanf("%d", m);
        m++;
    }
}
void display(int *m, int n)
{
    for(i=0;i<n;i++)
    {
        printf("%d\t\n", *m);
        m++;
    }
}
void bubble(int *m, int n)
{
    printf("Sorted array: \n");
    int t=0;
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(*(m+j)<*(m+i))
            {
                t=*(m+i);
                *(m+i)=*(m+j);
                *(m+j)=t;
            }
        }
    }
    display(m,n);
}
int linearsearch(int *m, int n, int key)
{
    for(i=0;i<n;i++)
    {
        if(*m==key)
        {
            return i+1;
            break;
        }
        m++;
    }
    return -1;
}
int binarysearch(int *m, int n)
{
    int start=0, end=n-1, mid, key1;
    printf("Enter an element to be searched using binary search: \n");
    scanf("%d", &key1);
    while(end>=start)
    {
        mid=((start+end)/2)-1;
        if(*(m+mid)==key1)
            return mid+2;
        else if(*(m+mid)>key1)
        {
            end=mid;
            m++;
        }
        else
        {
            start=mid;
            m++;
        }
    }
    return -1;
}
