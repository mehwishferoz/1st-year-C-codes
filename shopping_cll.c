#include<stdio.h>
#include<stdlib.h>

typedef struct shopping
{
    char item[30];
    float price, disc;
    int n;
    struct shopping *next;
} bill;
bill* insert(bill*);
void display(bill*, char[], char[]);
bill* getnn();
int main()
{
    bill *head = NULL;
    char name[30], date[30];
    int x;
    printf("Enter the customer name: \n");
    gets(name);
    printf("Enter date in dd/mm/yy format: \n");
    gets(date);

    while(1)
    {
        printf("Enter your choice: \n");
        printf("1---Add items to the bill\n");
        printf("2---Display bill\n");
        printf("3---Exit\n");
        scanf("%d", &x);

        switch(x)
        {
            case 1: head=insert(head);
                    break;
            case 2: display(head,name,date);
            break;
            case 3: exit(0); break;
            default: printf("Invalid input\n");
        }
    }
    return 0;
}
bill* insert(bill *head)
{
    bill *cur, *newnode=getnn();
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        cur=head;
        while(cur->next!=head)
        {
            cur=cur->next;
        }
        cur->next=newnode;
        newnode->next=head;
    }
    return(head);
}
void display(bill *head, char name[30], char date[30])
{
    if(head==NULL)
    {
        printf("No items added\n");
    }
    else
    {
        bill *cur=head;
        float total=0;
        printf("Customer name = %s\n", name);
        printf("Purchase date = %s\n", date);
        printf("Item \t\t Price \t\t Discount \t\t Frequency\n");
        do
        {
            total=total+((cur->price)-(cur->price*cur->disc/100))*cur->n;
            printf("\n----------------------------------------------\n");
            printf("%s \t %f \t %f \t %d\n",cur->item,cur->price,cur->disc,cur->n);
            printf("\n----------------------------------------------\n");
            cur=cur->next;
        }while(cur!=head);
        printf("Total amount = %f\n",total);
        printf("Thanks for shopping!\n");
    }
}
bill* getnn()
{
    bill *newnode;
    newnode = (bill*)malloc(sizeof(bill));
                    printf("Enter item name: \n");
                    scanf("%s", newnode->item);
                    printf("Enter the price: \n");
                    scanf("%f", &newnode->price);
                    printf("Enter the discount: \n");
                    scanf("%f", &newnode->disc);
                    printf("Enter the number of items: \n");
                    scanf("%d", &newnode->n);
    return newnode;
}
