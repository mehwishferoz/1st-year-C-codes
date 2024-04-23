#include<stdio.h>
//Passing Entire Structure Variable
struct student
{
    char name[200], address[200], srn[200];
    int roll_no;
    float sgpa;
};

struct student read(struct student);
void display(struct student);

int main()
{
    struct student s1;
    s1=read(s1);
    display(s1);
    return 0;
}

struct student read(struct student s1)
{
    printf("Enter the student name: \n");
    scanf("%s",s1.name);
    printf("Enter the student address: \n");
    scanf("%s",s1.address);
    printf("Enter the student srn: \n");
    scanf("%s",s1.srn);
    printf("Enter the student roll number: \n");
    scanf("%d",&s1.roll_no);
    printf("Enter the student sgpa: \n");
    scanf("%f",&s1.sgpa);
    return s1;
};

void display(struct student s1)
{
    printf("Student name: %s\nStudent address: %s\nStudent srn: %s\nStudent roll number: %d\nStudent sgpa: %f\n",s1.name, s1.address, s1.srn, s1.roll_no, s1.sgpa);
}
