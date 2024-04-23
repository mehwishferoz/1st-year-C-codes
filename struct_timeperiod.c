#include<stdio.h>
//Calculate difference between two periods

typedef struct time_period
{
    int hours;
    int mins;
    int secs;
}tp;

void read(tp*,tp*);
void diff(tp*,tp*);

int main()
{
    tp tp1, tp2, *p1, *p2;
    p1=&tp1;
    p2=&tp2;
    read(p1,p2);
    diff(p1,p2);
    return 0;
}
void read(tp *p1, tp *p2)
{
    printf("Enter 1st time period: \nEnter hours, minutes and seconds\n");
    scanf("%d%d%d", &p1->hours, &p1->mins, &p1->secs);
    printf("Enter 2nd time period: \nEnter hours, minutes and seconds\n");
    scanf("%d%d%d", &p2->hours, &p2->mins, &p2->secs);
}
void diff(tp *p1, tp *p2)
{
    tp tp3, *p3;
    p3=&tp3;
    p3->hours=abs(p1->hours-p2->hours);
    p3->mins=abs(p1->mins-p2->mins);
    p3->secs=abs(p1->secs-p2->secs);
    printf("Difference: %d hrs %d mins %d secs\n", p3->hours, p3->mins, p3->secs);
}
