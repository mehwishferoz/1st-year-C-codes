#include<stdio.h>
void read(int a[100], int n)
{
    for(int i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
}

void display(int a[100], int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d\t\n", a[i]);
    }
}

int linearsearch(int a[100], int n, int x1)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==x1)
            return i;
    }
        return -1;
}

void frequency(int a[100], int n, int x2)
{
    int f=0;
    for(int i=0;i<n;i++)
    {
        if (a[i]==x2)
           f++;
    }
    printf("Frequency of element %d in the given array is %d\n",x2,f);
}

int prime(int a[100], int n)
{
  int flag=0, count=0;
  for(int i=0;i<n;i++)
  {
      for(int j=2;j<a[i];j++)
      {
          if(a[i]%j==0)
      {
          flag=-1;
          break;
      }
      }
       if(flag==0 && a[i]>2)
        {
            count++;
        }
  }
  return count;
}

int main()
{
    int a[100], n, x1, x2, l, c;
    printf("Enter the size of the array: \n");
    scanf("%d", &n);
    printf("Enter the elements of the array: \n");
    read(a,n);
    printf("Enter the element to be searched: \n");
    scanf("%d", &x1);
    l=linearsearch(a,n,x1);
    if(l==-1)
        printf("Element not found!\n");
    else
        printf("%d element found at %dth position in the array\n", x1, l+1);
    printf("Enter the element to check its frequency: \n");
    scanf("%d", &x2);
    frequency(a,n,x2);
    c=prime(a,n);
    printf("The number of prime numbers in the given array is %d\n", c);
    return 0;
}
