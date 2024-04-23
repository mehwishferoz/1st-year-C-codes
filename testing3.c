#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int m, n, i, t, count=0;
    scanf("%d", &t);
    if(t<1)
        printf("Invalid input");
    else
    {
        while(t--)
        {
            scanf("%d%d", &n, &m);
            for(i=1;i<=m;i++)
            {
                if(n%i==0 && (n-i)%m==0)
                {
                    count++;
                    n-=i;
                    break;
                }
            }

            while(n!=0)
            {
                printf("%d\t", n);
                n=n-m;
                count++;
            }
            printf("%d\n", count);
        }
    }

    return 0;
}
