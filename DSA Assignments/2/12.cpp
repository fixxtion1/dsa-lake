#include<stdio.h>
void Sort(int *arr, int size)
{
    int indx = 0, min = 0;
     for(int i = 0; i < size; i++)
     { 
         min = *(arr  + i);
             indx = i;
         for(int j = i; j < size; j++)
         {
             if(*(arr + j) < min)
             { 
                min = *(arr + j);
                indx = j;
             }
         }
         int temp = *(arr + i);
         *(arr + i) = min;
         *(arr + indx) = temp;
     }
}
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

  Sort(arr, sz);
  printf("Array is sorted using pointers->\n");
 printf("Sorted array:-> ");
  for(int i = 0; i < sz; i++)
   printf("%d, ", *(ptr + i));

    printf("\b\b.\n\n");

    return 0;
}
