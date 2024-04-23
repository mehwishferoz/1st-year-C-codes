#include<stdio.h>
void main()
{
    long long int i, n;
    printf("Enter n: \n");
    scanf("%lld", &n);
    long long int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%lld", &arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%lld\t", arr[i]);
    }
}
