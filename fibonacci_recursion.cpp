#include<stdio.h>

int fib(int n)
{
    if(n<=1)return n;
    return fib(n-1)+fib(n-2);
}



int main()
{
    int n;
    printf("Enter the Number for the Nth Fibonacci series \n");
    scanf("%d",&n);
    int ans = fib(n);
    printf("The Nth fibonacci series : %d" , ans);
    
    return 0;
}