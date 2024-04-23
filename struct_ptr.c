#include<stdio.h>
typedef struct student
{
    char sname[20];
    int rno;
    float marks;
}std;

int main()
{
    std m1, m2, *p1, *p2;
    p1=&m1;
    p2=&m2;
    printf("Enter 1st student's name, roll number and marks: \n");
    scanf("%s%d%f", p1->sname, &p1->rno, &p1->marks);
    printf("Student name = %s\t Roll number = %d\t Marks = %f\n", p1->sname, p1->rno, p1->marks);
    printf("Enter 2nd student's name, roll number and marks: \n");
    scanf("%s%d%f", p2->sname, &p2->rno, &p2->marks);
    printf("Student name = %s\t Roll number = %d\t Marks = %f\n", p2->sname, p2->rno, p2->marks);
    return 0;
}

