#include<stdio.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    printf("Feliz nat");

    if(n>1 && n<=10000)
    {
        for(i=1; i<=n; i++)
        {
            printf("a");
        }
    }
    printf("l!\n");

    return 0;
}
