#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *p;
    printf("Enter the number of blocks to be used: \n");
    scanf("%d", &n);
    p=(int*)calloc(n,sizeof(int));
    printf("Enter the values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Entered values are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(p+i));
        printf("\t");
        printf("Address = %u\n", (p+i));
    }
    free(p);
    return 0;
}
