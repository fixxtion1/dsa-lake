#include<stdio.h>

void selectionSort(int arr[], int n);
void printArray(int arr[], int n);
void swap(int *a, int *b);

int main(){
	int n; 
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array:\n");
	//taking input the whole array
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	selectionSort(arr, n);

	printf("After sorting using selection sort:\n");
	printArray(arr, n);

	return 0;
}

void selectionSort(int arr[], int n){
	// Idea is to repeatdely finding the minimum element
	// from unsorted part and putting it at the beginning

	int minInd;
	for(int i = 0; i < n-1; i++){
		minInd = i;
		for(int j = i+1; j < n; j++)
			if(arr[minInd] > arr[j]) minInd = j;

		swap(&arr[minInd], &arr[i]);
	}	

}

void swap(int *a, int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printArray(int arr[], int n){
	for(int i = 0; i < n; i++)
		printf("%d, ", arr[i]);

	printf("\n");
}
