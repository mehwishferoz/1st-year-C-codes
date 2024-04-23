//29 operations can be performed on linked list
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head, *temp, *temp1, *newnode;
struct node* ibeg(struct node*);
struct node* iend(struct node*);
struct node* dbeg(struct node*);
struct node* dend(struct node*);
struct node* insert_at_pos(struct node*, int);
struct node* delete_at_pos(struct node*, int);
void search(struct node*, int);
void display(struct node*);
int count (struct node*);

int main()
{
    int x, c, pos, d;
    head = NULL;
    while(1)
    {
        printf("1--Insert at beginning\n");
        printf("2--Insert at the end\n");
        printf("3--Delete from beginning\n");
        printf("4--Delete from the end\n");
        printf("5--Display data\n");
        printf("6--Number of nodes\n");
        printf("7--Insert at a specific position\n");
        printf("8--Delete at a specific position\n");
        printf("9--Search a specific data\n");
        printf("10--Delete from LHS\n");
        printf("11-Exit\n");
        printf("\nEnter your choice: \n");
        scanf("%d", &x);
        switch(x)
        {
        case 1:
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: \n");
            scanf("%d", &newnode->data);
            head=ibeg(newnode);
            break;
        case 2:
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: \n");
            scanf("%d", &newnode->data);
            head=iend(newnode);
            break;
        case 3:
            if(head==NULL)
                printf("Linked list is empty\nCan't delete\n");
            else
            {
                head=dbeg(head);
            }
            break;
        case 4:
            if(head==NULL)
                printf("Linked list is empty\nCan't delete\n");
            else
            {
                head=dend(head);
            }
        case 5: display(head);break;
        case 6: c=count(head);
                    printf("Number of nodes: %d\n", c);
                    break;
        case 7: printf("Enter the position at which you wish to insert: \n");
                scanf("%d", &pos);
                if(pos<1 || pos>count(head)+1)
                    printf("Invalid position entered\n");
                else
            {
            newnode=(struct node*)malloc(sizeof(struct node));
            printf("Enter the data: \n");
            scanf("%d", &newnode->data);
            head=insert_at_pos(newnode, pos);
            }
            break;
        case 8: printf("Enter the position at which you wish to insert: \n");
                scanf("%d", &pos);
                if(pos<1 || pos>count(head)+1)
                    printf("Invalid position entered\n");
                else
                {
                    head=delete_at_pos(head, pos);
                }
                break;
        case 9: printf("Enter the data to be d=searched: \n");
                scanf("%d", &d);
                search(head,d);
                break;
        case 10: exit(0);break;
        default: printf("Invalid choice\n");
        }
    }
}
struct node* ibeg(struct node *newnode)
{
    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        return(head);
    }
    else
    {
        newnode->next=head;
        head=newnode;
        return(head);
    }
}
struct node* iend(struct node *newnode)
{
    if(head==NULL)
    {
        head=newnode;
        head->next=NULL;
        return(head);
    }
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
        return(head);
    }
}
struct node* dbeg(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        if(head->next==NULL)
        {
            printf("Node deleted = %d\n", head->data);
            free(head);
            head=NULL;
            return(head);
        }
        else
        {
            temp=head;
            head=head->next;
            printf("Node deleted = %d\n", temp->data);
            free(temp);
            return(head);
        }
    }
}
struct node* dend(struct node *head)
{
    if(head==NULL)
        printf("Linked list is empty\n");
    else
    {
        if(head->next==NULL)
        {
            printf("Node deleted = %d\n", head->data);
            free(head);
            head=NULL;
            return(head);
        }
        else
        {
            temp=head;
            temp1=head->next;
            while(temp->next!=NULL)
            {
                temp1=temp;
                temp=temp->next;
            }
            printf("Node deleted = %d\n", temp->data);
            free(temp);
            temp1->next=NULL;
            return(head);
        }
    }
}
void display(struct node *head)
{
    if(head==NULL)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            printf("%d->", temp->data);
            temp=temp->next;
        }
        printf("\n");
    }
}
int count(struct node *head)
{
    int count=0;
    if(head==NULL)
        return(count);
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        return(count);
    }
}
struct node* insert_at_pos(struct node *newnode, int pos)
{
    int p;
    temp=head;
    if(pos==1)
        head=ibeg(newnode);
    else
    {
        p=1;
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
struct node* delete_at_pos(struct node *head, int pos)
{
    int p;
    temp=head;
    if(pos==1)
        head=dbeg(head);
    else
    {
        p=1;
        while(p!=pos)
        {
            temp1=temp;
            temp=temp->next;
            p++;
        }
        temp1->next=temp->next;
        printf("Node deleted = %d\n", temp->data);
        free(temp);
    }
    return(head);
}
void search(struct node *head, int d)
{
    int found=0;
    if(head==NULL)
    {
        printf("List is empty\nNode not found\n");
    }
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data==d)
            {
                printf("Node found\n");
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(found==0)
            printf("Node not found\n");
    }
}
