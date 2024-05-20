#include <stdio.h>
#include <string.h>

int main()
{
    char a[81];
    int num, score=0, bonus=0, len;

    scanf("%d",&num);
    for(int i=0; i<num; i++)
    {
        score = 0;
        bonus = 0;
        scanf("%s",a);
        len = strlen(a);
        for(int j=0; j<len; j++)
        {
            
            if(a[j] == 'O')
            {
                score += 1 + bonus;
                bonus ++;
            }
            else
            {
                bonus = 0;
            }
            
        } 

        printf("%d\n",score);

    }
}