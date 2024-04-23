/*
    Suppose the content of the file is of following format
    Roll Number         Name            CGPA
    1                   ABC             7
    2                   PQR             9
    3                   MNO             8
    4                   DEF             10

    Display all student record who have got CGPA >= 8.5
*/

#include<stdio.h>
#include<stdlib.h>
struct student
{
    int rno;
    char name[20];
    double cgpa;
};
void display(FILE *);
int main()
{
    FILE *fp1;
    fp1 = fopen("student.txt","r");
    if(fp1==NULL)
    {
        perror("");
        exit(0);
    }
    display(fp1);
    fclose(fp);
    return 0;
}
void display(FILE *fp)
{
    struct student s;
    while(fscanf(fp,"%d%s%lf",&s.rno,s.name,&s.cgpa)==3)
    {
        if(s.cgpa>=8.5)
        {
            printf("%d\t%s\t%lf\n",s.rno,s.name,s.cgpa);
        }
    }
}


