#include<stdio.h>
typedef struct mobile
{
    char name[100];
    char ram[100];
    int price;
    int year;
}mob;

void read(mob*, int);
void display(mob*, int);
void display_price(mob*, int);
void launch_year(mob*, int);

int main()
{
    mob m[100], *p;
    p=m;
    int n;
    printf("Enter the number: \n");
    if(n<0 || n>100)
        printf("Enter valid input\n");
    else
        scanf("%d", &n);
    read(p,n);
    display(p,n);
    display_price(p,n);
    launch_year(p,n);
    return 0;
}

void read(mob *p, int n)
{
    for(int i=0;i<n;i++)
    {
      printf("Enter the specifications of Mobile %d: \n", i+1);
      printf("Name\t Ram\t Price\t Year\n");
      scanf("%s%s%d%d",(p+i)->name, (p+i)->ram, &(p+i)->price, &(p+i)->year);
    }
}

void display(mob *p, int n)
{
    printf("\nEntered mobile specifications: \n");
    for(int i=0;i<n;i++)
    {
        printf("Specifications of Mobile %d: \n", i+1);
        printf("Name = %s\tRAM = %s\tPrice = %d\tLaunch year = %d\n", (p+i)->name, (p+i)->ram, (p+i)->price, (p+i)->year);
    }
}

void display_price(mob *p, int n)
{
    int budget, flag=0;
    printf("Enter your budget: \n");
    scanf("%d", &budget);
    for(int i=0;i<n;i++)
    {
        if(budget>=(p+i)->price)
        {
            printf("Name = %s\tRAM = %s\tPrice = %d\tLaunch year = %d\n", (p+i)->name, (p+i)->ram, (p+i)->price, (p+i)->year);
            flag=1;
        }
    }
    if(flag==0)
        printf("No mobile found under your budget :(\n");
}

void launch_year(mob *p, int n)
{
    int l_year, flag=0;
    printf("Enter year: \n");
    scanf("%d", &l_year);
    for(int i=0;i<n;i++)
    {
        if(l_year==(p+i)->year)
        {
            printf("Name = %s\tRAM = %s\tPrice = %d\tLaunch year = %d\n", (p+i)->name, (p+i)->ram, (p+i)->price, (p+i)->year);
            flag=1;
        }
    }
    if(flag==0)
        printf("No mobile found of entered launch year :(\n");
}
