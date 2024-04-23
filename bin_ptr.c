#include<stdio.h>
void read(int *ptr,int *p)
{
    printf("Enter the array elements :\n");
    for(int i=0;i<*p;i++)
        {
            scanf("%d",ptr);
            ptr++;
        }
}
int linear(int *ptr,int *p,int *k)
{
    int flag=-1;
    for(int i=0;i<*p;i++)
    {
        if(*ptr==*k)
        {
            flag=i;
        }
     ptr++;
    }
    return flag;

}
void bubble(int *ptr,int *p)
{
    int temp=0;
    for(int i=0;i<*p;i++)
    {
        for(int j=0;j<*p-i-1;j++)
        {
            if((ptr+j)>(ptr+j+1))//ascending order
            {
                 temp=*(ptr+j);
                 (ptr+j)=(ptr+j+1);
                 *(ptr+j+1)=temp;
            }
        }
    }

}
int binsearch(int a[],int *p,int *k)
{
    int n=*p;
    int l=0,h=n-1;
    while(l<=h)
    {
        int mid=(l+h)/2;
        if(a[mid]==*k)
            return mid;
        else if(a[mid]>*k)
            h=mid-1;
        else
            l=mid+1;
    }
    return -1;
}
void display(int *ptr,int *p)
{
    for(int i=0;i<*p;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
void main()
{
    int n;
    printf("Enter the size of the array:\n");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&n;
    read(a,p);
    printf("Enter the element to be searched using linear search:\n");
    int key1;
    scanf("%d",&key1);
    int *k=&key1;
    int index=linear(a,p,k);
    if(index!=-1)
     printf("Element found at %d index of the array !\n",index+1);
    else
     printf("Element not found !\n");
     bubble(a,p);
     printf("Sorted array elements are :\n");
     display(a,p);
     printf("\nEnter the elements to be searched using binary seaarch :\n");
    int key2;
     scanf("%d",&key2);
    int v= binsearch(a,p,&key2);
     if(v!=-1)
    printf("\nElement found at %dth position of array",v+1);
     else
    printf("\nElement not found !");
}
