#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a, b;
    


    while(true)
    {
        scanf("%d %d",&a, &b);
        if (a > b) //배수확인
        {
            if (a % b == 0)
            {
                printf("multiple\n");
            }
            else
            {
                printf("neither\n");
            }
        }
        else if(a < b) //약수 확인
        {
            if (b % a == 0)
            {
                printf("factor\n");
            }
            else
            {
                printf("neither\n");
            }
        }
        else
        {
            break;
        }
    }
}