#include<stdio.h>
#include<math.h>
void main()
{
    int i, j, n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    for(i=0;i<= pow(2,(n-2)) ; i=i+2)
        printf("%d\n", i);
}
