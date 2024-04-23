#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
int N;
void read_marks(int a[])
{
    int i,j;
    for(i=0;i<N;i++)
    {
        scanf("%d", &a[i]);
    }
    for(j=0;j<N;j++)
    {
        printf("%d", a[i]);
    }
    printf("\n");
}

void display_percentage(int a[], float p, int h)
{
    int i,j;
    float sum=0;
    for(i=0;i<N;i++)
    {
        sum+=a[i];
    }
    p=(sum/N);
    printf("Percentage: %.2f\n", p);

    for(j=0;j<N;j++)
    {
        if(a[j]>a[j+1])
         h=a[j];
    }
    printf("Highest marks: %d\n", h);
}


int main() {
    int a[10],p=0,h=0;
    scanf("%d", &N);
    if(N>=6 && N<=10)
    {
        read_marks(a);
        display_percentage(a,p,h);
    }
    else
        printf("Subjects cannot be less than 6 and more than 10.\n");
    return 0;
}


