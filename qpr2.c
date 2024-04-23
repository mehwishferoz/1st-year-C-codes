#include<stdio.h>
#include<stdlib.h>
#define MAX 10
typedef struct
{
    int queue[MAX], r, f;
}q;

void enqueue(q *m);
void dequeue(q *m);
void display(q *m);
int isFull(q *m);
int isEmpty(q *m);

int main()
{
    q q1, *qptr;
    q1.f=q1.r=-1;
    qptr=&q1;
    int x;
    while(1)
    {
        printf("Enter your choice:\n");
        printf("1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: enqueue(qptr);break;
            case 2: dequeue(qptr);break;
            case 3: display(qptr);break;
            case 4: exit(0);break;
            default: printf("Invalid input\n");
        }
    }
    return 0;
}

int isEmpty(q *m)
{
    if(m->f==-1)
        return 1;
    return 0;
}

int isFull(q *m)
{
    if((m->f==0 && m->r==MAX-1) || m->r==m->f-1)
        return 1;
    return 0;
}

void enqueue(q *m)
{
    if(isFull(m))
        printf("Overflow\n");
    else
    {
        if(m->f==-1)
            m->f=0;
        int a;
        printf("Enter the element:\n");
        scanf("%d", &a);
        m->r=(m->r+1)%MAX;
        m->queue[m->r]=a;
    }
}

void dequeue(q *m)
{
    if(isEmpty(m))
        printf("Underflow\n");
    else
    {
        int temp=m->queue[m->f];
        if(m->f==m->r)
        {
            m->f=-1;
            m->r=-1;
        }
        else
        m->f=(m->f+1)%MAX;
        printf("Dequeued %d\n", temp);
    }
}

void display(q *m)
{
    printf("Front - %d\n", m->f);
    for(int i=m->f;i<=m->r;i++)
        printf("%d ", m->queue[i]);
    printf("\nRear - %d\n", m->r);
}
