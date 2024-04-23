//2 2 2 2 2 2 3 1 4 5

#include<stdio.h>
#include<stdlib.h>

void read(int a[100], int n);
void display(int a[100], int n);
void majority(int a[100], int n);

int main()
{
    int a[100], n;
    printf("Enter the value of N: \n");
    scanf("%d", &n);
    if(n<=2)
       printf("Number of entries must be greater than 2\n");
    else
    {
    printf("Enter the roll numbers: \n");
    read(a,n);
    printf("The entered roll number are: \n");
    display(a,n);
    majority(a,n);
    }
    return 0;
}

void read(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void display(int a[100],int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d\t\n",a[i]);
}

void majority(int a[100], int n)
{
    int temp=0;
    int major=0;
    int count, i, j;

    for(i=0;i<n;i++)
    {
        temp=a[i];
        count=0;
        for(j=0;j<n;j++)
        {
            if (a[j]==temp)
            {
                count++;
            }
        }
        if(count>(n/2))
        {
            major=temp;
            break;
        }
    }
    if(major==0)
        printf("There is no majority element\n");
    else
        printf("The majority element is %d\n", major);
}
