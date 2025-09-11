#include <stdio.h>

int main()
{
    int test_num, set,y,k;
    scanf("%d",&test_num);

    for(int i=0; i<test_num; i++)
    {
        set = 0;
        for(int j=0; j<9; j++)
        {
            scanf("%d %d",&y, &k);
            set += y - k;
            
        }
        if(set>0)
        {
            printf("Yonsei\n");
        }
        else if(set<0)
        {
            printf("Korea\n");
        }
        else
        {
            printf("Draw\n");
        }
    }
    return 0;
}