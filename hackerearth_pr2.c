#include <stdio.h>
void read(int arr[100][100], int n);
void cost_a(int arr[100][100], int n, int cost_g, int cost_p);
void cost_b(int arr[100][100], int n, int cost_g, int cost_p);
int main(){
	int t, cost_g, cost_p, n, i, arr[100][100];
	scanf("%d", &t);
	while(t--)
	{
		scanf("%d%d", &cost_g, &cost_p);
		scanf("%d", &n);
		read(arr,n);
		if(t%2==0)
		{
			cost_a(arr,n,cost_g,cost_p);
		}
		else
		{
			cost_b(arr,n,cost_g,cost_p);
		}
	}
	return 0;
}
void read(int arr[100][100], int n)
{
	int i, j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d", &arr[i][j]);
		}
	}
}

void cost_a(int arr[100][100], int n, int cost_g, int cost_p)
{
	int i, count=0, cost1, cost2, total=0;
	for(i=0;i<n;i++)
	{
		if(arr[i][1]==1)
		{
			count++;
		}
	}
	cost1=count*cost_g;
	count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i][2]==1)
		{
			count++;
		}
	}
	cost2=count*cost_p;
	total=cost1+cost2;
	printf("%d", &total);
}
void cost_b(int arr[100][100], int n, int cost_g, int cost_p)
{
	int i, count=0, cost1, cost2, total=0;
	for(i=0;i<n;i++)
	{
		if(arr[i][2]==1)
		{
			count++;
		}
	}
	cost1=count*cost_g;
	count=0;
	for(i=0;i<n;i++)
	{
		if(arr[i][1]==1)
		{
			count++;
		}
	}
	cost2=count*cost_p;
	total=cost1+cost2;
	printf("%d", &total);
}
