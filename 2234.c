#include<stdio.h>

int main()
{
    int n, m;
    double t;

    scanf("%d %d", &n, &m);

    if(n>=1 && n<=1000 && m>=1 && m<=1000)
    {
        t = (double) n/m;

        printf("%.2lf\n", t);
    }

    return 0;
}

