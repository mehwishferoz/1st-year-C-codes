#include<stdio.h>
#include<stdlib.h>

int main()
{
    FILE *fp;
    int n;
    fp=fopen("meh.txt", "w");
    printf("Enter the value to be stored: \n");
    scanf("%d", &n);
    fprintf(fp,"Stored value = %d\n",n);
    fclose(fp);
    return 0;
}
