#include<stdio.h>
#include<conio.h>
int main()
{
    int i, flag=0, count=0;
    char str[100], ch;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the character you want to check frequency of: \n");
    scanf("%c", &ch);

    for(i=0;str[i]!='\0';i++)
    {
        if(ch==str[i])
        {
          count++;
        }
        else if(ch!=str[i])
        {
            flag=-1;
            break;
        }
    }
    printf("The frequency of %c in %s is %d\n", ch, str, count);
    getch();
    return 0;
}
