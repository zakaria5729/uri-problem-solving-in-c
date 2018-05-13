#include<stdio.h>

int main()
{
    int n, i, e_count=0, o_count=0, p_count=0, n_count=0;

    for(i=1; i<=5; i++)
    {
        scanf("%d", &n);

        if(n%2==0)
        {
            e_count++;
        }

        else if(n%2!=0)
        {
            o_count++;
        }

        if(n>0)
        {
            p_count++;
        }

        else if(n<0)
        {
            n_count++;
        }
    }
    printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n", e_count, o_count, p_count, n_count);

    return 0;
}

