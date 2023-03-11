#include<stdio.h>
#include<string.h>
struct in_game
{
    int ig_id;
    char ig_name[10];
}ig;
struct out_game
{
    int og_id;
    char og_name[10];
}og;
struct player 
{
    int pid;
    char pname[30];
    int age;
    union games
    {
        struct in_game ig;
        struct out_game og;
        
    }game;
};
int main()
{
    int max, c;
    printf("\nEnter total number of of players\n");
    scanf("%d",&max);
    struct player p[max];
    for(int i=0;i<max;i++)
    {
    printf("\nPlayer No: %d\n",i+1);
    printf("Enter 1 for indoor games and 2 for outdoor games\n");
    scanf("%d",&c);

    if (c==1)
    {
        printf("Player-%d chose Indoor Games\n Please enter the details\n",i+1);
        printf("Enter id:");
        scanf("%d",&p[i].pid);
        printf("Enter name:");
        scanf("%s",&p[i].pname);
        printf("Enter age:");
        scanf("%d",&p[i].age);
        printf("Enter Game id:");
        scanf("%d",&p[i].game.ig.ig_id);
        printf("Enter Game name:");
        scanf("%s",&p[i].game.ig.ig_name);
    }
    else
    {
        printf("Player-%d chose Outdoor Games\n Please enter the details\n",i+1);
        printf("Enter Id:");
        scanf("%d",&p[i].pid);
        printf("Enter name:");
        scanf("%s",&p[i].pname);
        printf("Enter age:");
        scanf("%d",&p[i].age);
        printf("Enter Game id:");
        scanf("%d",&p[i].game.og.og_id);
        printf("Enter Game name:");
        scanf("%s",&p[i].game.og.og_name);
    }
    }
    for(int i=0;i<max;i++)
    {
    printf("\nPlayer-%d details are\n",i+1);
    if (c==1)
        printf("\n Player ID=%d\n Player Name:%s\n Player Age:%d\n Indoor Game ID=%d\n Indoor Game=%s\n",p[i].pid,p[i].pname,p[i].age,p[i].game.ig.ig_id,p[i].game.ig.ig_name);
    else
        printf("\n Player ID=%d\n Player Name:%s\n Player Age:%d\n Outdoor Game ID=%d\n Outdoor Game=%s\n",p[i].pid,p[i].pname,p[i].age,p[i].game.og.og_id,p[i].game.og.og_name);

    }
}
