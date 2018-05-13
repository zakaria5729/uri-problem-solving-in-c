#include<stdio.h>
#include<string.h>

int main()
{
    int i, count1=0;
    char str[102];

    scanf("%s", str);

    for(i=0; str[i]; i++)
    {
        if(str[i]=='1')
        {
            count1++;
        }
    }

    if(count1%2==0)
    {
        str[i] = '0';
    }

    else
    {
        str[i] = '1';
    }

    str[i+1]='\0';

    printf("%s\n", str);

    return 0;
}
