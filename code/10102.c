#include <stdio.h>

int main()
{
    int a, vote_num;
    scanf("%d",&a);
    char vote[a++];
    scanf("%s",vote);
    vote_num = 0;
    for (int i = 0; i<a; i++)
    {
        if (vote[i] == 'A')
        {
            vote_num ++;
        }
        else if (vote[i] == 'B')
        {
            vote_num --;
        }
    }
    if (vote_num > 0)
    {
        printf("A");

    }
    else if (vote_num < 0)
    {
        printf("B");
    }
    else
    {
        printf("Tie");
    }
    return 0;


}