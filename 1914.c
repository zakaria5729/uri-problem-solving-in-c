#include<stdio.h>

int main()
{
    int num, n1, n2, i;
    char arr1[100], arr11[100], arr2[100], arr22[100];

    scanf("%d", &num);

    if(num>=1 && num<=100)
    {
        for(i=1; i<=num; i++)
        {
            scanf("%s %s %s %s", arr1, arr11, arr2, arr22);  //q par r impar
            scanf("%d %d", &n1, &n2); // 4+3

            if(n1>=1 && n1<=1000000000 && n2>=1 && n2<=1000000000)
            {
                if((n1+n2)%2==0 && strcmp(arr11, "PAR")==0)
                {
                    printf("%s\n", arr1);
                }

                else if((n1+n2)%2!=0 && strcmp(arr11, "IMPAR")==0)
                {
                    printf("%s\n", arr1);
                }


                if((n1+n2)%2==0 && strcmp(arr22, "PAR")==0)
                {
                    printf("%s\n", arr2);
                }

                else if((n1+n2)%2!=0 && strcmp(arr22, "IMPAR")==0)
                {
                    printf("%s\n", arr2);
                }
            }
        }
    }

    return 0;
}

