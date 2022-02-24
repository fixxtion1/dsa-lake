#include<stdio.h>

bool binarySearch(int arr[], int n, int target);

int main(){
	int n; 
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array:\n");
	//taking input the whole array
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	int target;	
	printf("Enter the number to search in the array:");
	scanf("%d", &target);

	if(binarySearch(arr, n, target)) printf("Element is present!");
	else printf("Element is not present");

	return 0;
}

//boolean funciton to check for the element presence in the array
bool binarySearch(int arr[], int n, int target){
	int left = 0, right = n-1, mid;

	while(left <= right){
		mid = (left + right)/2;
		
		if(arr[mid] == target) return true;
		else if(arr[mid] > target) right = mid - 1;
		else left = mid + 1;

	}


	return false;
}
