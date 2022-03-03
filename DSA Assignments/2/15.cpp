#include<stdio.h>

void getOperations(int n1, int n2, int *sum, int *sub, int *mul, float *div)
{
    *sum = n1 + n2;   // indirectly return the sum
    *sub = n1 - n2;   // stores subtraction
    *mul = n1 * n2;   // stores product 
    *div = (float)n1 / n2;   // stores division
    
}
int main()
{
  int n1 = 0, n2 = 0;
  printf("Enter two numbers: ");
  scanf("%d%d",&n1, &n2);
int sum, sub, mul;
float div;

// calling function to compute and return sum, product, division and subtraction of two numbers
getOperations(n1,n2, &sum, &sub, &mul, &div);
  
  printf("\nSum of the numbers: %d",sum);
  printf("\nSubtraction of the numbers: %d",sub);
  printf("\nProduct of the numbers: %d",mul);
  printf("\nDivision of the numbers: %0.2f",div);
    return 0;
}
