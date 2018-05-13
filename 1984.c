#include<stdio.h>

int main()
{
    unsigned long long int n, r=-1, q;
    int i, count=0;

    scanf("%llu", &n);

    while(r != 0)
    {
        if(count==0)
        {
            r = n/10;
            q = n%10;

            count++;
        }
        else
        {
            q = r%10;
            r = r/10;
        }

        printf("%llu", q);
    }
    printf("\n");

    return 0;
}
