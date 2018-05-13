#include <stdio.h>
int main()
{
    int a, n1, i, count1=0, count2=0;
    scanf("%d",&a);

    if(a < 10000){
    for(i=0; i<a; i++)
    {
        scanf("%d", &n1);
        if(n1>=10 && n1<=20)
        {
            count1++;
        }
        else
        {
            count2++;
        }
    }
    printf("%d in\n", count1);
    printf("%d out\n", count2);
    }

 return 0;
}
