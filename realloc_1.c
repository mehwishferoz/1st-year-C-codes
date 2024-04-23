#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n, i, *p;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    p=(int*)calloc(n,sizeof(int));
    /*printf("Enter the values: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }*/
    printf("Enter the updated value of n: \n");
    scanf("%d", &n);
    int *p1=(int*)realloc(p,sizeof(int));
    printf("Previous address=%d\tNew address=%d\n", p,p1);
    for(i=0;i<n;i++)
    {
        printf("%d", *(p1+i));
        printf("\t");
    }
    free(p1);
    return 0;
}
