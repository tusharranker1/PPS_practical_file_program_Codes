#include<stdio.h>
int main()
{
    printf("Enter the Size of the Array \n");
    int n,m;
    scanf("%d %d" , &n ,&m);
    printf("Enter the Elements of the array \n");
    int arr[n][m];
    for(int i = 0; i<n ;i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("The Array Formed : \n");
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int ans_array[m][n];
    for(int i = 0; i<n ;i++)
    {
        for(int j = 0; j<m ;j++)
        {
            ans_array[j][i] = arr[i][j];
        }
    }
    printf("Transposed Matrix : \n");
    for(int i = 0; i<m ;i++)
    {
        for(int j = 0; j<n ;j++)
        {
            printf("%d ",ans_array[i][j]);
        }
        printf("\n");
    }

    printf("\n End of the Program \n");
    return 0;
}