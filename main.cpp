//Problem Statement: given integer is Positive or Negative Checker

#include<stdio.h>
#include<stdbool.h>
int main()
{
    int num;
    printf("Enter the interger:");
    scanf("%d",&num);
    bool isPositive = (num>0);
    bool isNegative = (num<0);
    if(isPositive)
    {
        printf("The number %d is Positive.",num);
    }
    else if(isNegative)
    {
          printf("The number %d is Negative.",num);
    }
    else
    {
        printf("The number %d is neither positive nor negative.",num);
    }
}
