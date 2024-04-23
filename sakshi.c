#include<stdio.h>
typedef struct details_smartphone
{
    int year;
    char phone_name[10];
    int storage;
    int camera_quality;
    int price;
}DS;
void read(DS *p,int n);
void display(DS *p,int n);
void less_price(DS *p,int n);
void display_acc_year(DS *p,int n);
main()
{
    int n;
    DS *p,b[10];
    p=&b;
    printf("Enter the number of smartphones\n");
    scanf("%d",&n);
    read(p,n);
    display(p,n);
    less_price(p,n);
    display_acc_year(p,n);
}
void read(DS *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("enter the launch year of the phone\n");
        scanf("%d",&p->year);
        printf("enter the name of the phone\n");
        scanf("%s",p->phone_name);
        printf("enter the storage of the phone\n");
        scanf("%d",&p->storage);
        printf("enter its camera quality\n");
        scanf("%d",&p->camera_quality);
        printf("enter the cost of the phone\n");
        scanf("%d",&p->price);
        p++;
    }
}
void display(DS *p,int n)
{
    int i;
    for(i=0;i<n;i++)
    {
       printf("launch year=%d\nname of the phone=%s\nstorage of the phone=%d\ncamera quality=%d\ncost of the phone=%d\n",p->year,p->phone_name,p->storage,p->camera_quality,p->price);
       p++;
    }
}
void less_price(DS *p,int n)
{
    int i,x,flag=0;
    printf("Enter the price\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(p->price<x)
        {
            printf("Mobile Details\n");
            printf("launch year=%d\nname of the phone=%s\nstorage of the phone=%d\ncamera quality=%d\ncost of the phone=%d\n",p->year,p->phone_name,p->storage,p->camera_quality,p->price);
            flag=1;
        }
        p++;
    }
    if(flag==0)
        printf("No smartphone found.\n");
}
void display_acc_year(DS *p,int n)
{
    int i,flag=0,y;
    printf("Enter the year\n");
    scanf("%d",&y);
    for(i=0;i<n;i++)
    {
        if(p->year==y)
        {
            printf("Mobile Details\n");
        printf("launch year=%d\nname of the phone=%s\nstorage of the phone=%d\ncamera quality=%d\ncost of the phone=%d\n",p->year,p->phone_name,p->storage,p->camera_quality,p->price);

        flag=1;
        }
        p++;
    }
    if(flag==0)
        printf("No smartphone found\n");
}
