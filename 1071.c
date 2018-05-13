#include<stdio.h>
int main()
{
    int n1, n2, sum1=0, i, j;
    scanf("%d %d", &n1, &n2);

    for(i=n2; i<n1; i++)
    {
        if(n2%2==1)
        {
            sum1 = sum1 + n2;
        }
    }
    printf("%d\n", sum1);

    return 0;
}


