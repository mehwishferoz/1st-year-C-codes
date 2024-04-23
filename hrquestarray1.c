#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void min(int a[], int n)
{
    int j,min;
    min=a[0];
    for(j=0;j<n;j++)
    {
        if(a[j]<0)
        min=a[j];
        else if(a[j]<min)
        min=a[j];
    }
    printf("%d\n", min);
}

int main()
{
    int n,i,t;
    int a[1000];
    scanf("%d", &t);
    for(i=0;i<t;i++)
    {
        scanf("%d", &n);
    if(n>=2)
    {
        for(i=0;i<n;i++)
        {
            scanf("%d", &a[i]);
        }
          min(a,n);
    }
    else
        printf("Invalid\n");
    }
    return 0;
}
