//C program to store details of 5 students and list the details of student who scored maximum sgpa
#include<stdio.h>

struct student
{
    char name[100], address[100], srn[100];
    int roll_no;
    float sgpa;
};

void read(struct student[]);
void display(struct student[]);
void highest_sgpa(struct student[]);
void sort_sgpa(struct student[]);
int main()
{
    struct student s1[5];
    read(s1);
    printf("Student details are: \n");
    display(s1);
    printf("The details of the student who scored highest sgpa: \n");
    highest_sgpa(s1);
    sort_sgpa(s1);
    return 0;
}
void read(struct student s1[5])
{
    for(int i=0;i<5;i++)
    {
    printf("Enter the details of students %d: \n", i+1);
    printf("Enter the student name: \n");
    gets(s1[i].name);
    gets(s1[i].name);
    printf("Enter the student address: \n");
    gets(s1[i].address);
    printf("Enter the student srn: \n");
    scanf("%s", s1[i].srn);
    printf("Enter the student roll number: \n");
    scanf("%d",&s1[i].roll_no);
    printf("Enter the student sgpa: \n");
    scanf("%f",&s1[i].sgpa);
    }
}

void display(struct student s1[5])
{
    for(int i=0;i<5;i++)
    {
            printf("Student name: %s\nStudent address: %s\nStudent srn: %s\nStudent roll number: %d\nStudent sgpa: %f\n",s1[i].name,s1[i].address,s1[i].srn,s1[i].roll_no,s1[i].sgpa);
    }
}

void highest_sgpa(struct student s1[5])
{
    int x;
    float sgpa_max=0;
    for(int i=0;i<5;i++)
    {
        if(sgpa_max<s1[i].sgpa)
        {
            sgpa_max=s1[i].sgpa;
            x=i;
        }
    }
    printf("Student name: %s\nStudent address: %s\nStudent srn: %s\nStudent roll number: %d\nStudent sgpa: %f\n",s1[x].name,s1[x].address,s1[x].srn,s1[x].roll_no,s1[x].sgpa);
}
void sort_sgpa(struct student s1[5])
{
    float b=0;
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4-i;j++)
        {
            if(s1[j].sgpa>s1[j+1].sgpa)
            {
            b=s1[j].sgpa;
            s1[j].sgpa=s1[j+1].sgpa;
            s1[j+1].sgpa=b;
            }
        }
    }
    printf("Sorted sgpa: \n");
    for(int k=0;k<5;k++)
    {
        printf("%f\t", s1[k].sgpa);
    }
}
