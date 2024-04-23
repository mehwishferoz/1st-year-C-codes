#include<stdio.h>
#include<stdlib.h>
struct player
{
  char player_name[30];
  int player_id;
  float player_points;
  struct player *next;
};

main()
{
struct player *head,*newplayer;
struct player * insert_at_beg(struct player *,struct player *);
struct player * insert_at_end(struct player *,struct player *);
struct player * delete_at_beg(struct player *);
struct player * delete_at_end(struct player *);
int count_players(struct player*);
struct player *sort_players(struct player *);
void display(struct player *);
  head=NULL;
  int ch,c;
  while(1)
  {
  printf("1-insert at begining\n");
  printf("2--insert at end\n");
  printf("3--delete at begining\n");
  printf("4--delete at end\n");
  printf("5--display\n");
  printf("6--count players\n");
  printf("7--sort players based on points\n");
  printf("8--exit\n");
  printf("enter the choice\n");
scanf("%d",&ch);
switch(ch)
{
  case 1: newplayer=(struct player *)malloc(sizeof(struct player));
                 printf("enter player player_name,player id and player_points\n");
                 scanf("%s%d%f",&newplayer->player_name,&newplayer->player_id,&newplayer->player_points);
                 head=insert_at_beg(newplayer,head);
                 break;
  case 2: newplayer=(struct player *)malloc(sizeof(struct player));
                printf("enter player player_name,player id and player_points\n");
                 scanf("%s%d%f",&newplayer->player_name,&newplayer->player_id,&newplayer->player_points);
                 head=insert_at_end(newplayer,head);
                 break;
case 3: head=delete_at_beg(head);
               break;
case 4:head=delete_at_end(head);
               break;
case 5: display(head);
              break;
case 6: c=count_players(head);
                 printf("no of players=%d\n",c);
                 break;
case 7: head=sort_players(head);break;
case 8: exit(0);break;
default:printf("invalid choice\n");break;
}
}
}


struct player * insert_at_beg(struct player *newplayer,struct player *head)
{
    struct player *temp;
   if(head==NULL)
     {
        head=newplayer;
        newplayer->next=head;
     }
     else
     {
        temp=head;
        while(temp->next!=head)
        {
           temp=temp->next;
        }
        temp->next=newplayer;
        newplayer->next=head;
        head=newplayer;
     }
     return(head);
}


struct player * insert_at_end(struct player *newplayer,struct player *head)
{
    struct player *temp;
   if(head==NULL)
     {
        head=newplayer;
        newplayer->next=head;
     }
     else
     {
        temp=head;
        while(temp->next!=head)
        {
           temp=temp->next;
        }
        temp->next=newplayer;
        newplayer->next=head;
     }
     return(head);
}



struct player * delete_at_beg(struct player *head)
{
    struct player *temp,*temp1;
   if(head==NULL)
     {
        printf("No players present-cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("player deleted=%s\t %d\t %f\n",head->player_name,head->player_id,head->player_points);
            free(head);
            head=NULL;
         }
         else
         {
             temp=head;
             while(temp->next!=head)
             {
               temp=temp->next;
             }
             printf("player deleted=%s\t %d\t %f\n",head->player_name,head->player_id,head->player_points);
              temp1=head->next;
              free(head);
              temp->next=temp1;
              head=temp1;
         }
     }
     return(head);
}

struct player *temp;

struct player * delete_at_end(struct player *head)
{
    struct player *temp,*temp1;
   if(head==NULL)
     {
        printf("No players present--cant delete\n");
     }
     else
     {
         if(head->next==head)
         {
            printf("player deleted=%s\t %d\t %f\n",head->player_name,head->player_id,head->player_points);
            free(head);
            head=NULL;
         }
         else
         {
             temp=head;
             while(temp->next!=head)
             {
             temp1=temp;
               temp=temp->next;
             }
             printf("player deleted=%s\t %d\t %f\n",temp->player_name,temp->player_id, temp->player_points);
             free(temp);
             temp1->next=head;
         }
     }
     return(head);
}



void display(struct player *head)
{
    struct player *temp;
  if(head==NULL)
     {
        printf("No players present\n");
     }
     else
     {
         temp=head;
         while(temp->next!=head)
         {
            printf("%s\t %d\t %f\n",temp->player_name,temp->player_id, temp->player_points);
            temp=temp->next;
         }
        printf("%s\t %d\t %f\n",temp->player_name,temp->player_id, temp->player_points);
     }
}



int count_players(struct player *head)
{
    int count=0;
    if(head==NULL)
        return(0);
    else
    {
        if(head->next==head)
            return(1);
        else
        {
            temp=head;
            while(temp->next!=head)
            {
            count++;
            temp=temp->next;
            }
           return(count+1);
        }

    }
}

struct player *sort_players(struct player *head)
{
    int i,j,c;
    struct player *temp1;
    if(head==NULL)
    {
         printf("No players present\n");
         return(head);
    }

    else
    {
        if(head->next==head)
            return(head);
        else
        {
            c=count_players(head);
            for(i=1;i<=c;i++)
            {
                temp=head;
                for(j=1;j<=c-i;j++)
                {
                    if(temp->player_points>temp->next->player_points)
                    {
                        temp1=(struct player*)malloc(sizeof(struct player));
                        strcpy(temp1->player_name,temp->player_name);
                        temp1->player_id=temp->player_id;
                        temp1->player_points=temp->player_points;

                        strcpy(temp->player_name,temp->next->player_name);
                        temp->player_id=temp->next->player_id;
                        temp->player_points=temp->next->player_points;

                        strcpy(temp->next->player_name,temp1->player_name);
                        temp->next->player_id=temp1->player_id;
                        temp->next->player_points=temp1->player_points;
                    }
                    temp=temp->next;
                }
            }
        return(head);

        }
    }

}
