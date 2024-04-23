#include<stdio.h>
typedef struct mobile
{
    char name[100];
    char ram[100];
    int price;
} mob;

mob read(mob m)
{
    printf("Enter the model name, RAM and price of the mobile: \n");
    scanf("%s%s%d", &m.name, &m.ram, &m.price);
    return m;
}
void display(mob m)
{
    printf("\nMobile details are as follows: \n");
    printf("Model name = %s\nRAM = %s\nPrice = %d\n", m.name, m.ram, m.price);
}

int main()
{
    mob m;
    m=read(m);
    display(m);
    return 0;
}
