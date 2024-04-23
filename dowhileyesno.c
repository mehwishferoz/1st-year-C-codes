#include<stdio.h>
void main ()
{
    int n;
    char choice;
    choice=getchar();
    do {
        scanf("%d", &n);
        printf("Square of the number is %d", (n*n));
        printf("Do you want to continue (y/n)?\n");
    } while(choice=='y'||'Y');
}
