#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define size 100
struct names
{
    char customer[50];
};
struct que
{
    struct names n1[size];
    int front;
    int rear;
};
int isfull(struct que* ptr)
{
    if(ptr->rear==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int isempty(struct que* ptr)
{
    if(ptr->front==-1 && ptr->rear==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void EnQue(struct que* ptr,char data[])
{
    if(isfull(ptr))
    {
        printf("Que is full");
    }
    else if(isempty(ptr))
    {
        ptr->front=0;
        ptr->rear=0;
        strcpy(ptr->n1[ptr->rear].customer,data);
    }
    else
    {
        ptr->rear++;
        strcpy(ptr->n1[ptr->rear].customer,data);
    }
    
}
void display(struct que* ptr)
{
    if(isempty(ptr))
    {
        printf("Que is empty\n");
    }
    else
    {
        for(int i=ptr->front;i<=ptr->rear;i++)
        {
            printf("%s\t",ptr->n1[i].customer);
        }
        printf("\n");
    }
}
struct names DeQue(struct que* ptr)
{
    int temp;
    if(isempty(ptr))
    {
        printf("Que is empty");
        
    }
    else if(ptr->front==ptr->rear)
    {
        temp=ptr->front;
        ptr->front=ptr->rear=-1;
        return(ptr->n1[temp]);
    }
    else
    {
        ptr->front++;
        return(ptr->n1[ptr->front-1]);
    }
}
void divide(struct que* ptr,struct que* ptr1,struct que* q1,struct que* q2,struct que* q3)
{
    char code[10],data[50];
    DeQue(ptr1);
    for(int i=ptr->front;i<=ptr->rear;i++)
    {
        
        strcpy(code,DeQue(ptr1).customer);
        if(strcmp(code,"C")==0)
        {
            EnQue(q1,DeQue(ptr).customer);
        }
        else if(strcmp(code,"W")==0)
        {
            EnQue(q2,DeQue(ptr).customer);
        }
        else if(strcmp(code,"N")==0)
        {
            EnQue(q3,DeQue(ptr).customer);
        }
        
    }
}

int main()
{
    char data[20];
    struct que org,q1,q2,q3,org1;
    org.front=-1;
    org.rear=-1;
    q1.front=q1.rear=q2.front=q2.rear=q3.rear=-1;
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s",data);
        EnQue(&org,data);
    }
    for (int i = 0; i < n; i++)
    {
        scanf(" %s",data);
        EnQue(&org1,data);
    }
    
    divide(&org,&org1,&q1,&q2,&q3);
    display(&q1);
    display(&q2);
    display(&q3);
    return 0;

}