#include <stdio.h>

int main()
{
    int num, q1=0, q2=0, q3=0, q4=0, axis=0;
    int x, y;

    scanf("%d",&num);

    for(int i=0; i<num; i++)
    {
        x = 0;
        y = 0;
        scanf("%d %d",&x, &y);

        if (x == 0 || y == 0)
        {
            axis ++;
        }
        else if (y>0)
        {
            if (x>0)
            {
                q1 ++;
            }
            else
            {
                q2 ++;
            }
        }
        else //y<0
        {
            if (x>0)
            {
                q4 ++;
            }
            else
            {
                q3 ++;
            }
        }
    }
    printf("Q1: %d\nQ2: %d\nQ3: %d\nQ4: %d\nAXIS: %d\n",q1, q2, q3, q4, axis);
    /*printf("Q1: %d\n",q1);
    printf("Q2: %d\n",q2);
    printf("Q3: %d\n",q3);
    printf("Q4: %d\n",q4);
    printf("AXIS: %d\n",axis);
    */

    return 0;

}