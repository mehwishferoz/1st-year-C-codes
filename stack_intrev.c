#include<stdio.h>
#include<stdlib.h>

typedef struct stack
{
    int data[10];
    int top;
}stack;

void push(stack *s)
{
    if(s->top<9)
    {
    s->top++;
    printf("Enter the element to be inserted: \n");
    scanf("%d", &s->data[s->top]);
    }
    else
    printf("Stack overflow\n");
}

int pop(stack *s)
{
    int temp;
    if(s->top==-1)
    {
        printf("Stack underflow\n");
        return 0;
    }
    else
    {
    temp=s->data[s->top];
    s->top--;
    return temp;
    }
}

int peek(stack *s)
{
    return(s->data[s->top]);
}

void rev(stack *s, int n)
{
    for (int i = 0; i < n; i++)
    {
        int p=pop(s);
        printf("%d", p);
    }

}

int main()
{
    stack s;
    int x,n;
    s.top=-1;
    printf("Enter the number of digits: \n");
    scanf("%d", &n);
    for(int i=0;i<n;i++)
    {
        push(&s);
    }
    rev(&s,n);
    return 0;
}
