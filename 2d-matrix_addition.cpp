#include<stdio.h>
int main()
{
    printf("The Size for the Two matrix should be the Same \n");
    printf("\n");
    printf("\n");
    printf("Enter the n*m Size of the Array-1 \n");
    int n,m;
    scanf("%d %d" , &n,&m);
    printf("Enter the Elements of the 2-d array-1 \n");
    int arr1[n][m];
    for(int i = 0; i<n ;i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("The First Array Formed : \n");
    for(int i=0 ; i<n ; i++)
    {
        for(int  j=0 ; j<m ; j++)
        {
            printf("%d ",arr1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the Elements of the 2-d array-2 \n");
    int arr2[n][m];
    for(int i = 0; i<n ;i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    printf("The Second Array Formed : \n");
    for(int i=0 ; i<n ; i++)
    {
        for(int  j=0 ; j<m ; j++)
        {
            printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }

    int ans_array[n][m];
    for(int i=0 ; i<n ;i++)
    {
        for(int j=0 ; j<m ; j++)
        {
            ans_array[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The array after the addition of the two array : \n");

    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<m ;j++)
        {
            printf("%d  ",ans_array[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("*******************End of the program****************");
    return 0;
}