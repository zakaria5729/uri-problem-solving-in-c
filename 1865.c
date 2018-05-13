#include<stdio.h>

int main()
{
    int n, i, num;
    char arr[100];

    scanf("%d", &n);

    if(n>=1 && n<=25000)
    {
        while(n--)
        {
            scanf("%s %d", arr, &num);

            if(strcmp(arr, "Thor")==0)
            {
                printf("Y\n");
            }
            else
            {
                printf("N\n");
            }
        }
    }

    return 0;
}

