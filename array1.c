//Compile time
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter n: ");
    scanf("%d", &n);
    int arr[6]={12,34,56,78};
    for(i=0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}
