#include<stdio.h>
#include<string.h>

int main()
{
    int sum=0, count=0;
    char str1[10];

    while(1)
    {
        if(count>=3)
        {
            break;
        }

        gets(str1);

        if(strcmp(str1, "caw caw")==0)
        {
            printf("%d\n", sum);
            count++;
            sum=0;
        }
        else if(strcmp(str1, "caw caw")!=0)
        {
            if(strcmp(str1, "---")==0)
            {
                sum = sum + 0;
            }

            if(strcmp(str1, "--*")==0)
            {
                sum = sum + 1;
            }

            else if(strcmp(str1, "-*-")==0)
            {
                sum = sum + 2;
            }

            else if(strcmp(str1, "-**")==0)
            {
                sum = sum + 3;
            }

            else if(strcmp(str1, "*--")==0)
            {
                sum = sum + 4;
            }

            else if(strcmp(str1, "*-*")==0)
            {
                sum = sum + 5;
            }

            else if(strcmp(str1, "**-")==0)
            {
                sum = sum + 6;
            }
            else
            {
                sum = sum + 7;
            }
        }
    }

    return 0;
}
