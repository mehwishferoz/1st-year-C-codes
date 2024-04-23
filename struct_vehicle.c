//Store the data related to vehicle. Access the stored data with and without using pointers

#include<stdio.h>

typedef struct vehicle
{
    char name[100];
    char num[100];
    float mileage;
} veh;

void read(veh *v1)
{
    printf("Enter the vehicle name, number and mileage: \n");
    //scanf("%s%s%f", v1.name, v1.num, &v1.mileage);
    scanf("%s%s%f", &v1->name, &v1->num, &v1->mileage);
}
void display(veh *v1)
{
    //printf("Vehicle name = %s\nVehicle number = %s\nMileage = %f", v1.name, v1.num, v1.mileage);
    printf("Vehicle name = %s\nVehicle number = %s\nMileage = %f", v1->name, v1->num, v1->mileage);
}
//void read(veh*);
//void read(veh*);

int main()
{
    veh v, *v1;
    v1=&v;
    read(v1);
    display(v1);
    return 0;
}
