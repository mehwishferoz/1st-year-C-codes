#include<stdio.h>
int perfect(int*);

int main()
{
    int n, p;
    int *ptr;
    ptr=&n;
    printf("Enter a number to check if it is perfect: \n");
    scanf("%d", &n);
    p=perfect(ptr);
    if(p==n)
        printf("%d is perfect\n", *ptr);
    else
        printf("%d is not perfect\n", *ptr);
    return 0;
}
 int perfect(int *m)
 {
     int sum=0;
     for(int i=1;i<*m;i++)
     {
         if(*m%i==0)
            sum+=i;
     }
     return sum;
 }
