#include<stdio.h>
#include<math.h>
long binintpart(int a);
float bindecimalpart(float b);

long binintpart(int a)
{
    long bb=0;
    int v=1;
    while(a>0)
    {
        int d=a%2;
        bb=bb+(v*d);
        v=v*10;
        a=a/2;
    }
    return bb;
}
float bindecimalpart(float b)
{
    float bin=0;
    int k=-1,cnum=0;
    while(b>0&&b<1)
    {
        float d = b*2.0;
        cnum = (int)d%2;
        bin=bin+cnum*(pow(10,k--));
        b=d-cnum;
    }
    return bin;
}
void main()
{
    float n,b,z
    ;
    int a;
    printf("Enter a decimal number :");
    scanf("%f",&n);
    float m=n;
    if(n>=0)
    {
        a=(int)m;  //integer part
        b=m-a; // decimal part
        printf("\n integer part =%d",a);
        printf("\n decimal part =%f",b);

        long x = binintpart(a);
        float y = bindecimalpart(b);
        printf("\n binary of integer part =%ld",x);
        printf("\n binary of decimal part =%f",y);
        printf("\n binary=%f",x+y);

    }

}
