#include <stdio.h>
int main()
{
    int n, i, num;

    scanf("%d", &n);

    if(n>=1 && n<=100000)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d", &num);

            if(num>=0 && num<2147483648)
            {
                if(num==2015)
                {
                    printf("1 A.C.\n");
                }

                if(num>2015)
                {
                    num = num - 2014;
                    printf("%d A.C.\n", num);
                }

                else if(num<2015)
                {
                    num = 2015 - num;
                    printf("%d D.C.\n", num);
                }
            }
        }
    }

    return 0;
}
