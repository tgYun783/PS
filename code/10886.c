#include <stdio.h>

int main()
{
    int people, vote, temp;

    scanf("%d",&people);
    vote = 0;

    for (int i=0; i<people; i++)
    {
        scanf("%d",&temp);
        if (temp == 1)
        {
            vote ++;
        }
        else if (temp == 0)
        {
            vote --;
        }
    }
    if (vote > 0)
    {
        printf("Junhee is cute!");

    }
    else if (vote < 0)
    {
        printf("Junhee is not cute!");
    }
    return 0;
}   