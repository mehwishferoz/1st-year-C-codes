#include<stdio.h>
#include<string.h>
typedef struct employee
{
    char name[100], country[100];
    int salary;
    int years;
}emp;

int i;
void read(emp*,int);
void display(emp*,int);
void inc_salary(emp*,int);

int main()
{
    emp m[10], *p;
    p=m;
    int n;
    printf("Enter number of employees: \n");
    scanf("%d", &n);
    read(p,n);
    display(p,n);
    inc_salary(p,n);
    return 0;
}

void read(emp *p, int n)
{
    printf("Enter employee details: \n");
    for(i=0;i<n;i++)
    {
        printf("Name\tCountry\tSalary\tYears\n");
        scanf("%s%s%d%d", (p+i)->name, (p+i)->country, &(p+i)->salary, &(p+i)->years);
    }
}

void display(emp *p, int n)
{
    printf("Entered employee details are: \n");
    for(i=0;i<n;i++)
    {
        printf("Details of employee %d: ", i+1);
        printf("Name = %s\tCountry = %s\tSalary = %d\tYears = %d\n", (p+i)->name, (p+i)->country, (p+i)->salary, (p+i)->years);
    }
}

void inc_salary(emp *p, int n)
{
    char x[10]="India", y[10]="Russia";
    printf("Modified salaries: \n");
    for(i=0;i<n;i++)
    {
        if((p+i)->years>=1 && (p+i)->years<=10)
        {
            if(strcmp((p+i)->country,x)==0)
            {
                (p+i)->salary+=500;
            }
            else if(strcmp((p+i)->country,y)==0)
            {
                (p+i)->salary+=400;
            }
        }
        else if((p+i)->years>10)
        {
            if(strcmp((p+i)->country,x)==0)
            {
                (p+i)->salary+=1000;
            }
            else if(strcmp((p+i)->country,y)==0)
            {
                (p+i)->salary+=900;
            }
        }
    }
    display(p,n);
}
