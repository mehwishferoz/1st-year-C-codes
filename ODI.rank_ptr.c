//Read, display and sort the structure using ODI ranks

#include<stdio.h>
int i;
typedef struct player
{
    char team_name[15];
    char player_name[15];
    int ODI_rank;
} player;

void read(player*);
void display(player*);
void sort(player*);

int main()
{
    player p[5], *ptr;
    ptr=p;
    read(ptr);
    display(ptr);
    sort(ptr);
    return 0;
}
void read(player *ptr)
{
    for(i=0;i<5;i++)
    {
        printf("Enter details of Player%d\n", i+1);
        printf("Enter player name, team name and ODI rank: \n");
        scanf("%s%s%d", (ptr+i)->player_name, (ptr+i)->team_name, &(ptr+i)->ODI_rank);
    }
}
void display(player *ptr)
{
    printf("\nEntered player details are: \n");
    for(i=0;i<5;i++)
    {
        printf("Details of Player%d are: \n", i+1);
        printf("\nName = %s\tTeam = %s\tODI_rank = %d\n", (ptr+i)->player_name, (ptr+i)->team_name, (ptr+i)->ODI_rank);
    }
}
void sort(player *ptr)
{
    player p1;
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
            if((ptr+j)->ODI_rank<(ptr+i)->ODI_rank)
            {
                p1=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=p1;
            }
        }
    }
    printf("\nStructure sorted according to ODI ranks: \n");
    display(ptr);
}
