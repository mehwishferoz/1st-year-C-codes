#include <stdio.h>
#include <stdlib.h>
struct stack{
int s[50];
int top;       /* Global declarations */
}st;
push(int elem)
{   st.top++;                    /* Function for PUSH operation */
    st.s[st.top]=elem;
}

int pop()
{                      /* Function for POP operation */
    return(st.s[st.top--]);
}


int main()
{                         /* Main Program */
    char pofx[50],ch,elem;

    int i=0,k=0,op1,op2;
       st.top=-1;
    printf("\n\nRead the postfix Expression ? ");
    scanf("%s",pofx);

    while( (ch=pofx[i++]) != '\0')
    {

     if(isalnum(ch)){

        push(ch-'0');

        }
     else{

        switch(ch)
        {

            case '+':printf("%d",st.s[st.top]);
                      op1=pop();
                      op2=pop();

                      push(op1+op2);

                      break;
            case '-': op1=pop();
                      op2=pop();
                      push(op1-op2);
                      break;
            case '*': op1=pop();
                      op2=pop();
                      push(op1*op2);
                      break;
            case '/': op1=pop();
                      op2=pop();
                      push(op1/op2);
                      break;
        }
     }
    }
    printf("\nANS=%d",st.s[st.top]);
}

