//Run time
#include<stdio.h>
void array(int n);
void main()
{
    int n;
    printf("Enter n: \n");
    scanf("%d", &n);
    array(n);
}
void array(int n)
{
    int i,j,arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }
    for(j=0;j<n;j++)
    {
        printf("%d\t", arr[j]);
    }
}
