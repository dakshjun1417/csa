#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main(int argc, string argv[])
{
    int n = argc - 1;
    int a = get_int("Number of votes: ");
    string cndts[a];
    for(int f = 0; f < a; f++)
    {
        cndts[f] = get_string("Vote: ");
    }
    int votes[n];
    for(int x = 0; x < n; x++)
    {
        votes[x] = 0;
    }
    for(int c = 1; c <= n; c++)
    {
        for(int d = 0; d < a; d++)
        {
            if(strcmp(argv[c], cndts[d])==0)
            {
                votes[c-1]++;
            }
        }
    }
    int votes1[n];
    for(int i = 0; i < n; i++)
    {
        votes1[i] = votes[i];
    }
    int h;
    for(int e = 0; e < n; e++)
    {
        for(int g = e+1;g < n; g++)
        {
            if(votes[e] > votes[g])
            {
                h = votes[e];
                votes[e] = votes[g];
                votes[g] = h;
            }
        }
    }
    for(int j = 0; j < n; j++)
    {
        if(votes1[j]==votes[n-1])
        {
            printf("%s\n", argv[j+1]);
        }
    }
}