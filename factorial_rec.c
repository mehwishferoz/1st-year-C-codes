#include<stdio.h>
 int fact(int num)
 {
     if(num==1 || num==0)
        return 1;
     else
        return (fact(num-1)*num);
 }

 void main()
 {
     int num;
     printf("Enter the number you want factorial of: \n");
     scanf("%d", &num);
     printf("The factorial of %d is %d", num, fact(num));
 }
