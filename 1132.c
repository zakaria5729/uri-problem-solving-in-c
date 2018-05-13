#include<stdio.h>

int main()
{
    int i, n1, n2, sum=0;
    scanf("%d %d", &n1, &n2);

    if(n1<n2)
    {
        for(i=n1; i<=n2; i++)
    {
        if(i%13!=0)
        {
            sum = sum+i;
        }
    }
    }
    else
    {
        for(i=n2; i<=n1; i++)
    {
        if(i%13!=0)
        {
            sum = sum+i;
        }
    }
    }

    printf("%d\n", sum);

    return 0;
}
