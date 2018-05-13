#include<stdio.h>

int main()
{
    int x, z, i, sum = 0, count = 0;

    scanf("%d %d", &x, &z);

    while(z <= x)
    {
        scanf("%d", &z);
    }

    if(z > x)
    {
        for(i=x; i<100000000; i++)
        {
            sum = sum + i;
            count++;

            if(sum > z)
            {
                break;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}
