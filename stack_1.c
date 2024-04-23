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

int main()
{
    stack s;
    int x;
    s.top=-1;
    while (1)
    {
        printf("Enter the operation you wish to perform: \n");
        printf("1---Push\n");
        printf("2---Pop\n");
        printf("3---Peek\n");
        printf("4---Exit\n");
        scanf("%d", &x);
        switch (x)
        {
        case 1:
        push(&s);
        break;
        case 2:
        printf("Popped element: %d\n", pop(&s));
        break;
        case 3:
        printf("Topmost element: %d\n", peek(&s));
        break;
        case 4:
        exit(0);
        break;
        default:
        printf("Invalid input\n");
        break;
        }
    }
    return 0;
}

