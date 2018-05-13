#include<stdio.h>
#include<string.h>

int main()
{
    int a, b, i;
    char str[10];

    scanf("%d %d", &a, &b);

    if(a>0 && a<500 && b>0 && b<500)
    {
        for(i=1; i<=b; i++)
        {
            scanf("%s", str);

            if(strcmp(str, "fechou")==0)
            {
                a++;
            }

            else if(strcmp(str, "clicou")==0)
            {
                a--;
            }
        }
    }

    printf("%d\n", a);

    return 0;
}
