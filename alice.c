//Alice problem
#include<stdio.h>
int main()
{
    int x, n, y, d, r, tc;
    printf("Enter the distance for which you want to fix an amount: ");
      scanf("%d", &n);
    printf("Enter the amount of price you wish to fix: ");
      scanf("%d", &x);
    printf("Enter the amount of price for every km after 'n' kms: ");
      scanf("%d", &y);
    printf("Enter the distance between your home and destination: ");
      scanf("%d", &d);
     {tc = x+(d-n)*y;
    printf("The total cost is: %d\n", tc);
    printf("Enter the amount you have in your wallet: ");
      scanf("%d", &r);
      if (tc<=r)
    printf("Your taxi has been booked!");
      else
    printf("Oops, your amount is insufficient");
    return 0;
     }
}
