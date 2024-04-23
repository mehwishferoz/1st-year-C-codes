#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* getnode()
{
    struct node* newn;
    newn=(struct node*)malloc(sizeof(struct node));
    newn->next=NULL;
    return newn;
}
struct node* read(struct node* newnode)
{
    struct node* newn=getnode();
    printf("Enter the data: \n");
    scanf("%d", &newn->data);
    return newn;
}
struct node* ibeg(struct node *head)
{
    struct node *newnode;
    newnode=read(newnode);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        struct node *temp;
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
struct node* iend(struct node *head)
{
    struct node *newnode=read(newnode);

    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
    }
    else
    {
        struct node *temp;
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
struct node* dbeg(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty, can't delete\n");
    }
    else
    {
        if(head->next=head)
        {
            printf("Node deleted = %d\n", head->data);
            free(head);
            head=NULL;
        }
        else
        {
            struct node *temp, *temp1;
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            printf("Node deleted = %d\n", head->data);
            temp1=head->next;
            temp->next=temp1;
            free(head);
            head=temp1;
        }
        return(head);
    }
}
struct node* dend(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty, can't delete\n");
    }
    else
    {
        if(head->next==head)
        {
            printf("Node deleted = %d\n", head->data);
            free(head);
            head=NULL;
        }
        else
        {
            struct node *temp, *temp1;
            temp=head;
            while(temp->next!=head)
            {
                temp1=temp;
                temp=temp->next;
            }
            printf("Node deleted = %d\n", temp->data);
            free(temp);
            temp1->next=head;
        }
        return(head);
    }
}
int count(struct node *head)
{
    int count=0;
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
        count++;
    }
    return count;
}
void search(struct node *head)
{
    int found=0, key;
    struct node *temp;
    temp=head;
    printf("Enter the data to be searched: \n");
    scanf("%d", &key);
    while(temp->next!=head)
    {
        if(temp->data==key)
        {
            found=1;
            printf("Data found\n");
        }
        temp=temp->next;
    }
    if(!found)
        printf("Data not found\n");
}
void display(struct node *head)
{
    struct node *temp;
    temp=head;
    while(temp->next!=head)
    {
        printf("%d->", temp->data);
        temp=temp->next;
    }
    printf("%d->", temp->data);
}
struct node* iatpos(struct node *head, int pos)
{
    int p;
    if(pos==1)
    {
        head=ibeg(head);
    }
    else
    {
        p=1;
        struct node *temp=head, *temp1, *newnode=read(newnode);
        while(p!=pos)
        {
            temp1=temp;
            temp=temp->next;
            p++;
        }
        temp1->next=newnode;
        newnode->next=temp;
    }
    return(head);
}
struct node* datpos(struct node *head, int pos)
{
    int p;
    struct node *temp=head, *temp1;
    if(pos==1)
    {
        head=dbeg(head);
    }
    else
    {
        p=1;
        temp=head;
        while(p!=pos)
        {
            p++;
            temp1=temp;
            temp=temp->next;
        }
        printf("Node deleted = %d\n", temp->data);
        temp1->next=temp->next;
        free(temp);
    }
    return(head);
}
struct node* delbylhs(struct node *head)
{
    struct node *temp, *temp1;
    temp1=head;
    temp=head->next;
    int max=head->data;
    while(temp->next!=head)
    {
        if(temp->data>max)
        {
            max=temp->data;
            temp1=temp;
            temp=temp->next;
        }
        else
        {
            temp1->next=temp->next;
            free(temp);
            temp=temp1->next;
        }
    }

      if(temp->data>max)
        {
            max=temp->data;
            temp1=temp;
            temp=temp->next;
        }
        else
        {
            temp1->next=temp->next;
            free(temp);
            temp=temp1->next;
        }
        display(head);
}

void main()
{
    struct node *head;
    head=NULL;
    int x, c, pos;
    while(1)
    {
        printf("Enter your choice: \n");
        printf("1---Insert a node at the beginning\n");
        printf("2---Insert a node at the end\n");
        printf("3---Delete at the beginning\n");
        printf("4---Delete at the end\n");
        printf("5---Insert at a position\n");
        printf("6---Delete at a position\n");
        printf("7---Delete from the lhs\n");
        printf("8---Count the number of nodes\n");
        printf("9---Search a node\n");
        printf("10---Display the linked list\n");
        printf("11---Exit\n");

        scanf("%d", &x);

        switch(x)
        {
        case 1: head=ibeg(head);
                break;

        case 2: head=iend(head);
                break;

        case 3: head=dbeg(head);
                break;

        case 4: head=dend(head);
                break;

        case 5: printf("Enter the position at which you wish to insert: \n");
        scanf("%d", &pos);
        if(pos<1 || pos>count(head)+1)
            printf("Invalid input\n");
        else
        head=iatpos(head,pos);
        break;

        case 6: printf("Enter the position at which you wish to delete: \n");
        scanf("%d", &pos);
        if(pos<1 || pos>count(head))
            printf("Invalid input\n");
        else
            head=datpos(head,pos);
        break;

        case 7: head=delbylhs(head);
        break;

        case 8: c=count(head);
        printf("Number of nodes = %d\n", c);
        break;

        case 9: search(head);
        break;

        case 10: display(head);
        break;

        case 11: exit(0); break;

        default:
            printf("Invalid input\n");
            break;
        }
    }
}







































