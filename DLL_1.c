#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node* getnode()
{
    struct node *newn;
    newn=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d", &newn->data);
    newn->next=NULL;
    newn->prev=NULL;
    return newn;
}

struct node* ibeg(struct node *head)
{
    if(head==NULL)
    {
        head=getnode();
        return head;
    }
    else
    {
        struct node* newnode;
        newnode=getnode();
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        return head;
    }
}

struct node* iend(struct node *head)
{
    if(head==NULL)
    {
        head=getnode();
        return head;
    }

    else
    {
        struct node *temp, *temp1;
        temp=head;
        temp1=getnode();
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=temp1;
        temp1->prev=temp;
        return head;
    }
}

struct node* dbeg(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\nCan't delete\n");
    }
    else
    {
        printf("Node deleted = %d\n", head->data);
        head=head->next;
        head->prev=NULL;
        return head;
    }
}

struct node* dend(struct node *head)
{
    struct node *temp, *temp1;
    temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    printf("Node deleted = %d\n", temp->data);
    temp1->next=NULL;
    free(temp);
    return head;

}

void display(struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("<-%d->", temp->data);
        temp=temp->next;
    }
    printf("\n");
}

int count(struct node *head)
{
    int count=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    return count;
}

struct node *iatpos(struct node *head, int pos)
{
    struct node *newnode=getnode(), *temp=head;
    if(pos==1)
    {
        head=ibeg(newnode);
        return head;
    }
    else
    {
        int p=2;
        while(p!=pos)
        {
            temp=temp->next;
            p++;
        }
        printf("%d",temp->data);
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next->prev=newnode;
        temp->next=newnode;
        return head;
    }
}

int main()
{
    int x, c, pos;
    struct node *head=NULL;
    while(1)
    {
        printf("Enter your choice: \n");
        printf("1---Insert at the beginning\n");
        printf("2---Insert at the end\n");
        printf("3---Delete at the beginning\n");
        printf("4---Delete at the end\n");
        printf("5---Display the LL\n");
        printf("6---Count the number of nodes\n");
        printf("7---Insert at the entered position\n");
        printf("8---Exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
            head=ibeg(head);
            break;
        case 2:
            head=iend(head);
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
        case 6:
            c=count(head);
            printf("Number of nodes = %d\n", c);
            break;
        case 7:
            printf("Enter the position at which you wish to insert: \n");
            scanf("%d", &pos);
            head=iatpos(head,pos);
            break;
        case 8: exit(0); break;
        default:
        printf("Invalid input\n"); break;
        }
    }
    return 0;
}
