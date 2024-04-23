#include<stdio.h>
void read(int*, int n);
void display(int*, int n);
int perfect(int*, int);
int i;
int main()
{
    int n, x, p, a[100], flag=0;
    int *p1, *p2;
    p1=&x;
    p2=a;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    read(a,n);
    printf("Enter the array element to check if it is perfect or not: \n");
    scanf("%d", &x);
    for(i=0;i<n;i++)
    {
        if(*p1==*(p2+i))
            flag=1;
    }
    if(flag==0)
    {
        printf("Element not in the entered array\n");
    }
    else
    {
    p=perfect(p1,n);
    if(p==*p1)
    {
         for(i=0;i<n;i++)
         {
             if(*(p2+i)==*p1)
                *(p2+i)=0;
         }
         printf("Element is perfect number\n");
         printf("Array elements now: \n");
         display(a,n);
    }
    else
    {
        for(i=0;i<n;i++)
         {
             if(*(p2+i)==*p1)
                *(p2+i)=1;
         }
        printf("Element is not a perfect number\n");
        printf("Array elements now: \n");
        display(a,n);
    }
    }

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
int perfect(int *m, int n)
{
    int sum=0;
   for(i=1;i<*m;i++)
    {
        if(*m%i==0)
            sum+=i;
    }
    printf("Sum = %d\n", sum);
    return sum;
}
