/*A black colour Audi Q7 petrol car has a fuel tank capacity of 60 litres and a mileage of 14 kmpl.
With Rs. 1066.64 worth of petrol in fuel tank, determine whether the car can travel from Hubli to Belgaum which are 100 kms apart*/
#include<stdio.h>
#define m 14
void main ()
{
    float p, fpl;
    printf("Enter the worth of petrol in fuel tank: \n");
    scanf("%f", &p);
    printf("Enter the price of fuel per litre: \n");
    scanf("%f", &fpl);
    float f=p/fpl;
    printf("The tank has %f litre(s) of fuel \n", f);
    float d=m*f;
    printf("Distance car can travel is: %f \n", d);

    if (d>=100)

    {
        printf("Your car can travel from Hubli to Belguam \n");
    }

    else

    {
        printf("Your car cannot travel from Hubli to Belguam \n");
    }
}

