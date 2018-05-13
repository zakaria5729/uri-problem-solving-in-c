#include <stdio.h>

int main()
{
    int a, b;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        if(a>=1 && a<=13 && b>=1 && b<=13)
        {
            if(a==b)
            {
                printf("%d\n", a);
            }
            else if(a>b)
            {
                printf("%d\n", a);
            }
            else if(a<b)
            {
                printf("%d\n", b);
            }
        }
    }

    return 0;
}

