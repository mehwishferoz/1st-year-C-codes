#include<stdio.h>
void main()
{
    int n, m, rev=0, rem;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    m=n;

    while(n!=0)
    {
        rem = n % 10;
        rev = rev*10 + rem;
        n /= 10;
    }

    if(m==rev)
        printf("%d is a palindrome.", m);
    else
        printf("%d is not a palindrome.", m);


}
