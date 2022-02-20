#include<stdio.h>

void swaping_function(int *a,int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
   int num1,num2;
   printf("Enter the two number for the swapping : \n");
   scanf("%d %d",&num1,&num2);
   printf("The numbers before swaping \nNumber1 : %d  \nNumber2 : %d \n",num1,num2);
   swaping_function(&num1,&num2);
   printf("The numbers After swaping \nNumber1 : %d \nNumber2 : %d \n",num1,num2);
    return 0;
}