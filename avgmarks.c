//C program to calculate grades for a student who appeared in four exams
#include<stdio.h>
int main()
{
   int avg;
   printf("Enter your average marks: ");
   scanf("%d", &avg);
   if(avg>=80)
       {
       printf("Distinction\n");
       printf("Distinction\n");
       }

   else if (avg>=60 && avg<80)
       printf("First Division\n");

   else if (avg>=50 && avg<60)
       printf("Second Division\n");
   else if (avg>=40 && avg<50)
       printf("Just Pass\n");
   else
       printf("Fail\n");

return 0;
}
