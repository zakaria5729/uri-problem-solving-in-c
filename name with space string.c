#include<stdio.h>
int main(void)
{
    char name[100], name2[100];
     printf("Enter your name: ");
    scanf ("%[^\n]%*c", name);
    printf("Your Name is: %s", name);

    scanf("%[^\n]%*c")


    printf("Enter your name: ");
    scanf("%[^\n]", name2);
    printf("Your Name is: %s", name2);


    return 0;
}
