#include<stdio.h>
#include<stdlib.h>

typedef struct cricket
{
    char player_name[20];
    char team_name[20];
    float average;
    int highest_score;
    int centuries;
    int ODI_rank;
} c;

void read(c *ptr,int n);
void display(c *ptr,int n);

int main()
{
    c *ptr;
    int n;
    printf("Enter the number of players:");
    scanf("%d",&n);
    ptr=(c*)malloc(n*sizeof(c));
    read(ptr,n);
    display(ptr,n);
    return 0;
}

void read(c *ptr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nEnter the details of player %d:",i+1);
        printf("\nEnter player name,team name,average,highest score,centuries,ODI rank:\n");
        scanf("%s%s%f%d%d%d",(ptr+i)->player_name,(ptr+i)->team_name,&(ptr+i)->average,&(ptr+i)->highest_score,&(ptr+i)->centuries,&(ptr+i)->ODI_rank);
    }
}

void display(c *ptr,int n)
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("\nDetails of player %d:",i+1);
        printf("\nPlayer name:%s\nTeam name:%s\nAverage:%f\nHighest score:%d\nCenturies:%d\nODI rank:%d\n",(ptr+i)->player_name,(ptr+i)->team_name,(ptr+i)->average,(ptr+i)->highest_score,(ptr+i)->centuries,(ptr+i)->ODI_rank);
    }
}
