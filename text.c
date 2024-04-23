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
    scanf("%d", &newn->data);
    newn->next=NULL;
    newn->prev=NULL;
    return newn;
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

int selected(struct node *head)
{
    int count=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->data>150)
        {
        if(temp->prev==NULL)
        {
            if(temp->data<temp->next->data)
            {
                printf("%d ", temp->data);
                count++;
            }
        }

        else if(temp->next==NULL)
        {
            if(temp->data>temp->prev->data)
            {
                printf("%d ", temp->data);
                count++;
            }
        }

        else
        {
            if((temp->data>temp->prev->data) && (temp->data<temp->next->data))
            {
                printf("%d ", temp->data);
                count++;
            }

        }
      }
        temp=temp->next;
    }
    return count;
}

int main()
{
    struct node *head=NULL;
    int n, i, c;
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        head=iend(head);
    }
   c=selected(head);
    printf("\n%d", c);
    return 0;
}

