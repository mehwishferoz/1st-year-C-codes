#include<stdio.h>
#include<stdlib.h>
struct student
{
    char name[30];
    int rno;
    float marks;
    struct student *next;
};

struct student *temp, *temp1, *head, *newnode;
struct student* ibeg(struct student*);
struct student* iend(struct student*);
struct student* dbeg(struct student*);
struct student* dend(struct student*);
struct student* insertpos(struct student*, int);
struct student* deletepos(struct student*, int);
int count(struct student*);
void display(struct student*);
void search(struct student*, int);

int main()
{
    int x, c, pos, r;
    head=NULL;
    while(1)
    {
        printf("1--Insert student details at the beginning\n");
        printf("2--Insert student details at the end\n");
        printf("3--Delete student details from beginning\n");
        printf("4--Delete student details from end\n");
        printf("5--Display student details\n");
        printf("6--Number of students\n");
        printf("7--Insert at a specific position\n");
        printf("8--Delete at a specific position\n");
        printf("9--Search a specific roll number\n");
        printf("10--Delete from LHS\n");
        printf("11-Exit\n");
        printf("\nEnter your choice: \n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: newnode=(struct student*)malloc(sizeof(struct student));
            printf("Enter student details: \nName\tRoll number\tMarks\n");
            scanf("%s%d%f", newnode->name, &newnode->rno, &newnode->marks);
            head=ibeg(newnode);
            break;
            case 2: newnode=(struct student*)malloc(sizeof(struct student));
            printf("Enter student details: \nName\tRoll number\tMarks\n");
            scanf("%s%d%f", newnode->name, &newnode->rno, &newnode->marks);
            head=iend(newnode);
            break;
            case 3: if(head==NULL)
            printf("List is empty\nCan't delete\n");
            else
            {
                head=dbeg(head);
            }
            break;
            case 4: if(head==NULL)
            printf("List is empty\nCan't delete\n");
            else
            {
                head=dend(head);
            }
            break;
            case 5: display(head);break;
            case 6: c=count(head);
                    printf("Number of students: %d\n", c);
                    break;
            case 7: printf("Enter the position at which you wish to insert the node: \n");
                    scanf("%d", &pos);
                    if(pos<1 || pos>count(head)+1)
                        printf("Invalid position\n");
                    else
                    {
                        newnode=(struct student*)malloc(sizeof(struct student));
                        printf("Enter student details: \nName\tRoll number\tMarks\n");
                        scanf("%s%d%f", newnode->name, &newnode->rno, &newnode->marks);
                        head=insertpos(newnode, pos);
                    }
                    break;
            case 8: printf("Enter the position at which you wish to insert: \n");
                scanf("%d", &pos);
                if(pos<1 || pos>count(head)+1)
                    printf("Invalid position entered\n");
                else
                {
                    head=deletepos(head, pos);
                }
                break;
            case 9: printf("Enter the roll number of the student to be searched: \n");
                    scanf("%d", &r);
                    search(head,r);
                    break;
            case 10: exit(0);break;
            default: printf("Invalid choice\n");
        }
    }
}
struct student* ibeg(struct student *newnode)
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
struct student* iend(struct student *newnode)
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
struct student* dbeg(struct student *head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        if(head->next==NULL)
        {
            printf("Deleted student details = %s\n",head->name);
            free(head);
            head=NULL;
            return(head);
        }
        else
        {
            temp=head;
            head=head->next;
            printf("Deleted student details = %s\n",temp->name);
            free(temp);
            return(head);
        }
    }
}
struct student* dend(struct student *head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
        if(head->next==NULL)
        {
            printf("Deleted student details = %s\n", head->name);
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
            printf("Deleted student details = %s\n", temp->name);
            free(temp);
            temp1->next=NULL;
            return(head);
        }
    }
}
void display(struct student *head)
{
    if(head==NULL)
        printf("List is empty\n");
    else
    {
    temp=head;
    while(temp!=NULL)
    {
        printf("%s\t%d\t%f->\t", temp->name, temp->rno, temp->marks);
        temp=temp->next;
    }
    printf("\n");
    }
}
int count(struct student *head)
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
struct student* insertpos(struct student *newnode, int pos)
{
    int p;
    if(pos==1)
       {
           head=ibeg(newnode);
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
struct student* deletepos(struct student *head, int pos)
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
        printf("Node deleted = %s\n", temp->name);
        free(temp);
    }
    return(head);
}
void search(struct student *head, int r)
{
    int found=0;
    if(head==NULL)
        printf("List is empty\nRoll number not found\n");
    else
    {
        temp=head;
        while(temp!=NULL)
        {
            if(temp->rno==r)
            {
                printf("Roll number found\n");
                found=1;
                break;
            }
            temp=temp->next;
        }
        if(found==0)
            printf("Roll number not found\n");
    }
}
