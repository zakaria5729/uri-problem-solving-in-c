#include<stdio.h>

int main()
{
    int n, a, sum=0, i, j;

    scanf("%d %d", &a, &n);

    while(n<=0)
    {
        scanf("%d", &n);
    }

    for(i=1, j=a; i<=n; i++, j++)
    {
        sum = sum + j;
    }

    printf("%d\n", sum);

    return 0;
}
