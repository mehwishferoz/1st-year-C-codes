#include<stdio.h>
void modify(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        a[i]=a[i]+5;
    }
}

void read(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\n", a[i]);
    }
    printf("\n");
}

void reverse(int a[], int n)
{
    int i;
    for(i=0;i<n/2;i++)
    {
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
}

int smallest(int a[], int n)
{
    int small=a[0], i;
    for(i=1;i<n;i++)
    {
        if(a[i],small)
            small=a[i];
    }
    return small;
}

int linearsearch(int a[], int n, int key)
{
    int found=0, i;
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
            found=1;
    }
    return found;
}

int largest(int a[], int n)
{
    int large=a[0], i;
    for(i=1;i<n;i++)
    {
        if(a[i]>large)
            large=a[i];
    }
    return large;
}

int sum(int a[], int n)
{
    int res=0,i;
    for(i=0;i<n;i++)
    {
        res=res+a[i];
    }
    return res;
}

void bubblesort(int a[], int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
        }
    }
}

int binarysearch(int a[], int n, int key1)
{
    printf("Inside bin\n");
    int low,mid,high;
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(a[mid]==key1)
            return mid;

        else if(a[mid]<key1)
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
    }
    return -1;
}

float avg(int s, int n)
{
    return(s/n);
}
int main()
{
    int a[100],n,s_res,l_res,s,key,res,key1,res1;
    float avg1;
    printf("Enter number of elements\n");
    scanf("%d", &n);

    read(a,n);
    display(a,n);

    printf("Enter the element to be searched for linear search\n");
    scanf("%d", &key);
    if(res==0)
    {
        printf("Item not found\n");
    }
    else
        printf("Item found\n");
    bubblesort(a,n);
    printf("bubbleSorted array\n");
    display(a,n);

    printf("Enter the number to be searched for binary search\n");
    scanf("%d", &key1);
    res1=binarysearch(a,n,key1);
    if(res1==-1)
        printf("Not found\n");
    else
        ("Element found at %d position\n", res1);
    modify(a,n);
    printf("Modified array elements are\n");
    display(a,n);

    reverse(a,n);
    printf("Reversed array elements are\n");
    display(a,n);

    s_res=smallest(a,n);
    printf("\n smallest element=%d", s_res);

    l_res=largest(a,n);
    printf("\n largest element=%d", l_res);

    s=sum(a,n);
    printf("\nsum of array elements is %d\n",s);

    avg1=avg(s,n);
    printf("avg of array elements: %f", avg1);
    return 0;
}
