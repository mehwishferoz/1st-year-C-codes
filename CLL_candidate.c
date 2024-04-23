#include<stdio.h>
#include<stdlib.h>

struct candidate
{
    char name[25];
    int rank, age;
    char address[100];
    struct candidate *next;
};
struct candidate *head, *temp, *temp1, *newnode;
struct candidate* ibeg(struct candidate*);
struct candidate* iend(struct candidate*);
struct candidate* dbeg(struct candidate*);
struct candidate* dend(struct candidate*);
void display(struct candidate*);

int main()
{
    struct candidate *newnode, *head;
    int x;
    head=NULL;
    while(1)
    {
        printf("Enter your choice: \n");
        printf("1---Insert at the beginning\n");
        printf("2---Insert at the end\n");
        printf("3---Delete from the beginning\n");
        printf("4---Delete from the end\n");
        printf("5---Display the data\n");
        printf("6---Exit\n");

        scanf("%d", &x);

        switch(x)
        {
        case 1:
            newnode=(struct candidate*)malloc(sizeof(struct candidate));
            printf("Enter the name, rank, age and address of the candidate: \n");
            scanf("%s%d%d%s", newnode->name, &newnode->rank, &newnode->age, newnode->address);
            head=ibeg(newnode);
            break;
        case 2:
            newnode=(struct candidate*)malloc(sizeof(struct candidate));
            printf("Enter the name, rank, age and address of the candidate: \n");
            scanf("%s%d%d%s", newnode->name, &newnode->rank, &newnode->age, newnode->address);
            head=iend(newnode);
            break;
        case 3:
            head=dbeg(head);
            break;
        case 4:
            head=dend(head);
            break;
        case 5:
            display(head);
            break;
        case 6: exit(0);break;
        default:
            printf("Invalid input\n");
        }
    }
    return 0;
}

struct candidate* ibeg(struct candidate *newnode)
{
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
        head=newnode;
    }
    return(head);
}

struct candidate* iend(struct candidate *newnode)
{
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=head;
    }
    return(head);
}
struct candidate* dbeg(struct candidate *head)
{
    if(head==NULL)
    {
        printf("CLL is empty\nCan't delete\n");
    }
    else
    {
        if(head->next==head)
        {
            printf("Node deleted=%s\n", head->name);
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            printf("Node deleted=%s\n", head->name);
            temp1=head->next;
            free(head);
            temp->next=temp1;
            head=temp1;
        }
    }
    return(head);
}
struct candidate* dend(struct candidate *head)
{
    if(head==NULL)
    {
        printf("CLL is empty\nCan't delete\n");
    }
    else
    {
        if(head->next=head)
        {
            printf("Node deleted=%s\n", head->name);
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp1=temp;
                temp=temp->next;
            }
            printf("Node deleted=%s\n", temp->name);
            temp1->next=head;
            free(temp);
        }
    }
    return(head);
}
void display(struct candidate *head)
{
    if(head==NULL)
        printf("CLL is empty\n");
    else
    {
    temp=head;
    do
    {
        printf("Name=%s\tRank=%d\tAge=%d\tAddress=%s\n", temp->name, temp->rank, temp->age, temp->address);
        temp=temp->next;
    }
    while(temp!=head);
    }
}
