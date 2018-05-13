#include<stdio.h>

int main()
{
    int i, n1, n2, n3;
    scanf("%d", &n1);


    for(i=1; i<=n1; i++)
    {
        scanf("%d %d", &n2, &n3);

        if(n3!=0)
        {
            printf("%.1lf\n", (double) n2/n3);
        }
        else if(n3==0)
        {
            printf("divisao impossivel\n");
        }
    }

    return 0;
}

