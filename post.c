#include<stdio.h>
void main()
{
   int c = 7, no = 10;

    do {

        no /= c;

      c--;

    } while(c);



    printf ("%dn", no);
}
