#include<stdio.h>

int main()
{
    int n, i, j;
    double d, s[10], max, min, sum;
    char str[50];

    scanf("%d", &n);

    if(n>=0 && n<=100)
    {
        for(i=0; i<n; i++)
        {
            max=-10.0, min=20.0, sum=0;

            scanf("%s", str);
            scanf("%lf", &d);

            if(d>=1.2 && d<=3.8)
            {
                for(j=0; j<7; j++)
                {
                    scanf("%lf", &s[j]);

                    if(s[j]>=0 && s[j]<=10)
                    {
                        if(s[j]>max)
                        {
                            max = s[j];
                        }

                        if(s[j]<min)
                        {
                            min = s[j];
                        }
                    }
                }

                for(j=0; j<7; j++)
                {
                    if(s[j]!=min && s[j]!=max)
                    {
                        sum += s[j];
                    }
                }

                sum = sum * d;
                printf("%s %.2lf\n", str, sum);
            }
        }
    }

    return 0;
}

