#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
struct node *head,*temp,*temp1,*newnode;
struct node * insert_at_beg(struct node *);
struct node * insert_at_end(struct node *);
struct node * delete_at_beg(struct node *);
struct node * delete_at_end(struct node *);
struct node * insert_at_pos(struct node *, int);
struct node * delete_at_pos(struct node *, int);
void delete_by_lhs(struct node *);
void search(struct node *);
int count(struct node *);
void display(struct node *);
int main()
{
  head=NULL;
  int ch, pos;
  while(1)
  {
  printf("1-insert at beginning\n");
  printf("2--insert at end\n");
  printf("3--delete at beginning\n");
  printf("4--delete at end\n");
  printf("5--display\n");
  printf("6---Insert at a position\n");
  printf("7---Delete at a position\n");
  printf("8---Search data\n");
  printf("9---Count the number of nodes\n");
  printf("10---Delete by LHS\n");
  printf("11--exit\n");
  printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
case 1: newnode=(struct node *)malloc(sizeof(struct node));
                 printf("enter the data\n");
                 scanf("%d",&newnode->data);
                 head=insert_at_beg(newnode);
                 break;
case 2: newnode=(struct node *)malloc(sizeof(struct node));
                 printf("enter the data\n");
                 scanf("%d",&newnode->data);
                 head=insert_at_end(newnode);
                 break;
case 3: head=delete_at_beg(head);
               break;
case 4:head=delete_at_end(head);
               break;
case 5: display(head);
              break;
case 6: printf("Enter the position where you wish to insert the node: \n");
        scanf("%d", &pos);
        if(pos<1 || pos>(count(head)+1))
        printf("Invalid position\n");
        else
{
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter the data: \n");
    scanf("%d", &newnode->data);
    head=insert_at_pos(newnode,pos);
}
    break;
case 7: printf("Enter the position where you wish to insert the node: \n");
        scanf("%d", &pos);
        if(pos<1 || pos>(count(head)+1))
        printf("Invalid position\n");
        else
        {
            head=delete_at_pos(head,pos);
        }
            break;
case 8: search(head);
break;
case 9: count(head);
break;
case 10: delete_by_lhs(head);
break;
case 11: exit(0);break;
default:printf("invalid choice\n");break;
}
}
return 0;
}


struct node * insert_at_beg(struct node *newnode)
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


struct node * insert_at_end(struct node *newnode)
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



struct node * delete_at_beg(struct node *head)
{
   if(head==NULL)
     {
        printf("CLL is empty--cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("node deleted=%d\n",head->data);
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
              printf("node deleted=%d\n",head->data);
              temp1=head->next;
              free(head);
              temp->next=temp1;
              head=temp1;
         }
     }
     return(head);
}



struct node * delete_at_end(struct node *head)
{
   if(head==NULL)
     {
        printf("CLL is empty--cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("node deleted=%d\n",head->data);
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
              printf("node deleted=%d\n",temp->data);
             free(temp);
             temp1->next=head;
         }
     }
     return(head);
}



void display(struct node *head)
{
  if(head==NULL)
     {
        printf("CLL is empty\n");
     }
     else
     {
         temp=head;
         while(temp->next!=head)
         {
            printf("%d->",temp->data);
            temp=temp->next;
         }
         printf("%d->\n",temp->data);
     }
}
struct node * insert_at_pos(struct node *newnode, int pos)
{
    int p;
    if(pos==1)
    {
        head=insert_at_beg(head);
    }
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
struct node * delete_at_pos(struct node *head, int pos)
{
    if(pos==1)
    {
        head=delete_at_beg(head);
    }
    else
    {
        int p=1;
        temp=head;
        while(p!=pos)
        {
            temp1=temp;
            temp=temp->next;
            p++;
        }
        temp1->next=temp->next;
        printf("Node deleted=%d\n", temp->data);
        free(temp);
    }
    return(head);
}
void search(struct node *head)
{
    int found=0, key;
    printf("Enter the data to be searched: \n");
    scanf("%d", &key);
    temp=head;
    do
    {
        if(key==temp->data)
        {
            found=1;
            break;
        }
        temp=temp->next;
    }while(temp->next!=head);
    if(found==1)
        printf("Data found\n");
    else
        printf("Data not found\n");
}
int count(struct node *head)
{
    int count=0;
    temp=head;
    if(head==NULL)
    {
        printf("CLL is empty\n");
    }
    else
{    do
    {
        count++;
        temp=temp->next;
    }while(temp->next!=head);
    count++;
}
    printf("Number of nodes=%d\n", count);
    return(count);
}
void delete_by_lhs(struct node *head)
{
    temp1=head;
    temp=head->next;
    int max=head->data;
    do
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
    }while(temp->next!=head);

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
