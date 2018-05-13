#include<stdio.h>
#include<string.h>

int main()
{
    char arr[5];
    int length;

    length = strlen(gets(arr));

    if(length==3)
    {
        if(arr[0]=='1')
        {
            printf("C");
        }
        else if(arr[0]=='2')
        {
            printf("CC");
        }
        else if(arr[0]=='3')
        {
            printf("CCC");
        }
        else if(arr[0]=='4')
        {
            printf("CD");
        }
        else if(arr[0]=='5')
        {
            printf("D");
        }
        else if(arr[0]=='6')
        {
            printf("DC");
        }
        else if(arr[0]=='7')
        {
            printf("DCC");
        }
        else if(arr[0]=='8')
        {
            printf("DCCC");
        }
        else if(arr[0]=='9')
        {
            printf("CM");
        }

        if(arr[1]=='1')
        {
            printf("X");
        }
        else if(arr[1]=='2')
        {
            printf("XX");
        }
        else if(arr[1]=='3')
        {
            printf("XXX");
        }
        else if(arr[1]=='4')
        {
            printf("XL");
        }
        else if(arr[1]=='5')
        {
            printf("L");
        }
        else if(arr[1]=='6')
        {
            printf("LX");
        }
        else if(arr[1]=='7')
        {
            printf("LXX");
        }
        else if(arr[1]=='8')
        {
            printf("LXXX");
        }
        else if(arr[1]=='9')
        {
            printf("XC");
        }

        if(arr[2]=='1')
        {
            printf("I");
        }
       else if(arr[2]=='2')
        {
            printf("II");
        }
       else if(arr[2]=='3')
        {
            printf("III");
        }
       else if(arr[2]=='4')
        {
            printf("IV");
        }
       else if(arr[2]=='5')
        {
            printf("V");
        }
       else if(arr[2]=='6')
        {
            printf("VI");
        }
       else if(arr[2]=='7')
        {
            printf("VII");
        }
        else if(arr[2]=='8')
        {
            printf("VIII");
        }
        else if(arr[2]=='9')
        {
            printf("IX");
        }
    }

    else if(length==2)
    {
        if(arr[0]=='1')
        {
            printf("X");
        }
        else if(arr[0]=='2')
        {
            printf("XX");
        }
        else if(arr[0]=='3')
        {
            printf("XXX");
        }
        else if(arr[0]=='4')
        {
            printf("XL");
        }
        else if(arr[0]=='5')
        {
            printf("L");
        }
        else if(arr[0]=='6')
        {
            printf("LX");
        }
        else if(arr[0]=='7')
        {
            printf("LXX");
        }
        else if(arr[0]=='8')
        {
            printf("LXXX");
        }
        else if(arr[0]=='9')
        {
            printf("XC");
        }

        if(arr[1]=='1')
        {
            printf("I");
        }
       else if(arr[1]=='2')
        {
            printf("II");
        }
       else if(arr[1]=='3')
        {
            printf("III");
        }
       else if(arr[1]=='4')
        {
            printf("IV");
        }
       else if(arr[1]=='5')
        {
            printf("V");
        }
       else if(arr[1]=='6')
        {
            printf("VI");
        }
       else if(arr[1]=='7')
        {
            printf("VII");
        }
        else if(arr[1]=='8')
        {
            printf("VIII");
        }
        else if(arr[1]=='9')
        {
            printf("IX");
        }
    }

    else if(length==1)
    {
        if(arr[0]=='1')
        {
            printf("I");
        }
       else if(arr[0]=='2')
        {
            printf("II");
        }
       else if(arr[0]=='3')
        {
            printf("III");
        }
       else if(arr[0]=='4')
        {
            printf("IV");
        }
       else if(arr[0]=='5')
        {
            printf("V");
        }
       else if(arr[0]=='6')
        {
            printf("VI");
        }
       else if(arr[0]=='7')
        {
            printf("VII");
        }
        else if(arr[0]=='8')
        {
            printf("VIII");
        }
        else if(arr[0]=='9')
        {
            printf("IX");
        }
    }

    printf("\n");

    return 0;
}
