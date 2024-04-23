#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct fb
{
    char name[20];
    int pop;
    char g;
    struct fb *next;
}f1;

f1* newnode,*head,*temp,*prev,*node1;
f1* create();
f1* ins_end(f1*head);
void display(f1*head);
f1* del_cust(f1* head);

void main()
{
    int n;
    node1=(f1*)malloc(sizeof(f1)*1);
    head=node1;
    char kul[]="Kuldeep";
    strcpy(head->name,kul);
    head->g='m';
    head->pop=100;
    head->next=head;

    while (1)
    {

        printf("1--Add a friend\n");
        printf("2--display friends\n");
        printf("3-- delete less popular male friends\n");
        printf("10-- Exit\n");
        printf("enter your choice\n");
        scanf("%d",&n);
        switch(n)
        {

            case 1:head=ins_end(head);break;


            case 2:display(head);break;
            case 3:head=del_cust(head);break;
            case 10:
                temp=head;
                do
                {
                    free(temp);
                    temp=temp->next;
                }while(temp!=head);
                exit(0);
            default:printf("Invalid Choice\n");

        }
    }

}

f1* create()
{
    f1* newnode;

    char g;

    newnode=(f1*)malloc(sizeof(f1)*1);
    printf("Enter the details of the friend\n");
    printf("Enter the name\n");
    scanf("%s",newnode->name);
    printf("Enter the popularity\n");
    scanf("%d",&newnode->pop);
    printf("Enter the gender 'm' for male and 'f' for female\n");
    scanf(" %c",&newnode->g);


    return(newnode);
}


f1* ins_end(f1 *head)
{
    newnode=create();
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
void display(f1*head)
{
    if(head==NULL)
    {
        printf("The list is empty");
    }
    else
    {
        temp=head;
        do
        {
            printf("Name=%s\tPopularity=%d\tGender=%c\n",temp->name,temp->pop,temp->g);
            printf("\n");
            temp=temp->next;
        }while(temp!=head);
        printf("\n");
    }
}

f1* del_cust(f1* head)
{
    int n;
    printf("Enter the base popularity level below of that to be deleted");
    scanf("%d",&n);
    if(head->next==head)
    {
        return(head);
    }
    temp=head->next;
    prev=head;
    do
    {
        if(temp->g=='m')
        {
            if(temp->pop<n)
            {
                prev->next=temp->next;
                free(temp);
                temp=prev;
            }

        }
        prev=temp;
        temp=temp->next;

    }while(temp!=head);
    return(head);

}
