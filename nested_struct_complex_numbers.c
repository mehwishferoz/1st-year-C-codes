#include<stdio.h>
//C program to add two complex numbers

typedef struct complex_nor
{
    int real;
    int img;
}cn;

void read(cn*,cn*);
void add(cn*,cn*);

int main()
{
    cn cn1, cn2, *p1, *p2;
    p1=&cn1;
    p2=&cn2;
    read(p1,p2);
    add(p1,p2);
    return 0;
}
void read(cn *p1,cn *p2)
{
    printf("Enter 1st complex number: \nEnter the real and imaginary part: \n");
    scanf("%d%d", &p1->real, &p1->img);
    printf("Enter 2nd complex number: \nEnter the real and imaginary part: \n");
    scanf("%d%d", &p2->real, &p2->img);
}
void add(cn *p1,cn *p2)
{
    cn cn3, *p3;
    p3=&cn3;
    p3->real=(p1->real+p2->real);
    p3->img=(p1->img+p2->img);
    printf("Sum = %d + %di\n",p3->real, p3->img);
}
