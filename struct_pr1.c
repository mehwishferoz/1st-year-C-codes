#include<stdio.h>

struct student
{
    char name[20], address[20], srn[20];
    int roll_no;
    float sgpa;
};

void display(char[], char[], char[], int, float);

int main()
{
    struct student s1={"Mehwish", "Ram Nagar", "01FE21BCI057", 1853, 8.75};
    display(s1.name, s1.address, s1.srn, s1.roll_no, s1.sgpa);
    return 0;
}

void display(char name[20], char address[20], char srn[20], int roll_no, float sgpa)
{
    printf("%s\n%s\n%s\n%d\n%f\n",name,address,srn,roll_no,sgpa);
}
