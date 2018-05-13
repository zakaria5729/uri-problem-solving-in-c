#include<stdio.h>

int main()
{
    int n, i, bon, a1, d1, l1, a2, d2, l2, val1, val2;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d", &bon);
        scanf("%d %d %d", &a1, &d1, &l1);
        scanf("%d %d %d", &a2, &d2, &l2);

        if(l1%2==0)
        {
            val1 = ((a1+d1)/2)+bon;
        }
        else
        {
            val1 = (a1+d1)/2;
        }

        if(l2%2==0)
        {
            val2 = ((a2+d2)/2)+bon;
        }
        else
        {
            val2 = (a2+d2)/2;
        }

        if(val1>val2)
        {
            printf("Dabriel\n");
        }
        else if(val1<val2)
        {
            printf("Guarte\n");
        }
        else
        {
            printf("Empate\n");
        }
    }

    return 0;
}
