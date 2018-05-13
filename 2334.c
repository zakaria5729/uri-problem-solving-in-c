#include<stdio.h>

int main()
{
    unsigned long long int p;

    while(1)
    {
        scanf("%llu", &p);

        if(p==-1)
        {
            break;
        }

        if(p>=0 && p<=10000000000000000000)
        {
            if(p==0)
            {
                printf("0\n");
            }
            else
            {
                printf("%llu\n", p-1);
            }
        }
    }

    return 0;
}

