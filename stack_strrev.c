#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 50
int top = -1, front = 0;
int stack[MAX];
void push(char);
void pop();
/* push a character into stack */
void push(char a)
{
      top++;
      stack[top]  =  a;
}
/* delete an element in stack */
void pop()
{
      top--;
}
int main()
{
      int i;
      char s[MAX], b;
      scanf("%s", s);
      for (i = 0;s[i] != '\0';i++)
      {
        b = s[i];
        push(b);
      }
      for (i = 0;i < (strlen(s) / 2);i++)
      {
        if (stack[top] == stack[front])
        {
            pop();
            front++;
        }
        else
        {
            printf("'%s' is not palindrome.\n\n", s);
            break;
        }
      }
        if ((strlen(s) / 2)==  front)
    printf("%s is palindrome.\n\n",  s);
    return 0;
}
