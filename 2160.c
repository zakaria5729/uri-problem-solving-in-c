#include<stdio.h>
#include<string.h>

int main()
{
    int n1, str[500];

    gets(str);

    if(strlen(str)<=80)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}

