#include<stdio.h>
#define MAX 100
float avg(int marks[], int n);
void read(int marks[], int n);
void display(int marks[], int n);

int main()
{
    int marks[MAX], i, n;
    float a;
    printf("Enter the number of subjects: \n");
    scanf("%d", &n);
    printf("Enter your marks: \n");
    read(marks,n);
    printf("Your marks are as follows: \n");
    display(marks,n);
    a=avg(marks,n);
    printf("Average = %f\n", a);
}

void read(int marks[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        scanf("%d", &marks[i]);
    }
}

void display(int marks[], int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%d\t\n", marks[i]);
    }
}

float avg(int marks[], int n)
{
    int sum=0, i;
    float avg;
    for(i=0;i<n;i++)
    {
        sum+=marks[i];
    }
    printf("Sum = %d\n", sum);

    avg=(sum)/n;
    return avg;
}
