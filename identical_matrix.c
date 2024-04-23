#include<stdio.h>
#include<stdlib.h>
int areSame(int a[100][100], int b[100][100])
{
    int i,j,rows1, rows2, cols1, cols2, flag=1;
    if(rows1==rows2 && cols1==cols2)
    {
        printf("Matrices can be compared \n");
        for(i=0;i<rows1;i++)
        {
            for(j=0;j<cols2;j++)
            {
                if(a[i][j]!=b[i][j])
                {
                    flag=0;
                    break;
                }
            }
        }
    }
    else
        printf("The given matrices are not comparable\n");

    if(flag==1)
    {
        printf("The given matrices are identical\n");
    }
    else
        printf("The given matrices are not identical\n");
}

void read_matrix(int a[100][100], int b[100][100])
{
    int test, i, j, rows1, rows2, cols1, cols2;
    printf("Enter the number of rows, columns and elements of matrix A: \n");
    scanf("%d%d", &rows1, &cols1);

    for(i=0;i<rows1;i++)
    {
        for(j=0;j<cols1;j++)
           {
               test = scanf("%d", &a[i][j]);
            if (test!=1)
            {
                printf("Enter valid data\n");
                exit(0);
            }
           }
    }

    printf("Enter the number of rows, columns and elements of matrix B: \n");
    scanf("%d%d", &rows2, &cols2);
    for (i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
            {
             test = scanf("%d", &b[i][j]);
        if(test!=1)
            {
        printf("Enter valid data\n");
        exit(0);
            }
            }
    }
}
void display_matrix(int a[100][100], int b[100][100])
{
    int i, j, rows1, rows2, cols1, cols2;
    for(i=0;i<=rows1;i++)
    {
        for(j=0;j<cols1;j++)
        {
            printf("%d\t", a[i][j]);
        }
            printf("\n");
    }

    for(i=0;i<rows2;i++)
    {
        for(j=0;j<cols2;j++)
        {
            printf("%d\t", b[i][j]);
        }
            printf("\n");
    }
}

int main()
{
    int a[100][100], b[100][100];
    read_matrix(a,b);
    display_matrix(a,b);
    areSame(a,b);
    return 0;
}
