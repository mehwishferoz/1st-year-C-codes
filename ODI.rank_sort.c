#include<stdio.h>
int i;
typedef struct player
{
    char team_name[15];
    char player_name[15];
    int ODI_rank;
} player;

void read(player p[]);
void display(player p[]);
void sort(player p[]);

int main()
{
    player p[5];
    read(p);
    display(p);
    sort(p);
    return 0;
}

void read(player p[5])
{
    for(i=0;i<5;i++)
    {
        printf("Enter the name of player, team and ODI rank of player %d: \n", i+1);
        scanf("%s%s%d", p[i].team_name, p[i].player_name, &p[i].ODI_rank);
    }
}

void display(player p[5])
{
    for(i=0;i<5;i++)
    {
        printf("Details of player %d\n", i+1);
        printf("Name = %s\nTeam = %s\nODI rank = %d\n",  p[i].team_name, p[i].player_name, p[i].ODI_rank);
    }
}
void sort(player p[5])
{
    player p1;
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if(p[j].ODI_rank<p[i].ODI_rank)
            {
                p1=p[i];
                p[i]=p[j];
                p[j]=p1;
            }
        }
    }
    printf("Structure sorted according to ODI rank: \n");
    display(p);
}
