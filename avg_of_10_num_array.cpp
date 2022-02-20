#include<stdio.h>
int main()
{
    // printf("Enter the Size of the Array \n"); //user Defined Size
    // scanf("%d" , &n);
    int n = 10;  
    printf("Enter the 10 Elements or Numbers \n");
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
    printf("\n");
    int sum = 0;
    for(int i=0 ; i<n ;i++)
    {
        sum+=arr[i];
    }
    int avg = sum/n;
    printf("The Average of 10 Number using the array : %d \n ",avg);

    printf("\n End of the Program \n");
    return 0;
}