#include<stdio.h>
#include<stdlib.h>
#define MAX 100

struct crowd
{
    char name[MAX];
    char ch;
};

struct queue
{
    struct crowd people;
    int f;
    int r;
};

int main()
{
    struct queue q1, *qp1, q2, *qp2, q3, *qp3, q4, *qp4;
    q1.f=q1.r=-1;
    q2.f=q2.r=-1;
    q3.f=q3.r=-1;
    q4.f=q4.r=-1;
    qp1=&q1;
    qp2=&q2;
    qp3=&q3;
    qp4=&q4;
    int n;
    char ch, str[MAX];
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %c", str, &ch);
        enqueue(q1, str, ch);
    }
    divide(q1);
    display(q2);
    display(q3);
    display(q4);
    return 0;
}

void enqueue(struct queue *m, char c, char s[MAX])
{
    if(isFull(m))
        printf("Overflow\n");
    else
    {
        if(m->f==-1)
            m->f=0;
        m->r++;
        m->people.name[MAX]=s;
        m->people.ch=c;
    }
}

void divide(struct )
