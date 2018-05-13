#include <stdio.h>

int main()
{
    int a, b;

    while(scanf("%d:%d", &a, &b) != EOF)
    {
        if(a<7 || (a==7 && b==0))
        {
            printf("Atraso maximo: 0\n");
        }
        else
        {
            printf("Atraso maximo: %d\n", (((a-7)*60)+b));
        }
    }

    return 0;
}
