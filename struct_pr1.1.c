#include<stdio.h>
//Passing Individual Array Members
struct student
{
    char name[20], address[20], srn[20];
    int roll_no;
    float sgpa;
};

void display(struct student);

int main()
{
    struct student s1={"Mehwish", "Ram Nagar", "01FE21BCI057", 1853, 8.75};
    display(s1);
    return 0;
}

void display(struct student s1)
{
    printf("%s\n%s\n%s\n%d\n%f\n",s1.name, s1.address, s1.srn, s1.roll_no, s1.sgpa);
}
