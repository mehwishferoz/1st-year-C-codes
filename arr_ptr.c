#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *arrayptr = arr;
    printf("The address of first element of the array is %d\n", &arr[0]);
    printf("The address of first element of the array is %d\n", arr);
    printf("The address of second element of the array is %d\n", &arr[1]);
    printf("The address of second element of the array is %d\n", arr+1);
    printf("\n");
    //arr++; is invalid
    //arrayptr++; is valid
    printf("The value of first element of the array is %d\n", *(&arr[0]));
    printf("The value of first element of the array is %d\n", *(arr));
    printf("The value of second element of the array is %d\n", *(&arr[1]));
    printf("The value of second element of the array is %d\n", *(arr+1));

    return 0;
}
