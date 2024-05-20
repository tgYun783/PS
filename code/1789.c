#include <stdio.h>

int main(void)
{
    long long int num,i,total;
    i = 1;
    total = 0;
    scanf("%lld",&num);
    while (total <= num)
    {
        total += i;
        i ++;

    }
    printf("%lld", i - 2);
    return 0;
    
    
}