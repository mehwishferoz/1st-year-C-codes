#include<stdio.h>
int main()
{
    int *ptr;
    double *dptr;
    char *cptr;
    float *fptr;

    printf("Size of integer pointer = %d bytes\n", sizeof(*ptr));
    printf("Size of double pointer = %d bytes\n", sizeof(*dptr));
    printf("Size of character pointer = %d bytes\n", sizeof(*cptr));
    printf("Size of float pointer = %d bytes\n", sizeof(*fptr));

    return 0;
}
