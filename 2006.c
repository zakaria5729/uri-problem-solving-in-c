#include<stdio.h>

int main()
{
    int t, a, b, c, d, e, count=0;

    scanf("%d", &t);

    if(t>=1 && t<=4)
    {
        scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        if(a>=1 && a<=4 && b>=1 && b<=4 && c>=1 && c<=4 && d>=1 && d<=4 && e>=1 && e<=4)
        {
            if(t==a)
            {
                count++;
            }

            if(t==b)
            {
                count++;
            }

            if(t==c)
            {
                count++;
            }

            if(t==d)
            {
                count++;
            }

            if(t==e)
            {
                count++;
            }
        }
    }

    printf("%d\n", count);

    return 0;
}

