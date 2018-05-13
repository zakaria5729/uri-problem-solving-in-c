#include<stdio.h>

int main()
{
    int n, i, t, max=1000, pos;

    scanf("%d", &n);

    if(n>=1 && n<=100)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d", &t);

            if(t>=0 && t<=20)
            {
                if(max>t)
                {
                    max = t;
                    pos = i;
                }
            }
        }
    }

    printf("%d\n", pos);

    return 0;
}
