#include<stdio.h>

int main()
{
    int year, month, days, N;
    scanf("%d", &N);

    year = N / 365;
    month = (N % 365) / 30;
    days = (N % 365) % 30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, days);

    return 0;
}


