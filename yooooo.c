#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node
{
  char level;
  char type;
  struct node *next;
};

struct node *getnode()
{
    struct node *newn;
    newn=(struct node *)malloc(sizeof(struct node));
    scanf("%c%c", &newn->level, &newn->type);
    newn->next=NULL;
    return newn;
}

struct node *iend(struct node *head)
{
    struct node *newnode=getnode();
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
    }
    return head;
}

int total_pts(struct node *head)
{
    struct node *temp=head;
    int pts=0;
    while(temp->next!=NULL)
    {
        if((temp->type)=='P')
        {
            if((temp->level)=='E')
                pts+=5;
            else if((temp->level)=='M')
                pts+=10;
            else if((temp->level)=='H')
                pts+=15;
            else if((temp->level)=='A')
                pts+=50;
            else
                pts+=100;
        }
        else if((temp->type)=='L')
        {
            if((temp->level)=='E')
                pts+=100;
            else if((temp->level)=='M')
                pts+=200;
            else if((temp->level)=='H')
                pts+=300;
            else if((temp->level)=='A')
                pts+=400;
            else
                pts+=500;
        }
        temp=temp->next;
    }
    return pts;
}

int hl_pts(struct node *head)
{
    struct node *temp=head;
    int pts1=0;
    while(temp->next!=NULL)
    {
        if((temp->level)=='H' && (temp->type)=='L')
        {
            pts1+=300;
        }
        temp=temp->next;
    }
    return pts1;
}

void display(struct node *head)
{
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        if((temp->level)=='E' && (temp->type)=='P')
        {
            continue;
        }
        else
        {
            printf("%c %c ", temp->level, temp->type);
        }
        temp=temp->next;
    }
}

int main() {
    struct node *head=NULL;
    int n, count=0, flag=0, t, h;
    while(1)
    {
        scanf("%d", &n);
        if(n==0)
            break;
        else
        {
            head=iend(head);
            count++;
            flag=1;
        }
    }
    if(!flag)
    {
        printf("0\n0\n0\n-\n");
    }
    else
    {
        printf("%d\n", count);
        t=total_pts(head);
        printf("%d\n", t);
        h=hl_pts(head);
        printf("%d\n", h);
        display(head);
    }

    return 0;
}
