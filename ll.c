#include<stdio.h>
struct node
{
 int data;
 struct node *next;
};

struct node *head;
struct node* insert_at_beg(struct node *);
struct node* insert_at_end(struct node *);
struct node* delete_at_beg(struct node *);
struct node* delete_at_end(struct node *);
void display(struct node *);
int count_nodes(struct node *);
struct node * insert_at_pos(struct node*, int);
void search_node(struct node*,int);
struct node * delete_at_pos(struct node *head,int pos);
void delete_lhs(struct node *head);
struct node *temp,*temp1,*newnode;
void Reverse(struct node *head);

main()
{
int ch,c,pos,d;
head=NULL;
   while(1)
   {
     printf("1--insert at beginning\n");
     printf("2--insert at end\n");
     printf("3--delete from beginning\n");
     printf("4--delete from end\n");
     printf("5--display linked list\n");
     printf("6--count of nodes\n");
     printf("7--insert a node at a pos\n");
     printf("8--search a node\n");
     printf("9--Delete a node at a pos\n");
     printf("10--Delete a by LHS\n");
     printf("11--Reverse of Link list\n");
     printf("12--exit\n");

     printf("enter your choice\n");
     scanf("%d",&ch);
     switch(ch)
     {
      case 1:newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter data\n");
             scanf("%d",&newnode->data);
             head=insert_at_beg(newnode);
             break;
    case 2: newnode=(struct node*)malloc(sizeof(struct node));
             printf("enter data\n");
             scanf("%d",&newnode->data);
             head=insert_at_end(newnode);
             break;
    case 3: if(head==NULL)
             printf("linked list is empty---cant delete\n");
             else
             {
                head=delete_at_beg(head);
             }
             break;
    case 4: if(head==NULL)
             printf("linked list is empty---cant delete\n");
             else
             {
                head=delete_at_end(head);
             }
             break;
    case 5: display(head);break;
    case 6: c=count_nodes(head);
            printf("no of nodes=%d\n",c);
            break;
    case 7: printf("enter position\n");
            scanf("%d",&pos);
            if(pos<1 ||pos>count_nodes(head)+1)
            printf("invalid pos\n");
            else
            {
                newnode=(struct node*)malloc(sizeof(struct node));
                printf("enter data\n");
                scanf("%d",&newnode->data);
                head=insert_at_pos(newnode,pos);
            }
                    break;
    case 8:printf("enter the data to search\n");
           scanf("%d",&d);
           search_node(head,d);
           break;
    case 9: printf("enter position\n");
                   scanf("%d",&pos);
                    if(pos<1 ||pos>count_nodes(head)+1)
                        printf("invalid pos\n");
                    else
                        head=delete_at_pos(head,pos);
                    break;
    case 10:delete_lhs(head);break;
    case 11:Reverse(head);break;
    case 12: exit(0);break;
    default: printf("Invalid choice\n");break;
     }
   }
}

struct node* insert_at_beg(struct node *newnode)
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

struct node* insert_at_end(struct node *newnode)
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

void display(struct node *head)
{
   if(head==NULL)
   {
     printf("the linkded list is empty\n");
   }
   else
   {
      temp=head;
      while(temp!=NULL)
      {
         printf("%d->",temp->data);
         temp=temp->next;
      }
      printf("\n");
   }
}

struct node* delete_at_beg(struct node *head)
{
    if(head==NULL)
    {
        printf("linkded list is empty\n");
    }
    else
    {
       if(head->next==NULL)
       {
           printf("node deleted=%d\n",head->data);
           free(head);
           head=NULL;
           return(head);
       }
       else
       {
           temp=head;
           head=head->next;
           printf("node deleted=%d\n",temp->data);
           free(temp);
           return(head);

       }
    }

}


struct node* delete_at_end(struct node *head)
{
    if(head==NULL)
    {
        printf("linkded list is empty\n");
    }
    else
    {
       if(head->next==NULL)
       {
           printf("node deleted=%d\n",head->data);
           free(head);
           head=NULL;
           return(head);
       }
       else
       {
           temp=head;
           //temp1=head->next;
           while(temp->next!=NULL)
           {
               temp1=temp;
               temp=temp->next;
           }
           printf("node deleted=%d\n",temp->data);
           free(temp);
           temp1->next=NULL;
           return(head);

       }
    }

}
int count_nodes(struct node *head)
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
struct node *insert_at_pos(struct node *newnode, int pos)
{
    int p;
    if(pos==1)
        head=insert_at_beg(newnode);
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
void search_node(struct node *head, int d)
{
    int found=0;
    if(head==NULL)
        printf("linked list is empty cant search\n");
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(temp->data==d)
            {
                printf("node found\n");
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(found==0)
            printf("node not found\n");
    }
}
struct node *delete_at_pos(struct node *head, int pos)
{
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
        printf("Node deleted=%d\n",temp->data);
        free(temp);
    }
    return(head);
}

void delete_lhs(struct node *head)
{
    temp1=head;
    temp=head->next;
    int max=head->data;
    while(temp!=NULL)
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
    display(head);
}

void Reverse(struct node *head)
{
    struct node *temp,*temp1,*var;
     temp=head;
     var=NULL;
     while(temp!=NULL)
     {
          temp1=var;
          var=temp;
          temp=temp->next;
          var->next=temp1;
     }
     head=var;
     display(head);
}
