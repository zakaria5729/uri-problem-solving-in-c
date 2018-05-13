#include<stdio.h>

int main()
{
    int arr1[100][100], arr2[100][100], n1, n2, r, c;

    printf("Enter the number of row and column\n");
    scanf("%d %d", &n1, &n2);

    printf("\nEnter the %dx%d matrix\n", n1, n2);
    for(r=0; r<n1; r++)
    {
        for(c=0; c<n2; c++)
        {
            scanf("%d", &arr1[r][c]);
        }
    }

    /*matrix transpose*/
    for(r=0; r<n2; r++)
    {
        for(c=0; c<n1; c++)
        {
            arr2[r][c] = arr1[c][r];
        }
    }

    /*matrix transpose print*/
    printf("\nThe transpose matrix is:\n");
    for(r=0; r<n2; r++)
    {
        for(c=0; c<n1; c++)
        {
            printf("%d ", arr2[r][c]);
        }
        printf("\n");
    }

    return 0;
}
