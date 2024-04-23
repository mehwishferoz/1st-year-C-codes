#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s1[100], s2[100];
    char s3[100]="Welcome ";
    char s4=' ';
    gets(s1);
    strcat(s3,s1);
    strcat(s3,s4);
    gets(s2);
    strcat(s3,s2);
    puts(s3);
return 0;
}
