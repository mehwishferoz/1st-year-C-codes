#include<stdio.h>

typedef struct cold_drink
{
    char type[30],name[50],customer_name[30];
    int units;
    float price;
    float total;
}COLD;

void read(COLD *cptr,int n);
void display(COLD *cptr,int n);
void display_least(COLD *cptr,int n);
void display_more(COLD *cptr,int n);

int main()
{
    COLD c[10];
    COLD *cptr;
    cptr=c;
    int n;
    printf("Enter the no of details\n");
    scanf("%d",&n);
    read(cptr,n);
    display(cptr,n);
    display_least(cptr,n);
    display_more(cptr,n);
    return 0;
}

void read(COLD *cptr,int n)
{
    int i;
    printf("Enter the cold drink details\n");
    printf("Type  Name  Customername  Units  Price\n");
    for(i=0;i<n;i++)
    {
        scanf("%s%s%s%d%f",cptr->type,cptr->name,cptr->customer_name,&cptr->units,&cptr->price);
        cptr++;
    }
}

void display(COLD *cptr,int n)
{
    int i;
    printf("The details are\n");
    printf("Type\t Name\t Customer name\t Units\t Price\n");
    for(i=0;i<n;i++)
    {
        printf("%s\t %s\t %s\t %d\t %0.2f\n",cptr->type,cptr->name,cptr->customer_name,cptr->units,cptr->price);
        cptr++;
    }
}

void display_least(COLD *cptr,int n)
{
    int i;
    float min=1000;
    COLD *min_ptr;
    for(i=0;i<n;i++)
    {
        if(min>cptr->price)
        {
            min=cptr->price;
            min_ptr=cptr;
        }
        cptr++;
    }
    printf("Cold drink with lowest cost is\n");
    printf("Type\t Name\t Customer name\t Units\t Price\n");
    printf("%s\t %s\t %s\t %d\t %0.2f\n",min_ptr->type,min_ptr->name,min_ptr->customer_name,min_ptr->units,min_ptr->price);
}

void display_more(COLD *cptr,int n)
{
    int i,x=0;
    for(i=0;i<n;i++)
    {
        cptr->total=cptr->price*cptr->units;
        if(cptr->total>1000)
        {
            printf("Details  are\n");
            printf("%s\t %s\t %s\t %d\t %0.2f\n",cptr->type,cptr->name,cptr->customer_name,cptr->units,cptr->price);
            x=1;
        }
            cptr++;
    }
    if(x==0)
    {
        printf("No cold drink details\n");
    }
}
