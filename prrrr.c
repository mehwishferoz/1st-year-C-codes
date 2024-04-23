#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 100
typedef struct
{
    char queue[MAX];
    int f, r;
}q;

void enqueue(q *m, char ch)
{
    if((m->f==0 && m->r==MAX-1) || (m->r==m->f-1))
        printf("Overflow\n");
    else
    {
        if(m->f==-1)
            m->f=0;
        m->r=(m->r+1)%MAX;
        m->queue[m->r]=ch;
    }
}

char dequeue(q *m)
{
    char ch='0';
    if(m->f==-1)
        printf("Underflow");
    else
    {
        ch=m->queue[m->f];
        m->f=(m->f+1)%MAX;
    }
    return ch;
}

void check(q *m)
{
    int count=0;
    char c;
    for(int i=m->f;i<=m->r;i++)
    {
        c=dequeue(m);
        if(c=='R')
        {
            enqueue(m,'Y');
            count++;
        }
        else  if(c=='Y')
        {
            enqueue(m,'G');
            count++;
        }
    }
    printf("%d", count);
}


int main() {
    q q1, *qptr;
    q1.r=-1;
    q1.f=-1;
    qptr=&q1;
    int n;
    scanf("%d", &n);
    if(n>0)
    {
        char ch;
        for(int i=0;i<n;i++)
        {
            scanf(" %c", &ch);
            enqueue(qptr,ch);
        }
        check(qptr);
    }
    return 0;
}

