#include<stdio.h>
int main()
{
    int sz = 0;
    printf("Enter the size of array: ");
    scanf("%d",&sz);

    printf("Enter %d elements in array:-> ",sz);
    int arr[sz];
    int *ptr = arr;
    for(int i = 0; i < sz; i++)
    scanf("%d", ptr + i);

  printf("Entered array:-> ");
  for(int i = 0; i < sz; i++)
   printf("%d, ",*(ptr+ i));
   printf("\b\b.\n");

  int copyArr[sz];
  int *cptr = copyArr;

//copying one array into another using array.
  for(int i = 0; i < sz; i++)
    *(cptr + i) = *(ptr + i);


  printf("Elements of the another array after copying:->\n");
  for(int i = 0; i < sz; i++)
   printf("%d, ", *(cptr + i));

    printf("\b\b.\n\n");

    return 0;
}

