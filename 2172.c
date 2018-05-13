#include<stdio.h>

int main()
{
    long long int x, m;

    while(1)
    {
        scanf("%lld %lld", &x, &m);

        if(x==0 && m==0)
        {
            break;
        }

        if(x>0 && x<=3 && m>=10 && m<=4294967295)
        {
            printf("%lld\n", x*m);
        }
    }

    return 0;
}
