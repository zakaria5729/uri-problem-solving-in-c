#include<stdio.h>

int main()
{
    int arr[100], arr1[100], i, j, temp;

    for(i=0; i<3; i++)
    {
       scanf("%d", &arr[i]);
       arr1[i] = arr[i];

    }

    for(i=0; i<3; i++)
    {
        for(j=0; j<3-1; j++)
        {
            if(arr1[j]>arr1[j+1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    for(i=0; i<3; i++)
    {
        printf("%d\n", arr1[i]);
    }

    printf("\n");
    for(i=0; i<3; i++)
    {
        printf("%d\n", arr[i]);
    }

    return 0;
}
