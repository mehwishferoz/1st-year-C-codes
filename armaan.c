#include<stdio.h>
void read(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}
void display(int a[],int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
void modify(int a[],int n)
{
    for(int i=0;i<n;i++)
        a[i]=a[i]+7;
        printf("\n modified array :");
        display(a,n);
}
void reverse(int a[],int n)
{
    int z=0;
    for(int i=0;i<n/2;i++)
    {
        int z=a[n-1-i];
        a[n-i-1]=a[i];
        a[i]=z;
    }
    printf("\n reversed array :");
    display(a,n);
}
void smallest(int a[],int n)
{
    int small=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]<small)
        small=a[i];
    }
    printf("\n smallest element : %d",small);
}
void largest(int a[],int n)
{
    int large=a[0];
    for(int i=0;i<n;i++)
    {
        if(a[i]>large)
        large=a[i];
    }
    printf("\n largest element : %d",large);
}
int linearsearch(int a[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==key)
            return i;
    }
    return -1;
}
void bubble(int a[],int n)
{
    int b=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])//condition for descending order. for ascending order check if(a[j]>a[j+1)
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    printf("\n sorted array :");
    display(a,n);
}
int binarysearch(int a[],int n,int key1)
{
    int low=0,high=n-1;
    while(low<=high)
    {
       int mid=(low+high)/2;
        if(key1==a[mid])
            return mid;
        else if(a[mid]>key1)
            low=mid+1;
        else
            high=mid-1;
    }
    return -1;
}


void main()
{
    int n;
    printf("Enter the size of array :");
    scanf("%d",&n);
    int a[n];
    read(a,n);
    display(a,n);
    modify(a,n);//changing the value of array element is modification
    reverse(a,n);
    smallest(a,n);
    largest(a,n);
    int key;
    printf("\nEnter the element to be searched :");
    scanf("%d",&key);
    int q=linearsearch(a,n,key);
    if(q==-1)
        printf("\nElement not found !");
    else
        printf("\n Element found at %dth location of the array",q+1);
    bubble(a,n);
    printf("\n Enter the number to be searched by binary search technique: \n");
    int key1;
    scanf("%d",&key1);
   int v= binarysearch(a,n,key1);
        if(v!=-1)
            printf("\nElement found at %dth position of array",v+1);
        else
            printf("\nElement not found !");
}
