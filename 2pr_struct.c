#include<stdio.h>
#include<string.h>
typedef struct customer_details
{
    char name[100];
    char place[100];
    int items;
    int bill;
    char ID[100];
} cust;

void read(cust*, int);
void display(cust*, int);
void search(cust*, int);

int main()
{
    cust c[100], *p;
    p=c;
    int n;
    printf("Enter the number of customers: \n");
    scanf("%d", &n);
    read(p,n);
    display(p,n);
    search(p,n);
    return 0;
}

void read(cust *p, int n)
{
    printf("Enter customer details: \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter details of customer %d: \n", i+1);
        printf("Name\tPlace\tItems\tBill\tID\n");
        scanf("%s%s%d%d%s", (p+i)->name, (p+i)->place, &(p+i)->items, &(p+i)->bill, (p+i)->ID);
    }
}

void display(cust *p, int n)
{
    printf("Entered customer details: \n");
    for(int i=0;i<n;i++)
    {
        printf("Name = %s\tPlace = %s\tItems = %d\tBill = %d\tID = %s\n", (p+i)->name, (p+i)->place, (p+i)->items, (p+i)->bill, (p+i)->ID);
    }
}

void search(cust *p, int n)
{
    char x[100];
    int flag=0;
    printf("Enter the ID to be searched: \n");
    scanf("%s", x);
    for(int i=0;i<n;i++)
    {
        if(strcmp(x,(p+i)->ID)==0)
        {
            printf("Name = %s\tPlace = %s\tItems = %d\tBill = %d\tID = %s\t", (p+i)->name, (p+i)->place, (p+i)->items, (p+i)->bill, (p+i)->ID);
            flag=1;
        }
    }
    if(flag==0)
        printf("ID not found\n");
}
