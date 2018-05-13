#include<stdio.h>
int main(void)
{
    int i, n;
    scanf("%d", &n);

    for(i=1; i<=10; i++)
    {
        printf("%d x %d = %d\n", i, n, i*n);
    }

    return 0;
}
