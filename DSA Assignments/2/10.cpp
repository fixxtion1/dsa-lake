#include<stdio.h>
int main()
{
    int sz = 0;
    printf("Enter the size of array: ");
    scanf("%d",&sz);

    printf("Enter %d elements in array:-> ",sz);
    int arr[sz];
    for(int i = 0; i < sz; i++)
    scanf("%d",&arr[i]);
  
  printf("Entered array:->  {");
  for(int i = 0; i < sz; i++)
   printf("%d, ",arr[i]);

    printf("\b\b}\n");
  for(int i = 0; i < sz; i++)
  {
      int count = 0, indx = i;
      for(int j = i+1; j < sz; j++)
      {
          if(arr[i] == arr[j])
          {
              ++count;
              break;
          }
      }
      if(count == 1)
     {
       printf("Repeated number with smallest occurrence index is:-> %d",arr[indx]);
       break;
     }
  }
  
    return 0;
}
