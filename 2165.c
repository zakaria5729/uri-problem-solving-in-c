#include<stdio.h>
#include<string.h>

int main()
{
    char arr[500];

    scanf("%[^\n]s", arr);

    if(strlen(arr)<=140)
    {
        printf("TWEET\n");
    }
    else
    {
        printf("MUTE\n");
    }

    return 0;
}

