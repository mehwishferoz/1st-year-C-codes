#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 25
int top = -1;
int stack[MAX];
void push(char item)
{
      if(top == (MAX - 1))
      {
            printf("Stack is Full\n");
            return;
      }
      top++;
      stack[top] = item;
}

char pop()
{
      if(top == -1)
      {
            printf("Stack is Empty\n");
            exit(1);
      }
      return(stack[top--]);
}

int match_paranthesis(char a, char b)
{
      if(a == '[' && b == ']')
      {
            return 1;
      }
      else if(a == '{' && b == '}')
      {
            return 1;
      }
      else if(a == '(' && b == ')')
      {
            return 1;
      }
      return 0;
}

int check_paranthesis(char expression[])
{
      int count;
      char temp;
      for(count = 0; count < strlen(expression); count++)
      {
            if(expression[count] == '(' || expression[count] == '{' || expression[count] == '[')
            {
                  push(expression[count]);
            }
            if(expression[count] == ')' || expression[count] == '}' || expression[count] == ']')
            {
                  if(top == -1)
                  {
                        printf("The Right Parentheses are more than the Left Parentheses\n");
                        return 0;
                  }
                  else
                  {
                        temp = pop();
                        if(!match_paranthesis(temp, expression[count]))
                        {
                              printf("The Mismatched Parentheses in the Expression are:\t%c and %c\n", temp, expression[count]);
                              return 0;
                        }
                  }
            }
      }
      if(top == -1)
      {
            printf("\nThe Expression has Balanced Parentheses\n");
            return 1;
      }
      else
      {
            printf("The Expression has unbalanced parentheses\n");
            return 0;
      }
}
int main()
{
      char expression[MAX];
      int validity;
      printf("\nEnter an Algebraic Expression:\t");
      scanf("%s", expression);
      validity = check_paranthesis(expression);
      if(validity == 1)
      {
            printf("The Expression is Valid\n");
      }
      else
      {
            printf("The Expression is Invalid\n");
      }
      return 0;
}
