#include<stdio.h>
int main()
{
    int num = 100;
    int *ptr;
    ptr = &num;

    printf("Address in integer pointer = %x\n", ptr);
    printf("Address of num variable = %x\n", &num);
    printf("Value at num = %d\n", num);
    printf("Value at num via pointer = %d\n", *ptr);
    printf("Address of pointer = %x\n", &ptr);
    return 0;
}
