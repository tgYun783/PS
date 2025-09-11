#include <stdio.h>
#include <stdbool.h>

int main()
{
    int man, female;

    while (true)
    {
        scanf("%d %d",&man, &female);
        if (man == 0 && female == 0)
        {
            break;
        }
        printf("%d\n",man + female);
    }
    

}