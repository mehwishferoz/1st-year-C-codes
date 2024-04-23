#include<stdio.h>
#include<stdlib.h>
void read(float a[100][100], int rows, int cols)
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0; j<cols; j++)
        {
            int test=scanf("%f", &a[i][j]);
            if(test!=1)
            {
                printf("Enter valid data\n");
                exit(0);
            }
        }
    }
}

void display(float a[100][100], int rows, int cols)
{
    for(int i=0; i<rows; i++)
    {
        for(int j=0;j<cols;j++)
        {
            printf("%f\t", a[i][j]);
        }
        printf("\n");
    }
}

void multiply(float a[100][100], float b[100][100], int rows1, int rows2, int cols1, int cols2)
{
   int i, j, k;
   float c[100][100]={0};
   for(i=0;i<rows1;i++)
   {
       for(j=0;j<cols2;j++)
        {
            for(k=0;k<rows2;k++)
            {
            c[i][j] = c[i][j] + a[i][k] * b[k][j];
            }
        }
   }
   display(a,rows1,cols1);
   printf("\t*\n");
   display(b,rows2,cols2);
   printf("\t=\n");
   display(c,rows1,cols2);
}

int main()
{
    int rows1, rows2, cols1, cols2, i, j, test;
    float a[100][100], b[100][100];
    printf("Enter the number of rows and columns of matrix 1: \n");
    test=scanf("%d\n%d", &rows1, &cols1);
    if(test!=2)
    {
        printf("Enter valid data\n");
        exit(0);
    }
    printf("Enter the number of rows and columns of matrix 2:\n");
    test=scanf("%d\n%d", &rows2, &cols2);
    if(test!=2)
    {
        printf("Enter valid data\n");
    }
    if(rows1<=0 || rows2<=0 || cols1<=0 || cols2<=0)
    {
        printf("Order of matrix should be greater than Zero\n");
    }
    else if(rows1>100 || rows2>100 || cols1>100 || cols2>100)
    {
        printf("Order of matrix should be less than %d X %d\n",100,100);
    }
    else if(cols1!=rows2)
    {
        printf("Column of matrix 1 should be equal to row of matrix 2\n");
    }
    else
    {
    printf("Enter the elements of matrix 1: \n");
    read(a,rows1,cols1);
    printf("Enter the elements of matrix 2: \n");
    read(b,rows2,cols2);
    multiply(a,b,rows1, rows2, cols1, cols2);
    }
    return 0;
}
