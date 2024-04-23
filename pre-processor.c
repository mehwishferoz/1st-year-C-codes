#include<stdio.h>
#include<stdlib.h>
#define DEBUG 3.62
#ifdef DEBUG // This will return True or False 
#define GT 39
#endif
int main(){
    printf("File name is %s\n", __FILE__);
    printf("Today's date is %s\n", __DATE__);
    printf("The time is %s\n", __TIME__);
    printf("Line number is %d\n", __LINE__);
    printf("ANSI: %d\n", __STDC__);
    printf("Value of GT is %d",GT);        
    // GT value will be printed as 39 since DEBUG was defined previously

    return 0;
}