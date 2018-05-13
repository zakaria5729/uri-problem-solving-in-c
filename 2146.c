#include<stdio.h>

int main()
{
    int n1;

    while(scanf("%d", &n1)!=EOF)
    {
        if(n1>=1001 && n1<=9999)
        {
            printf("%d\n", n1-1);
        }
    }

    return 0;
}
