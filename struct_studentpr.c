#include<stdio.h>
typedef struct student
{
    char name[20];
    int rno;
    float marks;
}x;

void read(x s[3]);
void display(x s[3]);
void highest(x s[3]);

int i;

int main()
{
    x s[3];
    read(s);
    display(s);
    highest(s);
    return 0;
}
void read(x s[3])
{
    for(i=0;i<3;i++)
    {
        printf("Enter the details of student %d\n", i+1);
        printf("Enter name, roll number and marks: \n");
        scanf("%s%d%f", s[i].name, &s[i].rno, &s[i].marks);
    }
}

void display(x s[3])
{
    for(i=0;i<3;i++)
    {
        printf("Details of student %d: \n", i+1);
        printf("%s\n%d\n%f\n", s[i].name, s[i].rno, s[i].marks);
    }
}

void highest(x s[3])
{
    float max=0;
    for(i=0;i<3;i++)
    {
        if(s[i].marks>max)
        {
            max=s[i].marks;
        }
    }
    printf("Highest marks are %f\n", max);
}
