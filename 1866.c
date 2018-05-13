#include<stdio.h>

int main()
{
    int n, i, num;

    scanf("%d", &n);

    if(n>=1 && n<=1000)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d", &num);

            if(num%2==0)     ///instead of S = 1 - 1 + 1 - 1 + 1 - 1 + 1 - 1...
            {
                printf("0\n");
            }
            else
            {
                printf("1\n");
            }
        }
    }

    return 0;
}
