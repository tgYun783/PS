#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char input[101];
    int len;
    scanf(" %s",input);
    len = strlen(input);
    for(int i = 0; i < len/2; i++)
    {
        if (input[i] != input[len -1 -i] )
        {
            printf("%d",0);
            exit(0);

        }
    }
    printf("%d",1);
    return 0;
}