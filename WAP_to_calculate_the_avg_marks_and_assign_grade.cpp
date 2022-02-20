#include<stdio.h>
int main()
{
    char first_name[100];
    char second_name[100];
    printf("Enter the first name \n");
    gets(first_name);
    printf("Enter the Second name \n");
    gets(second_name);
    int physics,maths,chemistry,english,pps;
    printf("Enter the Physics Marks out of 100\n");
    scanf("%d",&physics);
    printf("Enter the Msths Marks out of 100\n");
    scanf("%d",&maths);
    printf("Enter the Chemistry Marks out of 100\n");
    scanf("%d",&chemistry);
    printf("Enter the English Marks out of 100\n");
    scanf("%d",&english);
    printf("Enter the PPS Marks out of 100\n");
    scanf("%d",&pps);

    int avg = ((physics+maths+chemistry+english+pps)*100)/500;
    printf("The Percentage of the Student : %d \n" , avg);
    if(avg>=90)
    {
        printf("%s %s Got the Grade : A" , first_name, second_name);
    }
    else if(avg>=75 && avg<90)
    {
        printf("%s %s Got the Grade : B",first_name, second_name);
    }
    else if(avg>=60 && avg<75)
    {
        printf("%s %s Got the Grade : C",first_name, second_name);
    }
    else if(avg>=50 && avg<60)
    {
        printf("%s %s Got the Grade : D",first_name, second_name);
    }
    else{
        printf("%s %s Failed !" ,first_name,second_name);
    }
    
}