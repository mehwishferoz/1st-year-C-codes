#include<stdio.h>
#include<stdlib.h>
typedef struct mobile
{
    char name[100];
    char ram[100];
    int price;
} mob;

void read(mob *m, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("Enter the model name, RAM and price of the mobile: \n");
    scanf("%s%s%d", (m+i)->name, (m+i)->ram, &(m+i)->price);
    }
}
void display(mob *m, int n)
{
    int i;
    for(i=0;i<n;i++)
    {
    printf("\nMobile details are as follows: \n");
    printf("Model name = %s\nRAM = %s\nPrice = %d\n", (m+i)->name, (m+i)->ram, (m+i)->price);
    }
}

int main()
{
    mob *m;
    int n;
    printf("Enter the number of mobiles: \n");
    scanf("%d", &n);
    m=(mob*)malloc(n*sizeof(mob));
    read(m,n);
    display(m,n);
    return 0;
}
