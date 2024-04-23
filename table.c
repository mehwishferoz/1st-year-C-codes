#include <stdio.h>
int main()
{
    int num, index = 1;
    printf("Enter the number you want multiplication table of\a", num);
    scanf("%d", &num);
    printf("Table of the number you entered: \n");

    do
    {
        printf("%d\n", num * index);
        index = index + 1;
    } while (index<11);
    


    return 0;
}
