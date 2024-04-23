#include<stdio.h>
void read_array(int*,int);
void print_array(int*,int);
void sum_array(int*,int);
void max(int*,int);
void min(int*,int);
void prime(int*,int);
int i;
int main()
{
    int a[100], n;
    int *p;
    p=a;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    read_array(a,n);
    print_array(a,n);
    sum_array(a,n);
    max(a,n);
    min(a,n);
    prime(a,n);
    return 0;
}
void read_array(int *m,int n)
{
    printf("Enter the array elements: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d", m);
        m++;
    }
}
void print_array(int *m,int n)
{
    printf("The entered elements are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d\n", *m);
        m++;
    }
}
void sum_array(int *m,int n)
{
    int sum=0;
    for(i=0;i<n;i++)
    {
        sum+=*m;
        m++;
    }
    printf("The sum of the elements is: %d\n", sum);
}
void max(int *m, int n)
{
    int max=0;
    for(i=0;i<n;i++)
    {
        if(*m>max)
            max=*m;
        m++;
    }
    printf("The maximum element of the array is %d\n", max);
}
void min(int *m,int n)
{
    int min=*m;
    for(i=0;i<n;i++)
    {
        if(*m<min)
            min=*m;
        m++;
    }
    printf("The minimum element of the array is %d\n", min);
}
void prime(int *m,int n)
{
    int temp, flag=0;
    for(i=0;i<n;i++)
    {
        temp=*m;
        for(int j=2;j<temp;j++)
        {
            if(temp==1 || temp==2)
            {

            }
            if(temp%j==0)
            {

            }

        }
    }

}

