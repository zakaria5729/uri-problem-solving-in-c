#include<stdio.h>

int main()
{
    long long int rev=0, n, count=0;

    scanf("%llu", &n);

    while(n != 0)
    {
        rev = rev*10;
        rev = rev + n%10;
        n = n/10;
    }

    printf("%llu\n", rev);

    return 0;
}

