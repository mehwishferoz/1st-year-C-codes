#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node*next;
}*snode;
snode getnode()
{
    snode newn=(snode)malloc(sizeof(struct node));
    newn->next= NULL;
    return newn;
}
snode read()
{
    snode newn=getnode();
    printf("Enter the data :");
    scanf("%d",&newn->data);
    return newn;
}
void display(snode head)
{
    if(head==NULL)
    {
        printf("The link list is empty\n");
    }
    else
    {
     int c=0;
     snode temp;
     temp=head;
     do
     {
       printf("%d->",temp->data);
       temp=temp->next;
     }
     while(temp!=head);
    }
}
snode insert_at_the_beg(snode head)
{
    snode newnode=read();
   if(head==NULL)
     {
        head=newnode;
        newnode->next=head;
     }
     else
     {
        snode temp=head;
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
snode insert_at_the_end(snode head)
{
    snode newnode=read();
    if(head==NULL)
    {
        head=newnode;
        newnode->next=head;
        return(head);
    }
    else
    {
      snode temp;
      temp=head;
      do
      {
        temp=temp->next;
      }
      while(temp->next!=head);
      temp->next=newnode;
      newnode->next=head;
    }
    return(head);

}
snode del_at_the_beg(snode head)
{
  if(head==NULL)
  {
      return(head);
  }
  else if(head->next==head)
  {
      printf("The list after deleting %d becomes :\n",head->data);
      free(head);
      head=NULL;
      return(head);
  }
  else
  {
      snode p,q;
      p=head;
      while(p->next!=head)
      {
          p=p->next;
      }
      q=head->next;
      free(head);
      p->next=q;
      head=q;
      return(head);
  }
}
snode del_at_the_end(snode head)
{
    if(head==NULL)
    {
     return(head);
    }
    else if(head->next==head)
    {
      printf("After deleting the node %d at the end the list becomes :\n",head->data);
      free(head);
      head=NULL;
      return(head);
    }
    else
    {
        snode p,q;
        p=head;
        q=head->next;
        while(q->next!=head)
        {
            p=p->next;
            q=q->next;
        }
        p->next=head;
        printf("After deleting the %d at the end the list becomes :\n",q->data);
        free(q);
        return(head);
    }
}
    void main()
{
    snode head;
    head=NULL;
    while(1)
    {
        int n;
        printf("Press 1 to display the list\n");
        printf("Press 2 to insert the node in the beginning of the list\n");
        printf("Press 3 to insert the node at the end of the list\n");
        printf("Press 4 to delete the node at beginning\n");
        printf("Press 5 to delete the node at the end\n");
        printf("press 6 to exit \n");
        scanf("%d",&n);
        switch(n)
        {
             case 1 :display(head);
                    break;

            case 2 :head = insert_at_the_beg(head);
                    break;

            case 3:head=insert_at_the_end(head);
                    break;
            case 4:head=del_at_the_beg(head);
                   break;
            case 5:head=del_at_the_end(head);
                    break;
            case 6:exit(0);
                    break;
            default:printf("invalid entry !");
                    break;
        }
    }
}
