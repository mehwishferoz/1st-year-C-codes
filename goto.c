#include <stdio.h>
int main()
{
    // label:
    // printf("we re inside a label\n");
    // goto end;
    // printf("HELLO WORLD\n");
    // goto label;
    // end:
    // printf("we are at end\n");
    int num;
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter a number. Enter 0 to exit\n");
            scanf("%d", &num);
            if (num == 0)
            {
                goto end;
            }
        }
    }
end:

    return 0;
}
