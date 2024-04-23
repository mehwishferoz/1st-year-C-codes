#include<stdio.h>
int main ()
{
    int num1, num2, result;
    char op;

    printf("Enter the numbers: ");
    scanf("%d%d", &num1, &num2);
    printf("Choose an operator '+','-','*','/' : \n");
    scanf(" %c", &op);

    switch (op)
    {
    case'+':
        result=num1+num2;
        break;

    case'-':
        result=num1-num2;
        break;

     case'*':
        result=num1*num2;
        break;

     case'/':
         if(num2==0)
         {
             printf("Divide by zero error\n");
             exit(0);
         }
        result=num1/num2;
        break;

     default:
        printf("Invalid");
    }
    printf("The result is %d", result);


}
