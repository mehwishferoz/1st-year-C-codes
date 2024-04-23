#include<stdio.h>
typedef struct student
{
    char sname[20];
    int rno;
    float marks;
}std;
void read(std *p)
{
    printf("Enter student's name, roll number and marks: \n");
    scanf("%s%d%f", p->sname, &p->rno, &p->marks);
}
void display(std *p)
{
     printf("Student name = %s\t Roll number = %d\t Marks = %f\n", p->sname, p->rno, p->marks);
}
int main()
{
    std m, *p;
    p=&m;
    read(p);
    display(p);
    return 0;
}
