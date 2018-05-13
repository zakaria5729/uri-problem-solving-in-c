#include <stdio.h>
int main()
{
    float A, B;
    int v1,v2,v3,v4,v5,v6,p1,p2,p3,p4,p5,p6,c1,c2,c3,c4,c5,c6,d1,d2,d3,d4,d5,d6,N,M;

    scanf("%f", &A);
    N = A*100;

    printf("NOTAS:\n");
    v1 = N/10000;
    printf("%d nota(s) de R$ 100.00\n", v1);
    p1 = N%1000;

    v2 = p1/50;
    printf("%d nota(s) de R$ 50.00\n", v2);
    p2 = p1%50;

    v3 = p2/20;
    printf("%d nota(s) de R$ 20.00\n", v3);
    p3 = p2%20;

    v4 = p3/10;
    printf("%d nota(s) de R$ 10.00\n", v4);
    p4 = p3%10;

    v5 = p4/5;
    printf("%d nota(s) de R$ 5.00\n", v5);
    p5 = p4%5;

    v6 = p5/2;
    printf("%d nota(s) de R$ 2.00\n", v6);
    p6 = p5%2;
    printf("%d", p6);

    printf("MOEDAS:\n");
    c1 =p6/100;
    printf("%d nota(s) de R$ 1.00\n", c1);
    d1 = p6%100;

    c2 = d1/50;
    printf("%d nota(s) de R$ 0.50\n", c2);
    d2 = d1%50;

    c3 = d2/25;
    printf("%d nota(s) de R$ 0.25\n", c3);
    d3 = d2%25;

    c4 = d3/10;
    printf("%d nota(s) de R$ 0.10\n", c4);
    d4 = d3%10;

    c5 = d4/5;
    printf("%d nota(s) de R$ 0.05\n", c5);
    d5 = d4%5;

    c6 = d5/1;
    printf("%d nota(s) de R$ 0.01\n", c6);

    return 0;
}

