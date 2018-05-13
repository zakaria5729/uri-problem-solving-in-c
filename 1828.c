#include<stdio.h>

int main()
{
    int t, i;
    char str1[100], str2[100];

    scanf("%d", &t);

    if(t<=100)
    {
        for(i=1; i<=t; i++)
        {
            scanf("%s %s", str1, str2);

            if(strcmp(str1, "tesoura")==0 && strcmp(str2, "papel")==0)  //1
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "papel")==0 && strcmp(str2, "tesoura")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }


            if(strcmp(str1, "papel")==0 && strcmp(str2, "pedra")==0)  //2
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "pedra")==0 && strcmp(str2, "papel")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }


            if(strcmp(str1, "pedra")==0 && strcmp(str2, "lagarto")==0)   //3
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "lagarto")==0 && strcmp(str2, "pedra")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "lagarto")==0 && strcmp(str2, "Spock")==0)  //4
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "Spock")==0 && strcmp(str2, "lagarto")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "Spock")==0 && strcmp(str2, "tesoura")==0)   //5
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "tesoura")==0 && strcmp(str2, "Spock")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "tesoura")==0 && strcmp(str2, "lagarto")==0)  //6
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "lagarto")==0 && strcmp(str2, "tesoura")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "lagarto")==0 && strcmp(str2, "papel")==0)  //7
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "papel")==0 && strcmp(str2, "lagarto")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "papel")==0 && strcmp(str2, "Spock")==0)  //8
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "Spock")==0 && strcmp(str2, "papel")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "Spock")==0 && strcmp(str2, "pedra")==0)  //9
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "pedra")==0 && strcmp(str2, "Spock")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, "pedra")==0 && strcmp(str2, "tesoura")==0)  //10
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            if(strcmp(str1, "tesoura")==0 && strcmp(str2, "pedra")==0)
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }

            if(strcmp(str1, str2)==0)  //new game
            {
                printf("Caso #%d: De novo!\n", i);
            }
        }
    }

    return 0;
}
