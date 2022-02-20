#include<stdio.h>
int main()
{
    printf("Enter the Size of the Array \n");
    int n;
    scanf("%d" , &n);
    printf("Enter the Elements of the array \n");
    int arr[n];
    for(int i = 0; i<n ;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The Array Formed : \n");
    for(int i=0 ; i<n ; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n The Array Formed After the Reversing: \n");
    for(int i=n-1 ; i>=0 ; i--)
    {
        printf("%d ",arr[i]);
    }
    printf("\n End of the Program \n");
    return 0;
}