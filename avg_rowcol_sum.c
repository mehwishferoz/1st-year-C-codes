#include<stdio.h>
#include<stdlib.h>
void rowsum(int a[100][100], int rows, int cols);
void colsum(int a[100][100], int rows, int cols);
void read_matrix(int a[100][100], int rows, int cols);
void display_matrix(int a[100][100], int rows, int cols);

int main()
{
    int rows, cols, a[100][100];
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &rows, &cols);
    read_matrix(a,rows,cols);
    display_matrix(a, rows, cols);
    rowsum(a, rows, cols);
    colsum(a, rows, cols);
}

void read_matrix(int a[100][100], int rows, int cols)
{
    int test,i,j;
    printf("Enter the array elements: \n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            test = scanf("%d", &a[i][j]);
            if(test!=1)
            {
                printf("Enter valid data\n");
                exit(0);
            }
        }
    }
}

void display_matrix (int a[100][100], int rows, int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void rowsum(int a[100][100], int rows, int cols)
{
    int i,j,rowsum;
    for(i=0;i<rows;i++)
    {
        rowsum=0;
        for(j=0;j<cols;j++)
        {
            rowsum+=a[i][j];
        }
        printf("Sum of row%d is %d\n", i, rowsum);
        float avg =(rowsum)/cols;
        printf("Avg of each row = %f\n", avg);
    }
}

void colsum(int a[100][100], int rows, int cols)
{
    int i,j, colsum=0;
    for(i=0;i<cols;i++)
    {
        for(j=0;j<rows;j++)
        {
            colsum+=a[j][i];
        }
        printf("Sum of col%d is %d\n", i, colsum);
        float avg = (colsum)/cols;
        printf("Avg of each column is %f\n", avg);
        colsum=0;
    }
}
