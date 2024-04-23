#include<stdio.h>
#include<stdlib.h>
void read_matrix(int a[100][100], int rows, int cols)
{
    int i, j, test;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            test=scanf("%d", &a[i][j]);
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
    int i, j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            printf("%d\t", a[i][j]);
    }
    printf("\n");
}

void check_identity(int a[100][100], int rows, int cols)
{
    int i,j, flag=0;

    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            if(i==j && a[i][j]!=1)
            {
                    flag==-1;
                    break;
            }
            else if(i!=j && a[i][j]!=0)
            {
                flag==-1;
                break;
            }
        }
    }

    if(flag==0)
    {
        printf("The given matrix is identity matrix\n");
    }
    else
        printf("The given matrix is not identity matrix\n");
}

int main()
{
    int rows, cols, a[100][100];
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d", &rows, &cols);
    read_matrix(a,rows,cols);
    display_matrix(a,rows,cols);
    check_identity(a,rows,cols);
    return 0;
}
