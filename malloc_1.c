#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *ptr;
    printf("Enter the number of values: \n");
    scanf("%d", &n);
    ptr=(int*)malloc(n*sizeof(int));
    printf("Enter the values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }
    printf("Entered values are: \n");
    for(i=0;i<n;i++)
    {
        printf("%d",*(ptr+i));
        printf("\t");
        printf("Address = %u\n", (ptr+i));
    }
    free(ptr);
    return 0;
}
