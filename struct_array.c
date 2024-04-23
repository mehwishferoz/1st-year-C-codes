#include<stdio.h>
struct team_player
    {
        char player_name[20];
        char team_name[20];
        float average;
        int highest_score;
        int centuries;
        int ODI_rank;
    };

int main()
{
    struct team_player p[11];
    for(int i=0;i<11;i++)
    {
        printf("Enter the details of player %d\n", i+1);
        printf("Enter the name of player: \n");
        gets(p[i].player_name);
        gets(p[i].player_name);
        printf("Enter the name of team: \n");
        gets(p[i].team_name);
        printf("Enter player's average, highest score, centuries and ODI rank: \n");
        scanf("%f%d%d%d", &p[i].average, &p[i].highest_score, &p[i].centuries, &p[i].ODI_rank);
    }

    printf("The details of the players are: \n");

    for(int j=0;j<11;j++)
    {
        printf("Details of player %d: \n", j+1);
        printf("%s%s%f%d%d%d",p[j].player_name ,p[j].team_name, p[j].average, p[j].highest_score, p[j].centuries, p[j].ODI_rank);
    }
    return 0;
}
