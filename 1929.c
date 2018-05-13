#include<stdio.h>

int main()
{
    int a, b, c, d, counter=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);#include<stdio.h>

int main()
{
    int a, b, c, d, counter=0;

    scanf("%d %d %d %d", &a, &b, &c, &d);  ///6 9 22 15

    if((a+b)>=c || (a+b)>=d)
    {
        if((a+c)>=b || (a+c)>=d)
        {
            if((a+d)>=b || (a+d)>=c)
            {
                if((b+c)>=a || (b+c)>=d)
                {
                    if((c+d)>=a || (c+d)>=b)
                    {
                        counter++;
                    }
                }
            }
        }
    }

    if(counter!=0)
    {
        printf("S\n");
    }

    else
    {
        printf("N\n");
    }

    return 0;
}


    if((a+b)>=c || (a+b)>=d)
    {
        if((a+c)>=b || (a+c)>=d)
        {
            if((a+d)>=b || (a+d)>=c)
            {
                if((b+c)>=a || (b+c)>=d)
                {
                    if((c+d)>=a || (c+d)>=b)
                    {
                        counter++;
                    }
                }
            }
        }
    }

    if(counter!=0)
    {
        printf("S\n");
    }

    else
    {
        printf("N\n");
    }

    return 0;
}
