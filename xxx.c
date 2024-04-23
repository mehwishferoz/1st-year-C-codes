#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include <stdlib.h>
#define MAX 100

typedef struct
{
    char string[MAX];
    int top;
}stack;

void push(stack *s, char m)
{
    s->string[++s->top]=m;
}

char pop(stack *s)
{
    char temp;
    temp=s->string[s->top];
    s->top--;
    return temp;
}

int priority(char x)
{
    if(x == '(')
        return 0;
    if(x == '+' || x == '-')
        return 1;
    if(x == '*' || x == '/')
        return 2;
    return 0;
}

int main()
{
    stack sp, *s;
    sp.top=-1;
    s=&sp;
    char *i, x;
    int j=0;

    char infix[MAX], postfix[MAX];
    printf("Enter the infix expression: \n");
    scanf("%s", infix);
    i=infix;
    while(*i!='\0')
    {
        if(isalnum(*i))
        postfix[j++]=*i;
        else if(*i=='(')
        push(s,*i);
        else if(*i==')')
        {
            while(s->string[s->top]!='(')
            {
                postfix[j++]=pop(s);
            }
            x=pop(s);
        }
        else
        {
            while(priority(s->string[s->top])>=priority(*i))
            postfix[j++]=pop(s);
            push(s,*i);
        }
        i++;
    }
    while(s->top!=-1)
    {
        postfix[j++]=pop(s);
    }
    postfix[j]='\0';
    printf("%s", postfix);

    return 0;
}
