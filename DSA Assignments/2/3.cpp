#include<stdio.h>

void insertionSort(int arr[], int n);
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

	insertionSort(arr, n);

	printf("After sorting using insertion sort:\n");
	printArray(arr, n);

	return 0;
}

void insertionSort(int arr[], int n){
	// Idea is similar to playing cards in our hands
	// inserting the card in its correction position
	// in a sorted part
	
	int key, j;
	for(int i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;

		while(j >= 0 && arr[j] > key){
			arr[j+1]  = arr[j];
			j = j-1;
		}
		arr[j+1] = key;
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
