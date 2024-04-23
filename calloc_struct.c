#include<stdio.h>
#include<stdlib.h>

typedef struct course
{
    int marks;
    char sname[20];
}c;

int main()
{
   c *p;
   int n, i;
   printf("Enter the value of n: \n");
   scanf("%d", &n);
   p=(c*)calloc(n,sizeof(c));
   printf("Enter course details: \n");
   for(i=0;i<n;i++)
   {
       printf("Enter the details of course %d: \n", i+1);
       printf("Marks\tSubject\n");
       scanf("%d%s",&(p+i)->marks,(p+i)->sname);
   }
   printf("Entered course details: \n");
   for(i=0;i<n;i++)
   {
       printf("Details of course %d: \n", i+1);
       printf("Marks = %d\tSubject = %s\n",(p+i)->marks,(p+i)->sname);
   }
   free(p);
   return 0;
}
