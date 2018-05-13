#include<stdio.h>

int main()
{
    int i, j, n1, n2, n3, sum1=0, sum2=0;
    scanf("%d", &n1);

    for(i=1; i<=n1; i++)
    {
        scanf("%d %d", &n2, &n3);
        if(n2<n3)
        {
            for(j=n2; j<=n3; j++)
            {
                if(n2%2!=0)
                {
                    sum1 = sum1+n2;
                }
            }
            printf("%d\n", sum1);
        }
        else if(n2>n3)
        {
            for(j=n3; j<=n2; j++)
            {
                if(n3%2!=0)
                {
                    sum2 = sum2+n3;
                }
            }
            printf("%d\n", sum2);
        }
    }
        return 0;
}
