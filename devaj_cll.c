#include<stdio.h>
#include<stdlib.h>
struct letter
{
    char name[25];
    int hno;
    char area[100];
    long long int mobileno;
    struct letter *next;
};
struct letter * insert_at_beg(struct letter *newnode,struct letter *head);
struct letter * insert_at_end(struct letter *newnode,struct letter *head);
struct letter * delete_at_beg(struct letter *head);
struct letter * delete_at_end(struct letter *head);
void display(struct letter *head);
int count_nodes(struct letter *head);
struct letter * insert_at_pos(struct letter *newnode,struct letter *head,int pos);
void search_node(struct letter *head,int d);
struct letter * delete_at_pos(struct letter *head,int pos);

void main()
{
    struct letter *head,*newnode;
    head=NULL;
    int choice,d,c,pos;
    while(1)
    {
        printf("\n1-insert at begining\n");
        printf("2--insert at end\n");
        printf("3--delete at begining\n");
        printf("4--delete at end\n");
        printf("5--display\n");
        printf("6--count of students\n");
        printf("7--insert a node at a pos\n");
        printf("8--search a node\n");
        printf("9--Delete a node at a pos\n");
        printf("10--exit\n");
        printf("enter the choice\n");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            newnode=(struct letter *)malloc(sizeof(struct letter));
            printf("Enter name,house number,area,mobile number\n");
            scanf("%s%d%s%lld",&newnode->name,&newnode->hno,&newnode->area,&newnode->mobileno);
            head=insert_at_beg(newnode,head);
            break;
        case 2:
            newnode=(struct letter *)malloc(sizeof(struct letter));
            printf("Enter name,house number,area,mobile number\n");
            scanf("%s%d%s%lld",&newnode->name,&newnode->hno,&newnode->area,&newnode->mobileno);
            head=insert_at_end(newnode,head);
            break;
        case 3:
            head=delete_at_beg(head);
            break;
        case 4:
            head=delete_at_end(head);
            break;
        case 5:
            display(head);
            break;
        case 6:
            c=count_nodes(head);
            printf("no of letters=%d\n",c);
            break;
        case 7:
            printf("enter position\n");
            scanf("%d",&pos);
            if(pos<1 ||pos>count_nodes(head)+1)
                printf("invalid pos\n");
            else
            {
                newnode=(struct letter*)malloc(sizeof(struct letter));
                printf("Enter name,house number,area,mobile number\n");
                scanf("%s%d%s%lld",&newnode->name,&newnode->hno,&newnode->area,&newnode->mobileno);
                head=insert_at_pos(newnode,head,pos);
            }
            break;
        case 8:
            printf("enter the house number you want to search\n");
            scanf("%d",&d);
            search_node(head,d);
            break;
        case 9:
            printf("enter position\n");
            scanf("%d",&pos);
            if(pos<1 ||pos>count_nodes(head))
                printf("invalid pos\n");
            else
                head=delete_at_pos(head,pos);
            break;
        case 10:
            exit(0);
            break;
        default:
            printf("invalid choice\n");
            break;
        }
    }
}


struct letter * insert_at_beg(struct letter *newnode,struct letter *head)
{
    struct letter *temp;
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


struct letter * insert_at_end(struct letter *newnode,struct letter *head)
{
    struct letter *temp;
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



struct letter * delete_at_beg(struct letter *head)
{
    struct letter *temp,*temp1;
    if(head==NULL)
    {
        printf("CLL is empty--cant delete\n");
    }
    else
    {
        if(head->next==head)
        {
            printf("Node deleted:%s  %d  %s  %lld",head->name,head->hno,head->area,head->mobileno);
            free(head);
            head=NULL;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp=temp->next;
            }
            printf("Node deleted:%s  %d  %s  %lld",head->name,head->hno,head->area,head->mobileno);
            temp1=head->next;
            free(head);
            temp->next=temp1;
            head=temp1;
        }
    }
    return(head);
}



struct letter * delete_at_end(struct letter *head)
{
    struct letter *temp,*temp1;
    if(head==NULL)
    {
        printf("CLL is empty--cant delete\n");
    }
    else
    {
        if(head->next==head)
        {
            printf("Node deleted:%s  %d  %s  %lld",head->name,head->hno,head->area,head->mobileno);
            free(head);
            head=NULL;
        }
        else
        {
            temp=head;
            while(temp->next!=head)
            {
                temp1=temp;
                temp=temp->next;
            }
            printf("Node deleted:%s  %d  %s  %lld",temp->name,temp->hno,temp->area,temp->mobileno);
            free(temp);
            temp1->next=head;
        }
    }
    return(head);
}



void display(struct letter *head)
{
    struct letter *temp;
    if(head==NULL)
    {
        printf("CLL is empty\n");
    }
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            printf("%s  %d  %s  %lld-->",temp->name,temp->hno,temp->area,temp->mobileno);
            temp=temp->next;
        }
        printf("%s  %d  %s  %lld",temp->name,temp->hno,temp->area,temp->mobileno);
    }
}

int count_nodes(struct letter *head)
{
    struct letter *temp;
    int count=0;
    if(head==NULL)
        return(count);
    else
    {
        temp=head;
        while(temp->next!=head)
        {
            count++;
            temp=temp->next;
        }
        count++;
        return(count);
    }
}
struct letter * insert_at_pos(struct letter *newnode,struct letter *head,int pos)
{
    struct letter *temp,*temp1;
    int p;
    if(pos==1)
        head=insert_at_beg(newnode,head);
    else
    {
        p=1;
        temp=head;
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
struct letter * delete_at_pos(struct letter *head,int pos)
{
    struct letter *temp,*temp1;
    int p;
    if(pos==1)
        head=delete_at_beg(head);
    else
    {
        p=1;
        temp=head;
        while(p!=pos)
        {
            temp1=temp;
            temp=temp->next;
            p++;
        }
        temp1->next=temp->next;
        printf("%s  %d  %s  %lld",temp->name,temp->hno,temp->area,temp->mobileno);
        free(temp);
    }
    return(head);
}
void search_node(struct letter *head,int d)
{
    struct letter *temp;
    int found=0;
    if(head==NULL)
        printf(" Circular linked list is empty cant search\n");
    else
    {

        temp=head;
        while(temp->next!=head)
        {
            if(temp->hno==d)
            {
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(temp->hno==d)
        {
            printf("Letter found\n");
            found=1;
        }

        if(!found)
            printf("Letter not found\n");
    }
}
