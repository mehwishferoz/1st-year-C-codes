#define SIZE 50            /* Size of Stack */
//#include <ctype.h>
struct stack{
char s[SIZE];
int top;       /* Global declarations */
}st;
push(char elem)
{   st.top++;                    /* Function for PUSH operation */
    st.s[st.top]=elem;
}

char pop()
{                      /* Function for POP operation */
    return(st.s[st.top--]);
}

int pr(char elem)
{                 /* Function for precedence */
    switch(elem)
    {
    case '#': return 0;
    case '(': return 1;
    case '+':
    case '-': return 2;
    case '*':
    case '/': return 3;
    }
}

main()
{                         /* Main Program */
    char temp[50],infx[50],pofx[50],ch,elem;

    int i=0,k=0;
       st.top=-1;
    printf("\n\nRead the Infix Expression ? ");
    scanf("%s",infx);
   strrev(infx);
    printf("%s",infx);
    i=0;
ch=infx[0];
while(ch!='\0')
{
ch=infx[i];
if(ch=='(')
    infx[i]=')';
else if(ch==')')
     infx[i]='(';
i++;
}

i=0;
//printf("%s",infx);

 push('#');
    while( (ch=infx[i++]) != '\0')
    {
        if( ch == '(') push(ch);
        else
            if(isalnum(ch)) pofx[k++]=ch;
            else
                if( ch == ')')
                {
                    while( st.s[st.top] != '(')
                        pofx[k++]=pop();
                    elem=pop(); // Remove (
                }
                else
                {       // Operator
                    while( pr(st.s[st.top]) >= pr(ch) )
                        pofx[k++]=pop();
                    push(ch);
                }
    }
    while( st.s[st.top] != '#')     // Pop from stack till empty
        pofx[k++]=pop();
    pofx[k]='\0';          // Make pofx as valid string
    //printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n",infx,pofx);
 printf("\n\nGiven Infix Expn: %s  Postfix Expn: %s\n",infx,strrev(pofx));
}
