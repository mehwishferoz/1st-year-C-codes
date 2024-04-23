#include<stdio.h>
#include<stdlib.h>
#define SIZE 10

typedef struct
{
    int queue[SIZE];
    int f;
    int r;
}q;

void enqueue(q *m);
void dequeue(q *m);
int isFull(q *m);
int isEmpty(q *m);
int size(q *m);
void display(q *m);

int main()
{
    q q1, *qptr;
    q1.r=-1;
    q1.f=-1;
    qptr=&q1;
    int x,s;
    for(;;)
    {
        printf("1.Enqueue\n2.Dequeue\n3.Size\n4.Display\n5.Exit\n");
        scanf("%d", &x);
        switch(x)
        {
            case 1: enqueue(qptr);break;
            case 2: dequeue(qptr);break;
            case 3: s=size(qptr);
            printf("Size = %d\n", s);
            break;
            case 4: display(qptr);break;
            case 5: exit(0);break;
            default: printf("Invalid input\n");
        }
    }
    return 0;
}

int isFull(q *m)
{
    if(m->f==0 && m->r==SIZE-1)
        return 1;
    return 0;
}

int isEmpty(q *m)
{
    if(m->f==-1)
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
        printf("Enter the element: \n");
        scanf("%d", &a);
        m->queue[++m->r]=a;
    }
}

void dequeue(q *m)
{
    if(isEmpty(m) || m->f>m->r)
        printf("Underflow\n");
    else
    {
        int temp=m->queue[m->f];
        m->f++;
        printf("Dequeued %d\n", temp);
    }
}

int size(q *m)
{
    int count=0;
    if(isEmpty(m))
        return 0;
    else
    {
        for(int i=m->f;i<=m->r;i++)
            count++;
        return count;
    }
}

void display(q *m)
{
    printf("Front - %d\n", m->f);
    for(int i=m->f;i<=m->r;i++)
        printf("%d ", m->queue[i]);
    printf("\nRear - %d\n", m->r);
}



