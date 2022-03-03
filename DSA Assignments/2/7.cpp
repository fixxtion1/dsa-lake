#include<stdio.h>

int main() {
  int a[100], i, j, temp, n, secmax, secmin;
  printf("Enter the number of elements of the array:\n");
  scanf("%d", & n);
  printf("\nEnter values of array:\n");
  for (i = 0; i < n; i++) {
    scanf("%d", & a[i]);
  }

  for (i = 0; i < n; i++) {
    for (j = i + 1; j < n; j++) {
      if (a[i] > a[j]) {
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }

  secmin = a[1];
  secmax = a[n - 2];
  printf("\nSeond minimum value of array is %d\n", secmin);
  printf("\nSeond maximum value of array is %d\n", secmax);
  return 0;
}
