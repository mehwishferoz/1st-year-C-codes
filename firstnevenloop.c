#include<stdio.h>
#include<math.h>
void main ()
{
    int i, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    while(i <= pow(2,(n-2)))
          {
              printf("%d\n", i);
                i = i + 2;
          }
}
