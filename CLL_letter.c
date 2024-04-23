#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct letter
{
  char name[25];
  int hno;
  char area[100];
  long int mobileno;
  struct letter *next;
} node;
node *head,*temp,*temp1,*newnode;
node* insert_at_beg(node *);
node* insert_at_end(node *);
node* delete_at_beg(node *);
node* delete_at_end(node *);
node* insert_at_pos(node *, int);
node* delete_at_pos(node *, int);
void search(node *);
int count(node *);
void display(node *);
int main()
{
  head=NULL;
  int x, pos;
  while(1)
  {
  printf("1---insert at beginning\n");
  printf("2---insert at end\n");
  printf("3---delete at beginning\n");
  printf("4---delete at end\n");
  printf("5---display\n");
  printf("6---Insert at a position\n");
  printf("7---Delete at a position\n");
  printf("8---Search data\n");
  printf("9---Count the number of nodes\n");
  printf("10---exit\n");
  printf("enter the choice\n");
scanf("%d",&x);
switch(x)
{
case 1: newnode=(node*)malloc(sizeof(node));
                 printf("Enter name, house number, area name and mobile number: \n");
                 scanf("%s%d%s%ld",newnode->name, &newnode->hno, newnode->area, &newnode->mobileno);
                 head=insert_at_beg(newnode);
                 break;
case 2: newnode=(node*)malloc(sizeof(node));
                 printf("Enter name, house number, area name and mobile number: \n");
                 scanf("%s%d%s%ld",newnode->name, &newnode->hno, newnode->area, &newnode->mobileno);
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
    newnode=(node*)malloc(sizeof(node));
    printf("Enter name, house number, area name and mobile number: \n");
    scanf("%s%d%s%ld",newnode->name, &newnode->hno, newnode->area, &newnode->mobileno);
    head=insert_at_pos(newnode,pos);
}
    break;
case 7: printf("Enter the position where you wish to delete the node: \n");
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
case 10: exit(0);break;
default:printf("Invalid choice\n");break;
}
}
return 0;
}


node* insert_at_beg(node *newnode)
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


node* insert_at_end(node *newnode)
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
node* delete_at_beg(node *head)
{
   if(head==NULL)
     {
        printf("CLL is empty--cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("node deleted=%s\n",head->name);
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
              printf("node deleted=%s\n",head->name);
              temp1=head->next;
              free(head);
              temp->next=temp1;
              head=temp1;
         }
     }
     return(head);
}
node* delete_at_end(node *head)
{
   if(head==NULL)
     {
        printf("CLL is empty--cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("node deleted=%s\n",head->name);
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
              printf("node deleted=%s\n",temp->name);
             free(temp);
             temp1->next=head;
         }
     }
     return(head);
}



void display(node *head)
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
            printf("Name=%s\tHouse number=%d\tArea=%s\tMobile number=%ld\n",temp->name, temp->hno, temp->area, temp->mobileno);
            temp=temp->next;
         }
         printf("Name=%s\tHouse number=%d\tArea=%s\tMobile number=%ld\n",temp->name, temp->hno, temp->area, temp->mobileno);
     }
}
node * insert_at_pos(node *newnode, int pos)
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
node * delete_at_pos(node *head, int pos)
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
        printf("Node deleted=%s\n", temp->name);
        free(temp);
    }
    return(head);
}
void search(node *head)
{
    int found=0;
    char key[30];
    printf("Enter the name to be searched: \n");
    scanf("%s", &key);
    temp=head;
    do
    {
        if(strcmp(key,temp->name)==0)
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
int count(node *head)
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
