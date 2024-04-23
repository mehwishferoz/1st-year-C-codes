#include<stdio.h>
#include<stdlib.h>
void read_matrix(int a[100][100],int rows,int cols);
void display_matrix(int a[100][100],int rows,int cols);
int main()
{
int a[100][100];
int rows;
int cols;
int test;
printf("Enter number of rows and columns\n");
test = scanf("%d%d",&rows,&cols);
if(test!=2)
{
printf("Enter valid data\n");
exit(0);
} if(rows<=0
|| cols<=0)
{
printf("Order of matrix should be greater than Zero\n");
}
else if(rows>100 || cols>100)
{
printf("Order of matrix should be less than %d X %d\n",rows,cols);
}
else
{
read_matrix(a,rows,cols);
display_matrix(a,rows,cols);
}
}
void read_matrix(int a[100][100],int rows, int cols)
{
int i;
int j;
int test;
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
test = scanf("%d",&a[i][j]);
if(test!=1)
{
printf("Enter valid data\n");
exit(0);
}
}
}
}
void display_matrix(int a[100][100],int rows, int cols)
{
int i;
int j;
for(i=0;i<rows;i++)
{
for(j=0;j<cols;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
