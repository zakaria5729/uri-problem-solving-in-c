#include<stdio.h>

int main()
{
    int n, n1, i, c1=0, c2=0, c3=0, c4=0;

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        scanf("%d", &n1);

        if(n1%2==0)
        {
            c1++;
        }
        if(n1%3==0)
        {
            c2++;
        }
        if(n1%4==0)
        {
            c3++;
        }
        if(n1%5==0)
        {
            c4++;
        }
    }

    printf("%d Multiplo(s) de 2\n", c1);
    printf("%d Multiplo(s) de 3\n", c2);
    printf("%d Multiplo(s) de 4\n", c3);
    printf("%d Multiplo(s) de 5\n", c4);

    return 0;
}
