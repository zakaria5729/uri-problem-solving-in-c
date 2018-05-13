#include<stdio.h>

int main()
{
    long long int num, next, fst, scnd;
    int i, n;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%lld", &num);

        if(num>=0 && num<=60)
        {
            if(num==0)
            {
                printf("Fib(0) = 0\n");
            }
            else if(num==1)
            {
                printf("Fib(1) = 1\n");
            }
            else
            {
                fst=0, scnd=1;

                for(i=0; i<=num-2; i++)
                {
                    next = fst + scnd;
                    fst = scnd;
                    scnd = next;
                }

                printf("Fib(%lld) = %lld\n", num, next);
            }
        }
    }

    return 0;
}

