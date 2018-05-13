#include<stdio.h>

int main()
{
    int fst=0, scnd=1, next, n, i;
    scanf("%d", &n);

    if(n>0 && n<46)
    {
        if(n==0)
        {
            printf("0\n");
        }
        else if(n==1)
        {
            printf("1\n");
        }
        else
        {
            printf("0 1");
            for(i=0; i<n-2; i++)
            {
                next = fst + scnd;
                fst = scnd;
                scnd = next;

                printf(" %d", next);
            }
            printf("\n");
        }
    }

    return 0;
}
