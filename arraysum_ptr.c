#include<stdio.h>
int main()
{
    int a[100], n, sum=0;
    int *p;
    p=a;
    printf("Enter the size of array: \n");
    scanf("%d", &n);
    printf("Enter the array elements: \n");
    for(int i=0;i<n;i++)
    {
        scanf("%d", p);
        p++;
    }
    printf("The entered elements are: \n");
    p=a;
    for(int j=0;j<n;j++)
    {
        printf("%d\n", *p);
        p++;
    }
    p=a;
    for(int k=0;k<n;k++)
    {
        sum+=*p;
        p++;
    }
    printf("The sum of the elements is: %d\n", sum);
    return 0;
}
