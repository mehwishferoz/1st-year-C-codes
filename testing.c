#include <stdio.h>
#include <stdlib.h>
#define MAX 50

typedef struct
{
    int data[MAX];
    int top;
}stack;

void push(stack *s, int n)
{
    int x;
    while(n)
    {
        s->top++;
        x=n%10;
        s->data[s->top]=x;
        n/=10;
    }
}

int pop(stack *s)
{
    int i;
    for(i=0;i<=s->top-i;i++)
    {
        if(s->data[i]!=s->data[s->top-i])
            return 0;
    }
    return 1;
}

int main()
{
    int n, p;
    scanf("%d", &n);
    if(n<0)
        printf("Invalid number");
    else
    {
        stack s;
        s.top=-1;
        push(&s,n);
        p=pop(&s);
        if(!p)
            printf("%d is not a palindrome number\n", n);
        else
            printf("%d is a palindrome number\n", n);
    }
    return 0;
}
