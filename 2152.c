#include<stdio.h>

int main()
{
    int n, m1, m2, m3, i;

    scanf("%d", &n);

    for(i=1; i<=n; i++)
    {
        scanf("%d %d %d", &m1, &m2, &m3);

        if(m3==1)
        {
            if(m1<10 && m2<10)
            {
                printf("0%d:0%d - A porta abriu!\n", m1, m2);
            }
            else if(m1<10 && m2>=10)
            {
                printf("0%d:%d - A porta abriu!\n", m1, m2);
            }
            else if(m1>=10 && m2<10)
            {
                printf("%d:0%d - A porta abriu!\n", m1, m2);
            }
            else
            {
                printf("%d:%d - A porta abriu!\n", m1, m2);
            }
        }

        else if(m3==0)
        {
            if(m1<10 && m2<10)
            {
                printf("0%d:0%d - A porta fechou!\n", m1, m2);
            }
            else if(m1<10 && m2>=10)
            {
                printf("0%d:%d - A porta fechou!\n", m1, m2);
            }
            else if(m1>=10 && m2<10)
            {
                printf("%d:0%d - A porta fechou!\n", m1, m2);
            }
            else
            {
                printf("%d:%d - A porta fechou!\n", m1, m2);
            }
        }
    }

    return 0;
}
