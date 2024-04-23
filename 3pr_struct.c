#include<stdio.h>
#include<string.h>

typedef struct coldrink
{
    char type[100];
    char name_d[100];
    int price;
    char name_c[100];
    int nunits;
}coldi;

void read(coldi*, int);
void display(coldi*, int);
void morethan_1k(coldi*, int);
void least_sd(coldi*, int);

int main()
{
    coldi c[100], *p;
    p=c;
    int n;
    printf("Enter the number of customers: \n");
    scanf("%d", &n);
    read(c,n);
    display(c,n);
    morethan_1k(c,n);
    least_sd(c,n);
    return 0;
}

void read(coldi *p, int n)
{
    printf("Enter the coldrink details: \n");
    for(int i=0;i<n;i++)
    {
        printf("Enter details of coldrink %d: \n", i+1);
        printf("Coldrink type\tColdrink name\tPrice\tCustomer name\tNumber of units\n");
        scanf("%s%s%d%s%d", (p+i)->type, (p+i)->name_d, &(p+i)->price, (p+i)->name_c, &(p+i)->nunits);
    }
}

void display(coldi *p, int n)
{
    printf("\nEntered coldrink details are: \n");
    for(int i=0;i<n;i++)
    {
        printf("Coldrink type = %s\tColdrink name = %s\tPrice = %d\tCustomer name = %s\tNumber of units = %d\n",(p+i)->type,(p+i)->name_d,(p+i)->price,(p+i)->name_c,(p+i)->nunits);
    }
}

void morethan_1k(coldi *p, int n)
{
    printf("Coldrink purchased for more than 1000 rupees: \n");
    int total_price[100], flag=0;
    for(int i=0;i<n;i++)
    {
        total_price[i]=(p+i)->price*(p+i)->nunits;
        if(total_price[i]>1000)
        {
            printf("Coldrink type = %s\tColdrink name = %s\tPrice = %d\tCustomer name = %s\tNumber of units = %d\n",(p+i)->type,(p+i)->name_d,(p+i)->price,(p+i)->name_c,(p+i)->nunits);
            flag=1;
        }
    }
    if(flag==0)
        printf("No coldrink found\n");
}

void least_sd(coldi *p, int n)
{
    int x=-1;
    for(int i=0;i<n;i++)
    {
        if((p+i)->type=="Softdrink")
        {
            if((p+i)->nunits>x)
            {
                x=i;
            }
        }
    }
    if(x==-1)
        printf("No softdrink found\n");
    else
       printf("Coldrink type = %s\tColdrink name = %s\tPrice = %d\tCustomer name = %s\tNumber of units = %d\n",(p+x)->type,(p+x)->name_d,(p+x)->price,(p+x)->name_c,(p+x)->nunits);
}
