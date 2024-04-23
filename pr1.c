#include<stdio.h>
#include<stdlib.h>

void aman(int a, int b)
{
    for (int i = 0; i < 5; i++)
    {
        a++;
        b++;
    }
}

int main()
{
    static int a = 1;
    int b = 1;
    aman(a,b);
    a=0;
    b=0;
    printf("%d %d", a, b);
    
    return 0;
}