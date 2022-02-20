#include <stdio.h>
int main()
{
    printf("The Size for the Two matrix should be the Same \n");
    printf("\n");
    printf("\n");
    printf("Enter the n*m Size of the Array-1 \n");
    int m, n;
    scanf("%d %d", &m, &n);
    printf("Enter the Elements of the 2-d array-1 \n");
    int arr1[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("The First Array Formed : \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("Enter the p*q Size of the Array-1 \n");
    int p, q;
    scanf("%d %d", &p, &q);
    printf("Enter the Elements of the 2-d array-2 \n");
    int arr2[p][q];
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    printf("The Second Array Formed : \n");
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }
    if (p != n)
        printf("Matrix can not be Multiplyed \n");
    else
    {
        int total;
        int ans_array[m][q];
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < q; j++)
            {
                total = 0;
                for(int k=0 ; k<p ; k++)
                {
                    total += arr1[i][k] * arr2[k][j];
                }
                ans_array[i][j] = total;
            }
        }

        printf("The array after the Multiplication of the two array : \n");

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                printf("%d  ", ans_array[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    printf("*******************End of the program****************");
    return 0;
}