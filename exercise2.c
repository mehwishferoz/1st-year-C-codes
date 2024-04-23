#include <stdio.h>
int main()
{
    int a, d, n, x;

    printf("Enter your first term\n", a);
    scanf("%d", &a);

    printf("Enter the common difference\n", d);
    scanf("%d", &d);

    printf("Enter the number of terms you want\n", n);
    scanf("%d", &n);

    printf("The %dth term of the A.P is: ", n);
    printf("%d\n", x = a + (n - 1) * d);
    return 0;
}

