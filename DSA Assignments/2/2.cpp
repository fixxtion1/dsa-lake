#include<stdio.h>

void bubbleSort(int arr[], int n);
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

	bubbleSort(arr, n);

	printf("After sorting using bubble sort:\n");
	printArray(arr, n);

	return 0;
}

void bubbleSort(int arr[], int n){
	// Idea is to take larger element to the end by 
	// reapeatdly swapping the adjacent elements
	
	for(int i = 0; i < n-1; i++){
		for(int j = 0; j < n-i-1; j++){
			if(arr[j] > arr[j+1])
				swap(&arr[j], &arr[j+1]);
		}
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
