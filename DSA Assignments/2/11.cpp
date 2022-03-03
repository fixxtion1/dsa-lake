#include<stdio.h>
int main()
{
   long num = 0;
   printf("Enter an integer number: ");
   scanf("%ld",&num);
   
   long *res;
   *res = 1;
   for(long i = num; i >= 1; i--)
    *res *= i;
   printf("The factorial of %ld is:-> %ld",num, *res);
    return 0; 
}
