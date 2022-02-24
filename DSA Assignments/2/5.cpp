#include<stdio.h>

int main(){
	int n; 
	printf("Enter the size of the array: ");
	scanf("%d", &n);

	int arr[n];
	printf("Enter the elements of the array:\n");
	//taking input the whole array
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);

	for(int j=1;; j++){
		bool found = false;

		for(int i=0; i<n; i++){
			if(j == arr[i]){ 
				found = true;
				break;
			}
		}
		if(!found) {
			printf("Smallest Positive number missing from the array: %d", j);
			break;
		}
	}

	return 0;
}
