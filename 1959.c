#include<stdio.h>

int main()
{
    long long int n, m;

    scanf("%lld %lld", &n, &m);

    if(n>=3 && n<=1000000 && m>=1 && m<=4000)
    {
        printf("%lld\n", n*m);
    }

    return 0;
}
