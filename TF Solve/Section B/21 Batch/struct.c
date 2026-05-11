#include <stdio.h>
#include <stdlib.h>

struct Player_Info
{
    char nickname[10];
    int first_match_run, second_match_run, third_match_run;
    float avg_run;
};

int main()
{
    FILE *inFile = fopen("player_Runs.txt", "r");

    int n;
    fscanf(inFile, "%d", &n);
    struct Player_Info *players = (struct Player_Info *)malloc(n * sizeof(struct Player_Info));

    for (int i = 0; i < n; i++)
    {
        fscanf(inFile, "%s %d %d %d", players[i].nickname, &players[i].first_match_run, &players[i].second_match_run, &players[i].third_match_run);
        players[i].avg_run = (players[i].first_match_run + players[i].second_match_run + players[i].third_match_run) / 3.0;
    }

    fclose(inFile);

    for (int i = 0; i < n - 1; i++)
    {
        int max_idx = i;

        for (int j = i + 1; j < n; j++)
        {
            if (players[j].avg_run > players[max_idx].avg_run)
                max_idx = j;
        }

        if (max_idx != i)
        {
            struct Player_Info temp = players[i];
            players[i] = players[max_idx];
            players[max_idx] = temp;
        }
    }

    FILE *outFile = fopen("Player_Rank.txt", "w");
    for (int i = 0; i < n; i++)
    {
        fprintf(outFile, "%s\n", players[i].nickname);
    }

    fclose(outFile);
    free(players);

    return 0;
}