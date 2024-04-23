#include <stdio.h>

int main()
{
	int i, sum1=0, sum2=0, sum3=0, sum4=0;
	char s[10], ch, ch1;
	gets(s);

	sum1=(s[0]-'0')+(s[1]-'0');
    ch=s[2];
    sum2=(s[3]-'0')+(s[4]-'0');
    sum3=(s[4]-'0')+(s[5]-'0');
    ch1=s[6];
    sum4=(s[7]-'0')+(s[8]-'0');

	while(1)
	{
	if(sum1%2!=0)
	{
	printf("invalid\n");
	exit(0);
	}

	else if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' || ch=='Y')
	{
	printf("invalid\n");
	exit(0);
	}

	else if(sum2%2!=0)
	{
	printf("invalid\n");
	exit(0);
	}

	else if(sum3%2!=0)
	{
	printf("invalid\n");
	exit(0);
	}

	else if(sum4%2!=0)
	{
	printf("invalid\n");
	exit(0);
	}


	else
	{
	printf("valid\n");
	exit(0);
	}
	}

	return 0;
}
