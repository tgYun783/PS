#include <stdio.h>
#include <stdlib.h>
int i;

int main()
{
    int num_m2 = 0;
    int num_m1 = 1;
    int num_input = 0;
    int input;
    scanf("%d",&input);
    if(input == 0)
    {
        printf("%d",num_m2);
        exit(0);
    }
    if(input == 1)
    {
        printf("%d",num_m1);
        exit(0);
    }
    while (i != (input-1))
    {
        num_input = num_m2 + num_m1;
        num_m2 = num_m1;
        num_m1 = num_input;
        i ++;
    }
    printf("%d",num_input);

}