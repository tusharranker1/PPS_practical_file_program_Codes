#include<stdio.h>

int factorial(int n)
{
    if(n==0 or n==1)return 1;
    return n * factorial(n-1);
}

int main()
{
    printf("Enter the Number for the Factorial \n");
    int n;
    scanf("%d" , &n);
    int ans = factorial(n);
    printf("Factorial of the Number %d :: %d \n" ,n,ans);
    return 0;
}