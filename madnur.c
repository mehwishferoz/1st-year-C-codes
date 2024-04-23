#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

typedef struct stack
{
    int data[1000];
    int top;
}s;

int isfull(s a,int N);
s push(s a);
void JD_Game(s a,s b);
int isempty(s a);
s pop(s a);
int peek(s a);

int main() {
    s S1,S2;
    S1.top=-1;
    S2.top=-1;
    int N;
    scanf("%d",&N);
    while(isfull(S1,N)!=0)
    {
        S1=push(S1);
    }
    while(isfull(S2,N)!=0)
    {
        S2=push(S2);
    }
    JD_Game(S1,S2);
    return 0;
}

int isfull(s a,int N)
{
    if(a.top<N)
        return 1;
    else
        return 0;
}

s push(s a)
{
    a.top++;
    scanf("%d",&a.data[a.top]);
    return a;
}

void JD_Game(s a,s b)
{
    int t[1000],i=0,j=0;
    while((isempty(a)!=0) || (isempty(b)!=0))
    {
        if(peek(a)>peek(b))
        {
            t[i]=1;
            b=pop(b);
            i++;
        }
        else if(peek(a)<peek(b))
        {
            t[i]=2;
            a=pop(a);
            i++;
        }
        else
        {
            t[i]=0;
            a=pop(a);
            b=pop(b);
            i++;
        }
    }
    for(j=0;j<=i;j++)
    {
        printf("%d ",t[j]);
    }
    if(isempty(a)!=0)
    {
        printf("\nJim");
    }
    else if(isempty(b)!=0)
    {
        printf("\nDavid");
    }
    else
    {
        printf("\nTie");
    }
}

int isempty(s a)
{
    if(a.top==-1)
        return 0;
    else
        return 1;
}

s pop(s a)
{
    int temp;
    temp= a.data[a.top];
    a.top--;
    return (a);
}

int peek(s a)
{
    return (a.data[a.top]);
}
