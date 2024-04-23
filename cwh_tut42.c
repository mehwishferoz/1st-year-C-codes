#include <stdio.h>

int b = 34; // This is a global variable since it is declared inside main()

int ret()
{
    return 43*3;
}

int func1(int b1)
{
    static int myvar = 2;
    printf("The value of myvar is %d\n", myvar);
    myvar++;
    // printf("the value of b inside func1 is %d\n", b);
    // printf("The address of b inside func1 is %d\n", &b);
    return b1 + myvar;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    val = func1(b);
    printf("The value of func1 is %d\n", val);
    int *ptr = &val;
    // printf("%d", loc);
    return 0;
}
