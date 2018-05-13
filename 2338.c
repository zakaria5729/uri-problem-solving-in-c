#include<stdio.h>
#include<string.h>

int main()
{
    int n, a, i, sum=0;
    char str[50];

    while(1)
    {
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(n>=1 && n<=7)
        {
            for(i=1; i<=n; i++)
            {
                scanf("%d %[^\n]s", &a, str);

                if(strcmp(str, "suco de laranja")==0)
                {
                    sum = sum + (120*a);
                }
                else if(strcmp(str, "morango fresco")==0)
                {
                    sum = sum + (85*a);
                }
                else if(strcmp(str, "mamao")==0)
                {
                    sum = sum + (85*a);
                }
                else if(strcmp(str, "goiaba vermelha")==0)
                {
                    sum = sum + (70*a);
                }
                else if(strcmp(str, "manga")==0)
                {
                    sum = sum + (56*a);
                }
                else if(strcmp(str, "laranja")==0)
                {
                    sum = sum + (50*a);
                }
                else if(strcmp(str, "brocolis")==0)
                {
                    sum = sum + (34*a);
                }
            }
        }

        if(sum>130)
        {
            sum = sum - 130;
            printf("Menos %d mg\n", sum);
        }
        else if(sum<110)
        {
            sum = 110 - sum;
            printf("Mais %d mg\n", sum);
        }
        else if(sum>=110 && sum<=130)
        {
            printf("%d mg\n", sum);
        }

        sum = 0;
    }

    return 0;
}


