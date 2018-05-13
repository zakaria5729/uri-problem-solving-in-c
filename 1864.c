#include<stdio.h>

int main()
{
    int n, i;
    char arr[41]="LIFE IS NOT A PROBLEM TO BE SOLVED";

    scanf("%d", &n);

    for(i=0; i<n; i++)
    {
        printf("%c", arr[i]);
    }
    printf("\n");

    return 0;
}
