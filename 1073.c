#include<stdio.h>

int main()
{
    int n1, i;
    scanf("%d", &n1);

    for(i=1; i<=n1; i++)
    {
        if(i%2==0)
    {
        printf("%d^2 = %d\n", i, i*i);
    }
    }

    return 0;
}   //not done



