#include<stdio.h>
/* Function prototype */
void reverse(int a[100], int n);

void main()
{
 int a[100], i, n;
 printf("Enter n:\n");
 scanf("%d", &n);
 /* Reading array */
 for(i=0;i< n;i++)
 {
  printf("a[%d]=",i);
  scanf("%d", &a[i]);
 }
 /* Function Call */
 reverse(a,n);
 /* Displaying reversed array */
 printf("Reversed array is:\n");
 for(i=0;i< n;i++)
 {
  printf("%d ", a[i]);
 }
 return 0;
}
/* Function definition for reverse */
void reverse(int a[100], int n)
{
 int i, temp;
 for(i=0;i< n/2;i++)
 {
  temp = a[i];
  a[i] = a[n-1-i];
  a[n-1-i] = temp;
 }
}
