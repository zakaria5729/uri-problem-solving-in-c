#include<stdio.h>

int main()
{
    int n, q, id, i, a=0, b=0, c=0, d=0, e=0;
    double sum=0;

    scanf("%d", &n);

    if(n>=1 && n<=5)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d %d", &id, &q);

            if(q>=1 && q<=500)
            {
                if(id==1001 && a<1)
                {
                    sum = sum + (q*1.50);
                    a++;
                }

                else if(id==1002 && b<1)
                {
                    sum = sum + (q*2.50);
                    b++;
                }

                else if(id==1003 && c<1)
                {
                    sum = sum + (q*3.50);
                    c++;
                }

                else if(id==1004 && d<1)
                {
                    sum = sum + (q*4.50);
                    d++;
                }

                else if(id==1005 && e<1)
                {
                    sum = sum + (q*5.50);
                    e++;
                }
            }
        }
    }

    printf("%.2lf\n", sum);

    return 0;
}
