//Read and display the marks of each student in X internal evaluations
//Calculate the avg marks in each evaluation
//Calculate the avg marks of each student

#include<stdio.h>
#include<stdlib.h>

void read(int a[100][100], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Enter the marks of student %d in %d evaluation: \n", i+1, j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void display(int a[100][100], int m, int n)
{
    int i, j;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("\nThe marks of student %d in %d evaluation: \n", i+1, j+1);
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void avg_eva(int a[100][100], int m, int n)
{
    //colsum
    int i, j, sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            sum+=a[j][i];
        }
        printf("The average marks of students in %d evaluation = %d\n", i+1, sum/m);
        sum=0;
    }
}

void avg_stu(int a[100][100], int m, int n)
{
    //rowsum
    int i, j, sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            sum+=a[i][j];
        }
        printf("The average marks of %d student = %d\n", i+1, sum/n);
        sum=0;
    }
}

int main()
{
    int a[100][100], m, n;
    printf("Enter the no. of students: \n");
    scanf("%d", &m);
    printf("Enter the no. of evaluations: \n");
    scanf("%d", &n);
    read(a,m,n);
    display(a,m,n);
    avg_eva(a,m,n);
    avg_stu(a,m,n);
    return 0;
}
