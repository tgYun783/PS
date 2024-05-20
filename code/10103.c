#include <stdio.h>

int main()
{
    int player_1_score, player_2_score, dice_1, dice_2, round;
    player_1_score = 100;
    player_2_score = 100;
    scanf("%d",&round);
    for (int count = 0; count < round; count++)
    {
        scanf("%d %d",&dice_1, &dice_2);
        if (dice_1 > dice_2)
        {
            player_2_score -= dice_1;
        
        }
        else if (dice_1 == dice_2)
        {
            continue;
        }
        else
        {
            player_1_score -= dice_2;
        }
    }
    printf("%d\n%d",player_1_score, player_2_score);
}