#include<stdio.h>
#include<stdlib.h>

typedef struct laptop
{
    char brand[20];
    char model[20];
    int price;
} lp;

int main()
{
    lp *p;
    int n, i;
    printf("Enter the value of n: \n");
    scanf("%d", &n);
    p=(lp*)malloc(n*sizeof(lp));
    printf("Enter the laptop details: \n");
    for(i=0;i<n;i++)
    {
        printf("Enter details of laptop %d: \n", i+1);
        printf("Brand\tModel\tPrice\n");
        scanf("%s%s%d", (p+i)->brand, (p+i)->model, &(p+i)->price);
    }
    printf("Entered laptop details: \n");
    for(i=0;i<n;i++)
    {
        printf("Details of laptop %d: \n", i+1);
        printf("Brand = %s\tModel = %s\tPrice = %d\n", (p+i)->brand, (p+i)->model, (p+i)->price);
    }
    free(p);
    return 0;
}
