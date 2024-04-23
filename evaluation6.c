#include<stdio.h>
#include<stdlib.h>

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

void display_matrix(int a[100][100], int rows, int cols)
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

void diagonal_elements(int a[100][100], int rows, int cols)
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        int temp = 0;
        for(j=0;j<cols;j++)
        {
            if(i==j)
            {
                temp=a[i][j];
            }
        }
        printf("%d\t\n", temp);
    }
}

void prime(int a[100][100], int rows, int cols)
{
    int flag = 0;
    for(int i=0;i<rows;i++)
    {
        int temp = 0;
        for(int j=0;j<cols;j++)
        {
            if(i==j)
            {
                temp=a[i][j];
                for(int k=2;k<temp;k++)
                {
                    if(temp%k==0)
                        flag = -1;
                    break;
                }
            }
        }
       if (flag==0)
       {
           printf("%d\t", temp);
       }
       else
        printf("Not prime\n");
    }
}

int main()
{
    int rows, cols, a[100][100];
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &rows, &cols);
    read_matrix(a,rows,cols);
    display_matrix(a, rows, cols);
    printf("The diagonal elements of the matrix are: \n");
    diagonal_elements(a,rows,cols);
    printf("Diagonal elements that are prime are: \n");
    prime(a,rows,cols);
    return 0;
}

